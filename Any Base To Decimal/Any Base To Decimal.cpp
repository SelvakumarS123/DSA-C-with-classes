#include<iostream>
#include<cmath>
using namespace std;


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
    int b;
    cin >> n;
    cin >> b;
    cout<<AnyToDec(n,b);
    return 0;
}