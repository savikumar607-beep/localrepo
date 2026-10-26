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
// PRIMITIVE DATA TYPE PASS KARTE HAI WO PASS VALUE HOTA HAI
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

#include <iostream>
using namespace std;
void changeX(int x){
     x = 2*x;
cout<< "x ="<< x << endl;
} 
int main ( ){
    int x = 5;
    changeX(x);
    cout<< "x = " << x << endl;
    return 0;
}

// calcluate sum of digits of a number 
#include <iostream>
using namespace std;
int sumofDigits(int num){
    int digisum = 0;
    while(num>0){
    int lastdig = num%10;
    num = num/10;
    digisum+=lastdig;
    }
    return 0;

}
int main (){
    cout<< " sum = " <<sumofDigits(2335) << endl;
    return 0;
}

// HOMEWORK 
// WAF TO CHECK IF A NUMBER IS PRIME OR NOT 
// WAF TO PRINT ALL PRIME NUMBER FROM 0 TO 1
// WAF TO PRINT nth Fibonacci
