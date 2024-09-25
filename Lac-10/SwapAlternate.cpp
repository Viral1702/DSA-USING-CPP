// In Array Swap the alternate value by each other like arr[] = {1,2,3,4,5} ans => {2,1,4,3,5}

#include<iostream>
using namespace std;

void SwapAlt(int arr[],int n){
    for (int i = 0; i < n-1; i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}
int main(){
    int arr[5] = {1,2,3,4,5};
    SwapAlt(arr,5);
}