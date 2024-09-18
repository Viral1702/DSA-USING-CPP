#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    int ans = 0;

    while (n != 0)
    {
        int digit = n % 10;
        if (ans > (INT32_MAX/10) || ans < (INT_MIN/10))
        {
            cout << "Enter a valid Number" << endl;
        }
        
        ans = (ans * 10) + digit;
        n = n/10;
    }
    cout << "Ans is => " << ans << endl;
}