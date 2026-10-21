// a++ pehla kam phir output
//++a pehle output dedo or phir kam mtlv output
 
//here example unary operator
#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b = a++; //kaam : phir update
    cout << b << endl; //10;
    cout<< a << endl; // 11;
    return 0;
}


// here 2nd example for unary operator
#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b = ++a;
    cout<< b << endl; //11
    cout<< a << endl;
    return 0;
}