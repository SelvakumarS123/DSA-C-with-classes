#include<iostream>
using namespace std;

int main(){
    int siz,key,c=0;
    cin>>siz;
    int arr[siz];
    for(int i=0;i<siz;i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    for(int i=0;i<siz;i++)
    {
        if(arr[i]==key)
        {
            cout<<i;
            c=1;
            break;
        }
    }
    if(c==0)
    {
        cout<<"-1";
    }
}