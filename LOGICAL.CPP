//logical operators
// &&, ||, !
// logical operators se hame ye batate hai ki do ya do se adhik conditions true hai ya false. Ye operators boolean values (true ya false) return karte hai.
// ! ka istemaal ek condition ko ulta karne ke liye kiya jata hai. Agar condition true hai to ! use false bana deta hai aur agar condition false hai to ! use true bana deta hai.
// && ka istemaal do ya do se adhik conditions ko check karne ke liye kiya jata hai. Agar dono conditions true hai to && true return karega, agar dono me se koi bhi condition false hai to && false return karega.
// || ka istemaal do ya do se adhik conditions ko check karne ke liye kiya jata hai. Agar koi bhi condition true hai to || true return karega, agar dono conditions false hai to || false return karega.

// Example of logical operators in C++
#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;
    cout<< "(10>20) && (10<20): " << ((a > b) && (a < 20) )<< endl; // false
    cout<< "(10>20) || (10<20): " << ((a > b) || (a < 20) )<< endl; // true
    cout<<"!(10>20):"<<(!(a>b))<<endl;//true
    return 0;

}
