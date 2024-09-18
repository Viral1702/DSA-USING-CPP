/*

    1 2 3
    1 2 3
    1 2 3

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
            cout << j << " ";
            j++;
        }
        i++;
        cout << endl;
    }
    
}