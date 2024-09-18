#include<iostream>
using namespace std;

int main(){
    cout << "Enter A : ";
    int a;
    cin >> a;
    cout << "Enter B : ";
    int b;
    cin >> b;

    cout << "Enter a Oparation : ";
    char op;
    cin >> op;

    switch (op)
    {
    case '+' : 
        cout << a+b << endl;
        break;
    case '-' : 
        cout << a-b << endl;
        break;
    case '*' : 
        cout << a*b << endl;
        break;
    case '/' : 
        cout << a/b << endl;
        break;
    default:
    cout << "Enter valid oparation";
        break;
    }
}