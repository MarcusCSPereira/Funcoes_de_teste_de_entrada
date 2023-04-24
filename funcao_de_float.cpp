#include <iostream>
#include <string>
#include <limits>
using namespace std;

float teste_float(string prompt);

int main() {
    float num = teste_float("Digite um número real ou inteiro: ");
    cout << "O número digitado é " << num << endl;

    return 0;
}

float teste_float(string prompt) {
    float num;

    while (true) {
        cout << prompt;
        cin >> num;

        if (cin.fail()) {
            cout << "Entrada inválida! Digite um número real ou inteiro." << endl;
            cin.clear();
            cin.ignore(numeric_limits < streamsize>::max(), '\n');
        }
        else {
            break;
        }
    }

    return num;
}
