// #include<iostream>
// using namespace std;
// void reversedarray(int array[] , int n ){
//     // step 1 :- create a new array of same size a original array
//     int newarray[n];
//     // step 2 :- copying elements from the original array in reverse order 
//     for(int i = 0 ; i < n ; i++ ){
//         newarray[i] = array[n-1-i];
//     }
//     //print array
//     for(int i = 0 ; i < n ; i++ ){
//         cout<<newarray[i]<<" "; // 5 4 3  2 1 
//     }
//     cout<<endl;
// }
// int main(){
//     int array[] = { 1,2,3,4,5};
//     int n = sizeof(array) / sizeof(array[0]);
//     // function call
//     reversedarray(array , n );
//     return 0 ; 
// }




// // method 2 : in place using loop 
// #include<iostream>
// using namespace std ;
// void reversedarray(int array[] , int start , int end ){
//     while(start <= end ){
//         // int temp = array[start ];
//         // array[start] = array[end];
//         // array[end] = temp ;

//         swap(array[start++] , array[end--]);
//         //step 2 ;_ 
//         start++;
//         end--;
//     }
// }
// void printarray(int array[] , int n){
//     for(int i = 0 ; i<n;i++){
//         cout<<array[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int array [] = { 1, 2 ,3,4,5};
//     int n = sizeof(array) / sizeof(array[0]);
//     // function call 
//     reversedarray(array, 0 , n-1);
//     printarray(array , n );
//     return 0;

// }




// // method 3 :- using inbuilt method  ( inplace )
// #include<iostream>
// #include<algorithm> // for reverse (inbulit)
// using namespace std;
// int main(){
//     int array[] = {1,2,3,4,5,6};
//     int n = sizeof(array) / sizeof(array[0]);
//     reverse(array , array  + n );
//     for(int i = 0 ; i < n ; i++){
//         cout<<array[i]<<" ";
//     }
// return 0;
// }