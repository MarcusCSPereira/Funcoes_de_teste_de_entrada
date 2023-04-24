#include <iostream>
#include <string>
#include <limits>

using namespace std;

string teste_de_string(string prompt);

int main() {
    string input = teste_de_string("Digite uma string: ");
    cout << "A string digitada foi: " << input << endl;

    return 0;
}

    string teste_de_string(string prompt) {
    string input;
    cout << prompt;

    getline(cin, input);

    return input;
}
