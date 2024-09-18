#include<iostream>
using namespace std;

int FindBits(int n){
    int count = 0;
    while (n!=0)
    {
        if (n&1) count++;
        n = n>>1;
    }
    return count;
}

int main(){
    int a,b;
    cout << "Enter a Numbers : ";
    cin >> a >> b;

    int aBit = FindBits(a);
    int bBit = FindBits(b);

    cout << aBit+bBit;
}