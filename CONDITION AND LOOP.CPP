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