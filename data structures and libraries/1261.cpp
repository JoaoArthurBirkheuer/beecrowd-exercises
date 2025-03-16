#include <iostream>
#include <map>
#include <sstream>
#include <string>

int main() {
    int M, N;
    std::cin >> M >> N;
    std::cin.ignore();

    // Dictionary to hold words and their associated Hay Point values
    std::map<std::string, double> hayPointDict;

    for (int i = 0; i < M; ++i) {
        std::string word;
        double value;
        std::cin >> word >> value;
        hayPointDict[word] = value;
    }

    std::cin.ignore();

    for (int i = 0; i < N; ++i) {
        double totalSalary = 0.0;
        std::string line;

        while (std::getline(std::cin, line)) {
            if (line == ".") {
                break;
            }
            std::istringstream iss(line);
            std::string word;

            while (iss >> word) {
                if (hayPointDict.find(word) != hayPointDict.end()) {
                    totalSalary += hayPointDict[word];
                }
            }
        }

        std::cout << static_cast<int>(totalSalary) << std::endl;
    }

    return 0;
}
