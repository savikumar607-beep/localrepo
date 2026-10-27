// MISCELLANEOUS CONCEPTS

// Bitwise operatar
// Bitwise & ka use kase karte hai 

//  & ->  0 & 0 -> 0
//        0 & 1 -> 0
//        1 & 0 -> 0
//        1 & 1 -> 0
 
#include <iostream>
using namespace std;
int main (){
    int a = 4;
    int b = 8;
    cout<<(4 & 8)<< endl; // ouput = 0 ;
    return 0 ;
}

// Bitwise Or |  ka use kase karte hai  

//  | ->    0|0 -> 1
//          1|0 -> 1
//          0|1 -> 1
//          1|1 -> 1

#include <iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 8;
    cout<< (a | b) << endl; // ouput = 12 ke equal hoga 
    return 0 ;
}

// Bitwise Xor ^ 
// Xor operator same hai toh 0 ayega or alag alag hai 1 ayega 
//   0 ^ 0 = 0
//   0 ^ 1 = 0
//   1 ^ 0 = 1
//   1 ^ 1 = 0

//   ^    = 0100^1000 = 1100 Ye 12 ke equal hoga Xor karne ke baad

#include <iostream> 
using namespace std;
int main (){
    int a = 4 ;
    int b = 8 ; 
    cout<< (4 ^ 8 ) << endl ; // ouput = 12 ke equal hoga 
    return 0 ;
}

// Bitwise Left Shift operator <<
//   n << i = n<<1;
//   100 << karte hai toh 1000 = (8)10 ke equal ayega 

#include <iostream>
using namespace std ;
int main(){
    cout<< (4 << 1 ) << endl; // ouput = 8 ke equal hai 
    cout<< ( 10 << 2) << endl; // ouput = 40 ke equal hai
    return 0 ;
}

// Bitwise Right Shift >> 
// 10 >> 2 = 1010 >> right shift karte hai toh 0101 ayega ye right ke traf shit hota hai 
// 101 = (5)10 ke equvalent hai 
#include <iostream> 
using namespace std; 
int main (){
cout << (10 >> 1) << endl; // 5 ke equal ayega ouput 
return 0 ; 
}

// left shift ka mtlv hai a << b = ans = a*2b ke equal hota hi 
// right shit ka mtlv hai a>> b = ans = a/2b ke equal hota hai 

// precedence ka use 
// Ex : - 
#include <iostream>
using namespace std; 
int main(){
    cout<< (5-2 )*6 << endl;
    return 0;
}

// jab do same precedence wale * , % aye jaye to left  to right se karte hai 
//  ans = 4*5%2 = 20%2 = 0 

#include <iostream>
using namespace std; 
int main (){
    cout<< (4*5%2) << endl ; // 0 ke equal ayega 
    return 0 ;
}

// Scope 
// local variable , global variable
#include <iostream>
using namespace std;
int n = 10; // global variable hia 

int main (){ 
    // Aur Ye curly brace me hai wo scope hai last wala curly brace hai waha tak hoga 
    int a = 4; // local variable hia 
    cout<< a << endl; 
    cout << n <<  endl;
    return 0 ; 
}

// DATA TYPE MODIFIERS
// change meaning of data types 
//   long 
//   short 
//   long long 
//   signed 
//   unsigned