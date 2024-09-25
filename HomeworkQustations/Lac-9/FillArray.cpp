// We can not define a value in aaray but we put value in Array in 1 usin fill_n function

#include<iostream>
using namespace std;

int main(){
    int arr[10];
    fill_n(arr,10,1);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
}