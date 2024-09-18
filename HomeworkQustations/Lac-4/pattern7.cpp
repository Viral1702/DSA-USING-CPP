/*

        A
        B C
        D E F
        G H I J

*/

#include<iostream>
using namespace std;

int main(){
    cout << "Enter No : ";
    int n;
    cin >> n;

    int i = 1;
    int start = 1;
    while (i <= n)
    {
        
        int j = 1;
        while (j <= i)
        {   
            char ch = 'A' + start - 1;
            cout << ch << " ";
            j++;
            start++;
        }
        cout << endl;
        i++;
    }
    

}