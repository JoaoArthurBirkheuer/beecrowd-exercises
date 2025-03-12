#include <bits/stdc++.h>
using namespace std;

void formatCode(const string &input) {
    string output;
    string indent;
    bool newLine = false;
    bool insideString = false;
    bool escapeNext = false;  // Tracks `\` for escape sequences
    bool isForLoop = false;   // Tracks if we're inside a `for` loop header
    bool isInclude = false;   // Tracks if we're processing an `#include` statement

    for (size_t i = 0; i < input.length(); i++) {
        char c = input[i];

        // Handle escape sequences inside strings (e.g., `\"`)
        if (insideString && c == '\\') {
            escapeNext = !escapeNext;
            output += c;
            continue;
        }

        // Toggle insideString only if it's not an escaped quote
        if (c == '"' && !escapeNext) {
            insideString = !insideString;
        }
        escapeNext = false;  // Reset escape tracker

        // Handle `#include` statements
        if (c == '#') {
            isInclude = true;
            if (!output.empty() && output.back() != '\n') {
                output += "\n";
            }
            output += c;
            continue;  // Skip further processing for this character
        } else if (isInclude) {
            output += c;
            if (c == '\n') {
                isInclude = false;
            }
            continue;  // Skip further processing for this character
        }

        // Ensure new lines and indentation happen only outside string literals
        if (!insideString) {
            if (c == '{') {
                if (!newLine && !output.empty()) {
                    output += "\n";
                }
                output += indent + "{\n";
                indent += "....";
                newLine = true;
                isForLoop = false;  // Reset `for` loop tracking after opening `{`
            } else if (c == '}') {
                indent = indent.substr(0, indent.length() - 4);
                if (!newLine && !output.empty()) {
                    output += "\n";
                }
                output += indent + "}\n";
                newLine = true;
            } else if (c == ';' && !isForLoop) {
                output += ";\n";
                newLine = true;
            } else if (c == '\n') {
                // Ignore newlines in the input to avoid duplicating them
                continue;
            } else {
                if (!output.empty() && newLine) {
                    output += indent;
                    newLine = false;
                }
                output += c;

                // Detect `for` loop header
                if (c == 'f' && i + 2 < input.length() && input[i + 1] == 'o' && input[i + 2] == 'r') {
                    isForLoop = true;
                }
                // Reset `for` loop tracking after the opening `{`
                if (isForLoop && c == '{') {
                    isForLoop = false;
                }
            }
        } else {
            // Preserve exact formatting inside string literals
            output += c;
        }
    }

    // Remove the last newline if it exists
    if (!output.empty() && output.back() == '\n') {
        output.pop_back();
    }

    cout << output;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    char c;
    while (cin.get(c)) {
        input += c;
    }

    formatCode(input);
    cout << endl;

    return 0;
}
