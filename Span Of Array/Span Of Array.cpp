#include<iostream>
using namespace std;

int main(){
    int siz,temp;
    cin>>siz;
    int arr[siz];
    for(int i=0;i<siz;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<siz;i++)
    {
        for(int j=i+1;j<siz;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<arr[siz-1]-arr[0];
    return 0;
}