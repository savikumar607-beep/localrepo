// BASIC TO ADVANCE LEVEL PATTERN PRINTING IN C++ LANGUAGE
// BEGINNER FRIENDLY PATTERN PRINTING IN C++ LANGUAGE
// REVERSE TRIANGLE PATTERN 
// WITH NUMBERS N = 4
//  1
//  2 1
//  3 2 1
//  4 3 2 1
#include <iostream>
using namespace std;
int main (){
    int n = 4 ;
    for(int i = 0; i<n; i++){
        for(int j=i+1; j>0; j--){
            cout<< j << " ";
        }
        cout << endl;
    }
    return 0 ;
}

// FLYOD'S TRIANGLE PATTERN 
// REVERSE ORDER ME NUM KO PRINT KARNA HAI
// MEDIUM PATTERN 
// WITH NUMBERS N = 4
//    1 
//    2 3 
//    4 5 6
//    7 8 9 10 
#include <iostream>
using namespace std;
int main (){
    int n = 4;
    int num = 1;
    for(int i = 0; i<n; i++){
        for (int j = i+1; j>0; j--){ // backward number
            cout << num << " ";
            num++;
        }
        cout<< endl;
    }
    return 0 ;
}

// CHARACTER WALA PATTERN REVERSE ORDER ME 
// REVERSE TRIANGLE CHARACTER PATTERN 
// WITH NUMBERS N = 4;
#include <iostream>
using namespace std;
int main (){
    int n = 4 ;
    char ch = 'A';
    for(int i = 0; i<n; i++){
        for(int j = i+1; j>0; j--){
            cout<< ch << " ";
            ch++;
        }
        cout<< endl;
    }
    return 0;
}

// FLYOD'S TRIANGLE PATTERN 
// REVERSE ORDER ME NUM KO PRINT KARNA HAI
// MEDIUM PATTERN 
// WITH NUMBERS N = 4
//    A
//    B C 
//    D E F
//    G H I J
#include <iostream>
using namespace std;
int main (){
    int n = 4;
    char ch = 'A';
    for(int i = 0; i<n; i++){
        for (int j = 0; j<i+1; j++){ 
            cout << ch << " ";
            ch++;
        }
        cout<< endl;
    }
    return 0 ;
}

// INVERTED TRIANGLE PATTERN 
// REVERSE NUMBERS N = 4 
// YAHA PAHLE SPACE KO COUNT KAR LENGE OR SPACE PRINT KARA LENGE
// USKE BAAD NUM KO PRINT KAR LENGE
// ISME KE OUTER LOOP HAI JISME SPACE KO COUNT KAR LENGE OR INNER LOOP HAI JISME NUM KO PRINT KAR LENGE
//   1 1 1 1
//     2 2 2
//       3 3 
//         4

#include <iostream>
using namespace std;
int main (){
    int n = 4;
    int num = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i; j++){
            cout<<" ";
        // space ko print karne ke liye humne cout<<" " use kiya hai 
        }
        for(int j = 0; j<n-1; j++){
        // num ko print karne ke liye humne cout<<(i+1) use kiya hai
                
        cout << i+1 ;
        }
        cout << endl;
    }
    
   return 0;
}

// INVERTED CHARACTER TRIANGLE  PATTERN 
// WITH NUMBERS N = 4
// UPPER SIDE ME PATTERN HAI WO AS IT IS SAME HAI OR LOGIC BHI SAME USE KIYA GYA HAI

//    A A A A 
//      B B B 
//        C C
//          D

#include <iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i; j++){
            cout<<" ";
        }
        for(int j = 0; j<n-i; j++){
            cout<< char('A'+i);
        }
        cout<< endl;
    }
    return 0;
}

// PYRAMID PATTERN
// WITH NUMBERS N = 4
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include <iostream>
using namespace std;
int main (){
    int n = 4;
    for(int i = 0; i<n; i++){
        //space  ko karne ke liye hum loop ko : n-i-1 tak chalayenge
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }
        // num : i+1 tak chalayenge
        for(int j = 1; j<=i+1; j++){
            cout<<j;
        }
        // nums2 : i tak chalayenge
        for(int j = i; j>0; j--){
            cout<<j;
        }
        cout<< endl;
    }
    return 0 ;
}

//HOLLOW DIAMOND PATTERN 
// N = 4;
// HOLLOW DIAMOND PATTERN 
// N = 4;
#include <iostream>
using namespace std;

int main() {
    int n = 4;
    
    // Top half
    for(int i = 0; i < n; i++) {
        // Leading spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << "*";
        
        if(i != 0) {
            // Inner spaces
            for(int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    
    // Bottom half
    for(int i = n - 2; i >= 0; i--) {
        // Leading spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << "*";
        
        if(i != 0) {
            // Inner spaces
            for(int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}