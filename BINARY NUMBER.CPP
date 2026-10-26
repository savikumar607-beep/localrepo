// DECIMAL TO  BINARY 
#include <iostream>
using namespace std;
int decimalToBinary(int deciNum){
    int ans = 0;
    int pow = 1;
    while(deciNum>0){
        int rem = deciNum%10;
        deciNum = deciNum/2;
        ans += (rem*pow);
        pow *=10;
    }
    return ans; // Binary form
}
int main (){
    int decNum = 50;
    for(int i = 0; i<10; i++){
        cout<<decimalToBinary(i) << endl;
    }
   return 0 ;
}

// BINARY TO DECIMAL
