#include<iostream>
#include<algorithm>
using namespace std ;
int mini (int array[] , int n){
    int mini = INT16_MAX;
    for(int i = 0 ; i < n ; i++ ){
        mini = min(mini , array[i]);
    }
    return mini;
}
int maxi (int array[] , int n){
    int maxi = INT16_MIN;
    for(int i = 0 ; i < n ; i++ ){
        maxi = max(maxi , array[i]);
    }
    return maxi;
}
int main(){
    int array[] = { 2,3,1,4,6,0,9,23,11,78};
    int n = sizeof(array)/sizeof(array[0]);
    cout<<"min element is "<<mini(array , n )<<endl;
    cout<<"maximum element is : "<<maxi(array , n )<<endl;
    
    return 0;
}