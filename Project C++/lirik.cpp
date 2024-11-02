#include <iostream>
#include <vector>
#include <random>

std::vector<std::string> kata_nomina = {"cinta", "hati", "hidup", "mimpi"};
std::vector<std::string> kata_verba = {"berkibar", "terbang", "mengharap", "mencinta"};

// Fungsi untuk memilih kata acak
std::string consume(const std::vector<std::string>& kata) {
    // ... (implementasi pemilihan acak)
}

int main() {
    std::string subjek = consume(kata_nomina);
    std::string verba = consume(kata_verba);
    std::cout << subjek << " " << verba << std::endl;
    return 0;
}