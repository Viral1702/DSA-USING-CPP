/*

   1
  23
 456
78910

*/

#include<iostream>
using namespace std;

int main(){
    cout << "Enter No : ";
    int n;
    cin >> n;

    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int space = n-i;
        while (space > 0)
        {
            cout << " ";
            space--;
        }
        
        int j = 1;
        while (j <= i)
        {
            cout << count;
            count++;
            j++;
        }
        

       cout << endl;
       i++;
    }
    
    

}