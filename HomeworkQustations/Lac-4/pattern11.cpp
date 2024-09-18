/*

1111
 222
  33
   4

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
        int space = i-1;
        while (space > 0)
        {
            cout << " ";
            space--;
        }
        
        int j = (n-i)+1 ;
        while (j>0)
        {
            cout << i;
            j--;
        }
        cout << endl;
        i++;
    }
    
    

}