// USES IF/ELSE KA KASE KAAM KARTA HAI
#include <iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>18){
        cout<< "you can vote"<<endl;
    }else{
        cout<<"you can't vote"<<endl;
    }
    return 0;
} 
// YAHA EK OR QUESTION FOR BETTER UNDERSTAND
#include <iostream>
using namespace std;
int main (){
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Lowercase"<<endl;
    }else if(ch>='A' && ch<='Z'){
        cout<<"Uppercase"<<endl;
    }else{
        cout<<"Invalid input"<<endl;
    }
}


// AUR YAHA PAR IF/ELSE IF AUR ELSE KASE KAAM KARTA HAI
#include <iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks>=90){
        cout<<"A grade"<<endl;
    }else if(marks>=80){
        cout<<"B grade"<<endl;
    }else if(marks>=70){
        cout<<"C grade"<<endl;
    }else if(marks>=60){
        cout<<"D grade"<<endl;
    }else{
        cout<<"Fail"<<endl;
    }
    return 0;
}

// AUR LOOP'S KASE KAAM KARTA HAI
// PEHLA LOOP : FOR LOOP KE LIYE 
#include <iostream>
using namespace std;
int main (){
    int n = 10;
    for(int i = 0; i<=n; i++){
        cout << i << endl;
    }
    return 0;
}

// AUR 2ND LOOP KA USE KASE KARTE HAI 
// 2ND LOOP : WHILE LOOP HAI 
#include <iostream>
using namespace std;
int main (){
    int n = 6;
    while(n<=6){
        cout<< n << endl;
        n++;
    }
    return 0;
}

// AUR 3RD LOOP KA USE KASE KARTE HAI
// 3RD LOOP : DO WHILE LOOP HAI
#include <iostream>
using namespace std;
int main (){
    int n =5;
    do{
        cout<< n << endl;
        n++;
    }while(n<=5);
    return 0;
}

// AUR 4TH LOOP KA USE KASE KARTE HAI
// 4TH LOOP : NESTED LOOP HAI
#include <iostream>
using namespace std;
int main (){
    int n = 7;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<< "*";
        }
        cout<< endl;
    }
}

// TERNARY OPERATOR KA USE KASE KARTE HAI
// TERNARY OPERATOR : CONDITION ? TRUE : FALSE
//iska bahut hi simple use hai
// iska bahut kam use hota hai but iska use karna bahut hi easy hai
#include <iostream>
using namespace std;
int main (){
    int n= -45;
    cout<<(n>=0 ? "Positive" : "Negative")<<endl;
    return 0;
}