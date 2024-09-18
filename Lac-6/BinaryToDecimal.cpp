#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;
    int res2 = 1;

    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = ans + res2; 
        }
        n = n / 10;
        res2*=2;
    }
    cout << "Ans is => " << ans << endl;
}