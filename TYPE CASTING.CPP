//CONVERTING DATA TYPE FROM ONE TO ANOTHER IS CALLED TYPE CASTING
#include<iostream>
using namespace std;
int main(){
    char a = 'A';
    int value = a; 
    // Implicit type casting from char to int
    cout << value << endl; 
    // Output: 65 (ASCII value of 'A')
    return 0;
}