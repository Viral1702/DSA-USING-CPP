#include<iostream>
using namespace std;

void Fibonacci(int n){
    cout << "0 1" << " ";
    int a = 0;
    int b = 1;
    int sum = 0;
    while (n>0)
    {
        sum = a+b;
        cout << sum << " ";
        a = b;
        b = sum;
        n--;
    }
    
}

int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    Fibonacci(n);
}