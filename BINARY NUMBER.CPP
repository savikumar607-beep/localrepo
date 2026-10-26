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
#include <iostream>
using namespace std;
int binDecimal(int binNum){
    int ans = 0; 
    int pow = 1;
    while (binNum>0){
        int rem = binNum%10;
        ans =  (ans + rem * pow);
        binNum = binNum/10;
        pow = pow*2;


    }
    return ans; // Decimal form 
}
int main (){
    cout<<binDecimal(1010) << endl; // 10 Binary to Decimal form me hai
    return 0;
}

// COMMON BINARY NUMBER
//    0 - 001

//    1-  01

//    2- 10

//    3- 11

//    4- 100

//    5- 101

//    6- 110

//    7- 111

//    8- 1000

//    9- 1001

//    10- 1010

// DEC -> BIN
// TWO'S COMPLEMENT
// MSB MTLV MOST SIGINIFICANT BIT HOTA HAI -10 ka msb 01010 zero hai to +ve or one hai toh -ve hai (msb)
// YE KARNE KE BAAD 1'S COMPLEMENT NIKALENGE 01010 KA 1'S COMPLEMENT HOGA ZERO HAI TO ONE HOGA ONE HAI ZERO HOGA (10101) FLIP KRNA MTLV ONE'S COMLEMENT
// 10101 + 1 KARENEGE TO (-10)10 = (10110)2 HOTA HAI 
// ONE'S COMPLEMENT ME +1 KARTE HI TOH TWO'S COMPLEMENT KEHTE HAI 

// TWO'S COMPLEMENT 
// (10110 + 1 ) = 0(1010) = (-10)10 YE TWO'S COMPLEMENT BIN TO DEC CONVERT KRNE PAR NUMBER PTA CHLTA HAI 

// FOR EXAMPLE :- 
// CONVERT INTO -8 TO BINARY  & REVERSE 
// (1000) ISKE BAAD ZERO HAI TO ONE , ONE HAI TO ZERO 
// 01000 2ND STEP ME MSB KO ADD KIYA HI 
// 3RD STEP ME (10111) YE ISKA ONE'S COMPLENT YAHA NIKALE HAI 
// 4TH STEP ME +1 KARENGE (10111+1) =(11000)2 = (-8)10

// DECI -> TO BIN
// TWO'S COMPLEMET HAI  
// PEHELE ONE'S COMPLEMENT NIKLENGE (11000) = 00111+1 = (01000) = (1000) = (-8)10
// MSB AGAR ZERO HAI TOH -VE HAI OR AGAR MSB ONE HAI TOH +VE HAI 