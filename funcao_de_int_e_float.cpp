#include <iostream>
#include <string>
#include <limits>
using namespace std;

float teste_int_e_float(string prompt);

int main() {
    float num = teste_int_e_float("Digite um número real: ");
    cout << "O número digitado é " << num << endl;

    return 0;
}

float teste_int_e_float(string prompt) {
    string input;

    while (true) {
        cout << prompt;
        cin >> input;

        bool isNumeric = true;
        bool hasDecimalPoint = false;
        for (char c : input) {
            if (!isdigit(c)) {
                if (c == '.' && !hasDecimalPoint) {
                    hasDecimalPoint = true;
                } else {
                    isNumeric = false;
                    break;
                }
            }
        }

        if (!isNumeric) {
            cout << "Entrada inválida! Digite um número real." << endl;
            continue;
        }

        try {
            float num = stof(input);
            return num;
        }
        catch (...) {
            cout << "Entrada inválida! Digite um número real." << endl;
        }
    }
}
