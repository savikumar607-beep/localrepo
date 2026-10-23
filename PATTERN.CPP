// SQUARE PATTEN 
#include <iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i = 1; i<=n; i++){
        // i ka first iteration j wala loop pura chlega 
        for(int j = 1; j<=n; j++) {
            cout<< j;
        }  
       cout <<endl;
    }
        return 0; 
}

// AUR JAB NUM KE JAGAH PE STAR PRINT KARANA HAI TOH 
//AUR SPACE ME STAR PRINT KARNA HO TOH 
// METHOD :-1
// ans = ****
//       ****
//       ****
 //      ****
#include <iostream>
using namespace std;
int main (){
    int n = 4;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout<<"*";
         //cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//CHARACTER WALA PATTERN KO PRINT KARNE KE LIYE
//    ans = ABCDE
//          ABCDE
//          ABCDE
//          ABCDE
//          ABCDE

#include <iostream>
using namespace std;
int main (){
    int n = 5;
    for(int i = 0; i<=n; i++){
        char ch = 'A';
        for(int j = 0; j<=n; j++){  
            cout<<ch;
            ch = ch+1;
        }
        cout<<endl;
    }
    return 0;
}

// CONTNOUS MANNER ME NUMBER KO PRINT KARNA HAI ISS PATTERN ME 
// 1 2 3
// 4 5 6
// 7 8 9
#include <iostream> 
using namespace std;
int main (){
    int n = 3;
    int num = 1;
    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
            cout<<num<<" ";
            num++;

        }
        cout<<endl;

    }
    return 0;
}

// CHARACTER WALA PATTERN PRINT KARNE KE LIYE LOGIC 
//    A B C
//    D E F
//    G H I
#include <iostream>
using namespace std;
int main (){
    int n = 3 ;
    char ch = 'A';
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}

//  STAR WALA PATTERN KO PRIN KARNE KE LIYE JO TRIANGLE SHAPE KE LIYE HAI YE LOGIC
//   *
//   **
//   ***
//   ****
#include <iostream>
using namespace std;
int main (){
  int n = 4;
  for ( int i = 0; i<n; i++){
    for( int j = 0; j<i+1; j++){
        cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}