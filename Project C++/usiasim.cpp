#include <iostream>
using namespace std;

int man(){
    int usia;
    cout << "Masukkan usia: ";
    cin >> usia;

    if (usia > 17 ) //Lengkapi bagian ini
        cout << "Anda cukup usia untuk mendapatkan SIM";
    else
        cout << "Anda belum cukup usia";

    return 0;
}