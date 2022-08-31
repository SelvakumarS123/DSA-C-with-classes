#include<iostream>
using namespace std;

int main(){
    int siz,temp,n;
    cin>>siz;
    int arr[siz],ordarr[siz];
    for(int i=0;i<siz;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<siz;i++)
    {
        ordarr[i]=arr[i];
    }
    for(int i=0;i<siz;i++)
    {
        for(int j=i+1;j<siz;j++)
        {
            if(ordarr[j]<ordarr[i])
            {
                temp=ordarr[i];
                ordarr[i]=ordarr[j];
                ordarr[j]=temp;
            }
        }
    }
    n=ordarr[siz-1];
    for(int i=n;i>=1;i--)
    {
        for(int j=0;j<siz;j++)
        {
            if (arr[j]>=i)
            {
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
    return 0;
}