#include <iostream>
#include <vector>

int main() {
    // Exemplo 1: Loop com for
    std::cout << "Exemplo 1: Loop com for" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Iteração " << i + 1 << std::endl;
    }

    // Exemplo 2: Loop com while
    std::cout << "\nExemplo 2: Loop com while" << std::endl;
    int j = 0;
    while (j < 5) {
        std::cout << "Iteração " << j + 1 << std::endl;
        ++j;
    }

    // Exemplo 3: Loop com do-while
    std::cout << "\nExemplo 3: Loop com do-while" << std::endl;
    int k = 0;
    do {
        std::cout << "Iteração " << k + 1 << std::endl;
        ++k;
    } while (k < 5);

    // Exemplo 4: Loop com range-based for
    std::cout << "\nExemplo 4: Loop com range-based for" << std::endl;
    std::vector<int> numeros = {1, 2, 3, 4, 5};
    for (const auto& numero : numeros) {
        std::cout << "Número: " << numero << std::endl;
    }

    // Exemplo 5: Loop com break/continue
    std::cout << "\nExemplo 5: Loop com break/continue" << std::endl;
    for (int m = 0; m < 10; ++m) {
        if (m == 3) {
            std::cout << "Encontrou 3! Vamos parar." << std::endl;
            break;
        } else if (m % 2 == 0) {
            std::cout << "Número par encontrado. Continuando para o próximo." << std::endl;
            continue;
        }
        std::cout << "Iteração " << m + 1 << std::endl;
    }

    return 0;
}
