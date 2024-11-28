#include<iostream>
using namespace std;

int main(){

    int var = 10;

    int* point_var = &var;

    cout << "var: " << var << endl;

    cout << "alamat var: " << &var << endl;
    
    cout << "point-var: " << point_var << endl;

    cout << "alamat point-var: " << *point_var << endl;

    return 0;

}