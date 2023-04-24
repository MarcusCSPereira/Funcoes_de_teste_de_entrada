#include <iostream>
#include <string>
#include <limits>
using namespace std;

int teste_inteiro(string prompt);

int main() {
    int num = teste_inteiro("Digite um número inteiro: ");
    cout << "O número digitado é " << num << endl;

    return 0;
}

int teste_inteiro(string prompt) {
    int num;

    while (true) {
        cout << prompt;
        cin >> num;

        if (cin.fail()) {
            cout << "Entrada inválida! Digite um número inteiro." << endl;
            cin.clear();
            cin.ignore(numeric_limits < streamsize>::max(), '\n');
        }
        else {
            break;
        }
    }

    return num;
}
