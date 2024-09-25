#include<iostream>
using namespace std;

int FindDuplicateEle(int arr[],int n){
    int ans = 0;
    int nAns = 0;
    for (int i = 0; i < n; i++)
    {
        ans = arr[i] ^ ans;
        nAns = nAns ^ i;
    }
    return (nAns ^ ans);
}

int main(){
    int arr[5] = {1,2,3,3,4};

    int ans = FindDuplicateEle(arr,5);
    cout << "Ans is => " << ans << endl;
}