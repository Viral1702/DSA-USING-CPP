#include<iostream>
using namespace std;

bool isEven(int n){
    if (n&1) return 0;
    return 1;
}

int main(){
    cout << "Enter a Number : ";
    int n;
    cin >> n;
    if (isEven(n))
    {
        cout << "The Number is Even" << endl;
    }else{
        cout << "The Number is Odd" << endl;
    }
        
}
    