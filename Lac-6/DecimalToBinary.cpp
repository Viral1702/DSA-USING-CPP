#include<iostream>
#include<math.h>
using namespace std;

int main(){
    cout << "Enter a number : ";
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    int res10 = 1;
    while (n != 0)
    {
        int bit = (n&1);
        ans = (bit*res10)+ans;    
        n = n >> 1;
        i++;
        res10*=10;
    }
  
    cout << "Ans is => " << ans << endl;   
}