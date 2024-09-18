#include<iostream>
using namespace std;

int FindFact(int n){
    int fact = 1;
    while (n != 0)
    {
        fact = fact * n;
        n--;
    }
    return fact;
}

void findNCR(int n,int r){
    int nFact = FindFact(n);
    int nMrFact = FindFact(r)*FindFact((n-r));

    cout << nFact/nMrFact << endl;
}

int main(){
    int n,r;
    cout << "Enter N and R : ";
    cin >> n >> r;

    findNCR(n,r);
}