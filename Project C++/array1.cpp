#include <iostream>
using namespace std;

int main(){
    //Deklarasi Array
    int nilai[6];

    //Memberikan nilai pada array
    nilai[0]=3;
    nilai[1]=6;
    nilai[2]=9;
    nilai[3]=12;
    nilai[4]=15;
    nilai[5]=20;

    //Mengakses nilai pada aray
    cout << "Nilai ke-1: " << nilai[0]  << endl; //Memanggil indeks 0
    cout << "Nilai ke-2: " << nilai[1]  << endl; //Memanggil indeks 1
    cout << "Nilai ke-6: " << nilai[5]  << endl; //Memanggil indeks 6
    cout << "=====SELESAI=====";
}