#include<iostream>
using namespace std;

void Short_0_1(int arr[],int n){
    int s = 0;
    int e = n-1;

    while (s < e)
    {
        if (arr[s] == 0)
        {
            s++;
        }else if (arr[e] == 1)
        {
            e--;
        }else{
            swap(arr[s],arr[e]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
}

int main(){
    int arr[5] = {0,1,0,0,1};
    Short_0_1(arr,5);
}