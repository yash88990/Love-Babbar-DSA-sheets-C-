#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string name = "HELLO WORLD";  // HSAY
    // //REVERSE THE STRING :- using inbuilt method  
    // reverse(name.begin() , name.end() );
    // cout<<"reversed string : "<<name <<endl;


    //method 2 : - using loop 
    int start = 0;
    int end = name.length() - 1 ;
    while(start <= end ){
        swap(name[start++] , name[end--] );
    }
    cout<<"reversed string : "<<name <<endl;
    return 0;


}