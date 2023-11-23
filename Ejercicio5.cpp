#include <iostream>
#include <string>

int main() {
    std::string sentence = "Hola mundo.";

    std::string sub = sentence.substr(5, 5);

    std::cout << "Subcadena: " << sub << std::endl;

    std::string to_insert = ". Balls";

    sentence.insert(sentence.find(sub) + sub.size(), to_insert);

    std::cout << "Cadena resultante: " << sentence << std::endl;

    return 0;
}