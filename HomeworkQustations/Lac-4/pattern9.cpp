/*

* * * *
* * *
* *
*

*/

#include<iostream>
using namespace std;

int main(){
    cout << "Enter No : ";
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = (n-i)+1 ;
        while (j>0)
        {
            cout << "* ";
            j--;
        }
        cout << endl;
        i++;
    }
    
    

}