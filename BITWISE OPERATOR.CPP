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
