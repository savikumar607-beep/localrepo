// FUNCTION SYNTAX 

#include <iostream>
using namespace std;
// Function defination
void printHello(){
    cout<< " hello" << endl;
}
int main(){
    // Function call /invoke
    printHello();
}

// Parameters 
// returnType funName (tpe p1, type p2...){
             //do some work 

//}
#include <iostream>
using namespace std;
int sum(int a ,int b){
    int s = (a + b);
    return s;
}
int main (){
    cout<<  (10 +20)<<endl;
  return 0;
}
// WRITE A FUNCTION TO PRINT COUNTING FROM 1 TO 100
#include <iostream>
using namespace std;
void printNumber(int n){
    for(int i = 0; i<n; i++){
        cout<<i<< " ";
    }
}
int main(){
    printNumber(100);

    return 0;
}

// CALCULATE SUM OF NUMBERS FROM 1 TO N 
#include <iostream>
using namespace std;
int sumN(int n){
    int sum = 0; 
    for (int i = 0; i<n; i++){
        sum = sum +i;
    }
    return sum;
}
int main (){
    cout<<sumN(5)<<endl;
    cout<< sumN(10)<< endl;
    return 0;
}

// calcluate n factorial
#include <iostream>
using namespace std;
int factorialN( int n ){
    int fact = 1;
    for (int i = 0; i<n; i++){
        int fact = fact + i ;
    }
    return fact;
}
int main (){
    cout<<factorialN(5)<<endl;
    return 0;
}

// PASS BY VALUE
#include <iostream>
using namespace std;

int sum(int a, int b){
return  a+b;
}

int main(){
    int a = 5, b=4;
   cout<<(a,b)<<endl;
    return 0;
}

// PASS BY VALUE 
// COPY OF ARGUMENT IS PASSED TO FUNCTION
// JAB BHI FUNCTION SE CALL KARTE HAI TOH COPY BANTI HAI A OR B VALUE KA OR PASS HOTI HAI
#include <iostream>
using namespace std;
int sum(int a , int b){
    return a+b;

}
int main (){
    int x = 5 , y = 4;
    cout<<sum(x, y )<<endl;
    return 0;
}
