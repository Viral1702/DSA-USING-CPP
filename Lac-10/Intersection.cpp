#include<iostream>
using namespace std;

void Intersection(int arr1[],int n,int arr2[],int m){
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < m; j++)
        {   
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
            
        }
        
    }
    
}

int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[3] = {2,3,4};

    Intersection(arr1,5,arr2,3);
}