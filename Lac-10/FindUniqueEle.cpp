// User give an input like {2,2,3,4,4,5,7,7,5} we are finding a unique value of this all ele like M element are repeated two times and one element will be single find this element 

#include<iostream>
using namespace std;

    int FindUniqueEle(int arr[],int n){
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = arr[i] ^ ans;
        }
        return ans;
    }

int main(){
    int arr[5] = {2,3,4,3,2};

    int ans = FindUniqueEle(arr,5);
    cout << "The ans is => " << ans << endl;
    }