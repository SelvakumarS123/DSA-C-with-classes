#include<iostream>
using namespace std;

int main(){
    int n1,n2,c=0;
    cin>>n1;
    int *arr1{new int[n1]{}};
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cin>>n2;
    int *arr2{new int[n2]{}};
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    int n3;
    if(n1>=n2)
    {n3=n1;}
    else if(n2>n1)
    {n3=n2;}
    int *sum{new int[n3]{}};
    //int n3=sizeof(sum);
    //cout<<sizeof(sum)<<endl;
    int i=n1-1,j=n2-1,k=n3-1;
    while(i>=0||j>=0)
    {
        int d=c;
        if(i>=0)
        {
            d+=arr1[i];
        }
        if(j>=0)
        {
            d+=arr2[j];
        }
        c=d/10;
        d=d%10;
        sum[k] = d;
        i--;
        j--;
        k--;
    }
    if (c > 0) {
      //cout<<c;
    }
    for(int i=0;i<n3;i++)
    {
        cout<<sum[i]<<endl;
    }
    return 0;
}