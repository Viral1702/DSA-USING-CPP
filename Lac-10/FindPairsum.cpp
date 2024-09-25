#include<iostream>
using namespace std;

void Pairsum(int arr[],int n,int sum){
    for (int i = 0; i < n; i++)
    {
        for (int j = (i+1); j < n; j++)
        {
            if(arr[j]+arr[i] == sum){
                cout << arr[i] << " + " <<  arr[j] << endl; 
            }
        }
        
    }
    
}

int main(){
    int arr[5] = {1,2,3,4,5};
    Pairsum(arr,5,5);
}