#include <iostream>
using namespace std;

int main(){

    string nama = "CANDRA";
    int var1 = 2, var2 = 5;
    int *point_Var = &var1;

    cout << "var1 = " << &var1 << endl;
    cout << "point_Var = "<< point_Var << endl;
    
    point_Var=&var2;
    cout << "var2 = "<<&var2 << endl;
    cout << "point_Var = "<< point_Var << endl;

    return 0;
}