#ifndef INIMIGO_H
#define INIMIGO_H
#include <iostream>
#include <string>

inline void exibirInimigo(std::string nome, int vida, int ataque) {
    std::cout << "=== INIMIGO ===" << std::endl;
    std::cout << "Nome: " << nome << " | Vida: " << vida << " | Ataque: " << ataque << std::endl;
}
#endif // Modificação de teste do inimigo 
