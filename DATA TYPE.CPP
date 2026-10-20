//DATA TYPES IN C++
#include<iostream>
using namespace std;
int main(){
    int a = 5;
    float b = 5.5;
    double c = 5.55;
    char d = 'A';
    bool e = true;
    cout << "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of float: " << sizeof(b) << " bytes" << endl;
    cout << "Size of double: " << sizeof(c) << " bytes" << endl;
    cout << "Size of char: " << sizeof(d) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(e) << " bytes" << endl;
    return 0;
}