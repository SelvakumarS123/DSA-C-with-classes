#include<iostream>
#include<cmath>
using namespace std;

int DecToAny(int n, int b){
    if(n>0)
    {
        int r;
        r=n%b;
        n/=b;
        DecToAny(n,b);
        cout<<r;
    }

}

int AnyToDec(int n, int b){
    int sum=0,m=0;
    while(n!=0)
    {
        int r,p;
        r=n%10;
        n/=10;
        p=r*pow(b,m);
        m++;
        sum+=p;
    }
    return sum;

}
int main(){
    int n;
    int b1,b2,dec;
    cin >> n;
    cin >> b1>>b2;
    dec=AnyToDec(n,b1);
    DecToAny(dec,b2);
    return 0;
}