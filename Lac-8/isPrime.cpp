#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n==1) return true;
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0) return false;
        
    }
    return true;
}

int main(){
    int n;
    cout << "Enter a Number => ";
    cin >> n;

    if (isPrime(n))
    {
        cout << "Number is Prime";
    }else{
        cout << "Number is not Prime";
    }
    
}