#ifndef HEROI_H
#define HEROI_H
#include <iostream>
#include <string>

inline void exibirHeroi(std::string nome, int vida, int ataque) {
    std::cout << "=== HEROI ===" << std::endl;
    std::cout << "Nome: " << nome << " | Vida: " << vida << " | Ataque: " << ataque << std::endl;
}
#endif
