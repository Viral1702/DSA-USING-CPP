#include<iostream>
using namespace std;

int main(){
    cout << "Enter No : ";
    int n;
    cin >> n;

    int sum = 0;
    int product = 1;
    while (n != 0)
    {
        int digit = n%10;
        sum += digit;
        product *= digit;
        n = n/10;
    }
    cout << "Ans is => " << (product-sum) << endl;
}