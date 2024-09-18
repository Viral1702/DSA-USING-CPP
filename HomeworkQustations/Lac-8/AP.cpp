// AP will be given by sir AP Will be (3*n+7) we have to take a input of n then solve eqn ans return the ANS

#include<iostream>
using namespace std;

int AP(int n){
    return (3*n+7);
}

int main(){

    cout << "Enter a Number : ";
    int n;
    cin >> n;

    int ans = AP(n);
    cout << "Ans is => " << ans << endl;
}