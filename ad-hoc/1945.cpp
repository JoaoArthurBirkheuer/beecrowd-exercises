#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <cctype>
#include <vector>

int getValue(const std::string& operand_str, const std::map<std::string, int>& var_values) {
    bool is_number = true;
    for (char c : operand_str) {
        if (!std::isdigit(c)) {
            is_number = false;
            break;
        }
    }
    if (is_number) {
        return std::stoi(operand_str);
    } else {
        auto it = var_values.find(operand_str);
        if (it != var_values.end()) {
            return it->second;
        } else {
            return 0;
        }
    }
}

int main() {
    std::map<std::string, int> var_values;
    std::string line;
    int last_assigned_value = -1;

    while (std::getline(std::cin, line)) {
        std::stringstream ss(line);
        std::string var_name_str;
        std::string assign_op;
        std::string first_operand_str;
        ss >> var_name_str >> assign_op >> first_operand_str;

        if (assign_op != ":=") {
            continue;
        }

        std::string operation_op;
        if (ss >> operation_op) {
            std::string second_operand_str;
            ss >> second_operand_str;
            int value1 = getValue(first_operand_str, var_values);
            int value2 = getValue(second_operand_str, var_values);

            if (operation_op == "+") {
                var_values[var_name_str] = value1 + value2;
            } else {
                continue;
            }
        } else {
            var_values[var_name_str] = getValue(first_operand_str, var_values);
        }
        last_assigned_value = var_values[var_name_str];
    }

    std::cout << last_assigned_value << std::endl;

    return 0;
}