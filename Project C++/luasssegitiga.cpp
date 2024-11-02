#include <iostream>
#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int alas, tinggi, luas;

    cout << "Masukkan alas Segitiga : ";
    cin >> alas;
    cout << "Masukkan tinggi Segitiga : ";
    cin >> tinggi; 

    luas = alas * tinggi / 2;
    cout << "Luas Segitiga adalah = " << luas;
    return 0;
}