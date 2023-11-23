#include <iostream>
#include <string>

int main() {
    std::string sentence = "";

    std::cout << "Tamano de la cadena: " << sentence.size() << std::endl;

    std::cout << "¿Esta la cadena vacia? " << (sentence.empty() ? "Si" : "No") << std::endl;

    return 0;
}
