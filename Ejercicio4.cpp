#include <iostream>
#include <string>

int main() {
    std::string sentence = "El examen de fisica saldra igual de mal que Espana despues de la presidencia de Sanchez.";

    std::string to_find = "Espana";

    std::string to_replace = "el Real Madrid";


    size_t pos = sentence.find(to_find);

    if (pos != std::string::npos) {

        std::cout << "La subcadena se encontró en el índice: " << pos << std::endl;

        sentence.replace(pos, to_find.length(), to_replace);
    }

    std::cout << "La cadena resultante es: " << sentence << std::endl;
    std::cout << to_find << " Tienes: " << to_find.length() << " caracteres." << std::endl;

    return 0;
}