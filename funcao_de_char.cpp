#include <cstdio>
#include <iostream>
#include <limits>
#include <string>

char teste_de_char(std::string prompt);

int main() {
    char c = teste_de_char("Digite um caractere: ");
    std::cout << "O caractere digitado foi: " << c << std::endl;

    return 0;
}

char teste_de_char(std::string prompt) {
    std::cout << prompt;

    int c = getchar();

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return static_cast<char>(c);
}
