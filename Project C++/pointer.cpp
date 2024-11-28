#include <iostream>
using namespace std;

int main(){
    string nama="Candra";
    int usia=18;
    int tahun_lahir=2006;

    cout << "Alamat memori variabel nama: " << &nama << endl;
    cout << "Alamat memori variabel usia: " << &usia << endl;
    cout << "Alamat memori variabel tahun_lahir: " << &tahun_lahir << endl;
    
    return 0;
}