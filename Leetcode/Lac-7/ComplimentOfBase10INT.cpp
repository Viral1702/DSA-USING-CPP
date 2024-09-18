#include<iostream>
using namespace std;

int main(){
    cout << "Enter a Number : ";
    int n;
    cin >> n;

    int temp = n;
    int mask = 0;
    while (n != 0)
    {
        mask = mask << 1;
        mask = mask | 1;
        n = n >> 1;
    }
    int ans = (~temp) & mask;

    cout << "Ans is => " << ans << endl;

}