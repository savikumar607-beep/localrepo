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
