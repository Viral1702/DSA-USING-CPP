/*

        3 2 1
        3 2 1
        3 2 1
        
*/


#include<iostream>
using namespace std;

int main(){
    cout << "Enter Number : ";
    int n;
    cin >> n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout << (n-j)+1 << " ";
            j++;
        }
        i++;
        cout << endl;
    }
    
}