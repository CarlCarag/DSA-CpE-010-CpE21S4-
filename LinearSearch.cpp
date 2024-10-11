/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for (int i=0; i<size;i++){
        if (arr[i]==target){
            return i;//Return if the index is found
        }
    }
    return -1;// Return -1 if not found
}
int main(){
    int arr[]={5,3,8,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;
    
    cout<<"Enter a number to search: "; 
    cin>>target; 
    
    int result = linearSearch(arr, size, target);
    if(result !=-1){
        cout<<"Element found at index: "<<result<<endl; 
    }else{
     cout<<"Element not found."<<endl;
    }
    return 0;
    }