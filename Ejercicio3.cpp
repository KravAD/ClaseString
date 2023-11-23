#include <iostream>
#include <string>

int main() {
    std::string str1 = "Las croquetas de Manolo ";

    std::string str2 = "hacen que las mujeres lo rechacen.";

    std::string str3 = str1 + str2;

    std::cout << str3 << std::endl;
    return 0;
}