//                                      <MARK> ARRAY SYNTAX  </MARK>
//        CREATION : ->
  

// SAME TYPE KA DATA STORE KAR SKTE HAI ARRAY ME 
// CONTIGIOUS IN MEMORY ,ARARAY ARE ALSO LINEAR

#include <iostream>
using namespace std;
int main (){
    int array[] = {10,20,30,40,50};
    cout<< array[0] << endl;
    cout<< array[1] << endl;
    cout<< array[2] << endl;
    cout << array[3] << endl;
    cout<<  array[4] << endl;
    return 0;
}

// Isko loop se bhi solve kar skte hai
// array ka size nikalne ke liye cout<< sizeof(array)/sizeof(int) << endl;

#include <iostream>
using namespace std;
int main (){
    int array [] = {10,20,30,40,50};
    int n = 5; // array  ka size hai 
    for(int i = 0 ; i<n; i++){
        cout<< array[i] << " ";
    }
    return 0 ;
}

// Array me input lene ke liye
#include <iostream>
using namespace std;
int main(){
    int size = 5;
    int marks [size];
    for(int i = 0; i<size; i++){
        cin>> marks[i] ; // 10,20,30,40,50

    }
    for (int i = 0 ; i<size; i++){
        cout<< marks[i] << " ";
    }
    return 0;
}
  

// Loops on arrays
// Find smallest / largest in array
// int smallest = + infinity = INT_MAX; isse compare karenge to chota value hoga isee wo output aa jaeyga

#include <iostream>
using namespace std;
int main (){
    int num []= {40,50,60,70,80, -15};
    int size = 6;
    int smallest = INT8_MAX;
    for(int i = 0; i<size; i++){
        if(num[i]< smallest){
            smallest = num[i];
        }
    }
    cout << " smallest = " << smallest << endl;
    return 0 ;
}
#include <iostream>
using namespace std;
int main(){
    int size = 6;
    int num [] = {10,20,30,80,90};
    int largest = INT8_MIN;
    for(int i = 0; i<size; i++){
        if(num[i]>largest){
            largest = num[i];
        }
    }
    cout<<"largest = " << largest << endl;

    return 0 ;
}

// PASS BY REFRENCE 

#include <iostream>
using namespace std;
void changeArr(int arr[] , int size){
    cout<< "in function\n ";
    for(int i = 0 ; i<size; i++){
        arr[i] = 2* arr[i];
    }
}
int main (){
    int arr[] = {1,2,3};

    changeArr(arr,3);
    cout<< " main\n";
    for(int i = 0; i<3; i++){
        cout<< arr[i] << " ";  // ouput iska 2 4 6 ayega 

    }
    cout<< endl;
    return 0 ;

}

// linear search 
// arr [] = {4,2,7,8,1,2,5}; targert = 8

#include <iostream>
using namespace std;
int linearSearch(int arr[], int sz , int target){
    for(int i = 0; i<sz; i++){
        if(arr[i]==target){
            return i ;
        }
    }
    return - 1; 
}
int main (){
    int arr[] = {4,2,7,8,1,2,3};
    int sz = 7;
    int target = 5;
    cout<< linearSearch(arr,sz,target) << endl;
    return 0 ;
}

// REVERSE AN ARRAY
// in use two pointer 
// Arr [] = {4,2,7,8,1,2,5} 
#include <iostream>
using namespace std; 
void reverseArr(int arr[], int size){
  int   start = 0;
  int    end = size-1;
  while (start < end){
    swap(arr[start],arr[end]);
    start ++; 
    end -- ; 
  }
}
int main ( ){
    int arr [] = { 1,2,3,4,5};
    int size = 5;
    reverseArr( arr,size);
    for(int i = 0 ; i< size; i++){
        cout<< arr [ i ] << " ";
        }
        cout << endl;
        return 0 ;
}

