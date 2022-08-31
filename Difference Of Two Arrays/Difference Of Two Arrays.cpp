#include<iostream>
using namespace std;

int main(){
    int n1, n2,borrow,c=0;
    cin>>n1;
    int a1[n1]{};
    for(int i = 0 ; i < n1; i++){
        cin>>a1[i];
    }
    cin>>n2;
    int a2[n2]{};
    for(int i = 0 ; i < n2; i++){
        cin>>a2[i];
    }
    int n3;
    if(n1>=n2)
    {n3=n1;}
    else if(n2>n1)
    {n3=n2;}
    int diff[n3]={};
    int i=n1-1,j=n2-1,k=n3-1;
    while(k>=0)
    {
        int d=0,a1v;
        if(i>=0){
            a1v=a1[i];
        }
        else
        {
            a1v=0;
        }
        if (a2[j] + c >= a1v) {
            d = (a2[j] + c) - a1v;
            //cout<<a2[j]<<" + "<<c<<" - "<<a1v<<" = "<<d<<endl;
            c = 0;
        }
        else
        {
            d = (a2[j] + 10 + c) - a1v;
            //cout<<a2[j]<<" + 10 + "<<c<<" - "<<a1v<<" = "<<d<<endl;
            c = -1;
        }
        diff[k] = d;
        i--;
        j--;
        k--;
    }
//    for(int i=0;i<n3;i++)
//    {
//        cout<<diff[i]<<endl;
//    }

    int idx = 0;
    while (idx < n3 && diff[idx] == 0) {
      idx++;
    }

    while (idx < n3) {
      cout<<diff[idx++]<<endl;
    }
    return 0;
}