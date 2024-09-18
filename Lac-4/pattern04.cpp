/*

   1
  121
 12321
1234321

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
       int space = (n-i);
       
       while (space > 0)
       {
            cout << " ";
            space--;
       }

        int j = 1;

        while (j <= i)
        {
            cout << j;
            j++;
        }
        
        int k = 1;

        while (k < i)
        {
            cout << (i-k);
            k++;
        }
        

       cout << endl;
       i++;
    }
    
    

}