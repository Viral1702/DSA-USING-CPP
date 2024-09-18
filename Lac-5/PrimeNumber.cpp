#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a No : " ;
    cin >> n;

   bool isPrime = true;

    for (int i = 2; i < n; i++)
    {
        if ( n%i == 0)
        {
            isPrime = false;
            break;
        }
        
    }

    if (isPrime)
    {
        cout << "The number is Prime";
    }else{
        cout << "The number is not a Prime";
    }
    
    
}