// VECTOR :- vector is dynamic nature 
 
// vector syntax

//vector<int> vector
#include <iostream> 
#include <vector>
using namespace std;
int main(){
    vector<int> vec = {10,20,30,40};
    cout<< vec[0];
    return 0;
}

// vector me for each loop ka use 
#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<char>vec = {'a','b','c', 'd'};
    for(char val: vec){
        cout<<val << endl;
    }
    return 0 ;
}

// vetor funtion 

// size 

// push_back 

// pop_back

// front

// back 

// at 

#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<char>vec = {'a','b','c', 'd'};
    cout<< "size = " << vec.size()<< endl;
    for(char val: vec){
        cout<<val << endl;
    }
    return 0 ;
}

// push_back 
#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<char>vec;
    cout<< "size = " << vec.size()<< endl;
    vec.push_back(25);
    vec.push_back(36);
    vec.push_back(45);
    for(char val: vec){
        cout<<val << endl; // 25 36 45 ouput ayega iska 
    }
    return 0 ;
}

// pop_back
#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<char>vec;
    
    vec.push_back(25);
    vec.push_back(36);
    vec.push_back(45);
    cout<< "size = " << vec.size()<< endl;
    vec.pop_back();
    for(char val: vec){
        cout<<val << endl; // 25 36 output ayega
    }
    return 0 ;
}

// front or back ,at
#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<char>vec;
    
    vec.push_back(25);
    vec.push_back(36);
    vec.push_back(45);
    cout<< "size = " << vec.size()<< endl;
    vec.pop_back();
   cout<< vec.front() << endl; // 25 
   cout<< vec.back () << endl;  // 45
   cout << vec.at(0) << endl; // 25
    return 0 ;
}

// static and dynamic allocation 

#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<char>vec;
    
    vec.push_back(25);
    vec.push_back(36);
    vec.push_back(45);
    vec.push_back(48);
    vec.push_back(64);
    cout<< "size = " << vec.size()<< endl; // 5 size
    cout<< vec.capacity() << endl; // 8 capacity 
    return 0 ;
}

// single number

// leetcode : - 36 solution 
#include <vector>
#include <iostream>
using namespace std;
int singleNumber(vector<int> &nums){
    int ans = 0;
    for (int val : nums){
        ans= ans^val;

    }
    return ans;
}
int main(){
    vector<int> nums = {2,2,1};
    singleNumber();
    
    
}