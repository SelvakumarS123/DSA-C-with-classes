#include <iostream>
using namespace std;

int main(int argc, char **argv){
    unsigned long int n,r,rev=0,lastDgt;
    bool lastDigit_0=false;
    cin >> n;
    lastDgt=n%10;
    if (lastDgt==0)
        {
            lastDigit_0=true;
        }
    while(n!=0)
    {
        r=n%10;
        n/=10;
        rev=rev*10+r;
    }

    while(rev!=0)
    {
        r=rev%10;
        rev/=10;
        cout<<r<<endl;
    }

    if(lastDigit_0==true)
    {
        cout<<"0"<<endl;
    }

    return 0;
}