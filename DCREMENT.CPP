// DECREMENT UNARY OPERATOR --
#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b = --a;
    cout << b << endl;// output = 9;
    cout<< a << endl; // output = 9;
    return 0;
}

// here is the 2nd example of decrement unary operator
#include <iostream> 
using namespace std;
int main(){
    int a = 15;
    int b = a--;
    cout<< b << endl; // pehla kaam hoga phir update hoga yaha abhi ouput me 15 hai 
    cout << a << endl; // yaha update ho kar 14 ho gya hai 
    return 0;
}
