#include<iostream>
using namespace std;

int *reverse(int* arr, int n){
    int i=n-1,j=0;
    int *p=new int[n];
    while(i>=0)
    {
        p[j]=arr[i];
        i--;
        j++;
    }
    return p;
}

int main(){
    int n;
    cin>>n;

    int arr[n]{};
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int *q = reverse(arr,n);
    for(int i = 0 ; i < n; i++){
        cout<<q[i]<<" ";
    }
}