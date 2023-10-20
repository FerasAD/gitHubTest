#include <iostream>

int main() {

    std::string names[] = {"Feras", "Hamdan", "Zayd", "Dammag"};

    for(int i = 0; sizeof(names)/sizeof(std::string); i++) {
        std::cout << names[i] << '\n';
    }



    return 0;
}