#include<iostream>

using namespace std;

int getpwd(int b, int n1, int d2) {
    int rv=0,p=1,c=0;
    while(n1>0||c>0)
    {
        int d1 = n1 % 10;
        n1 = n1 / 10;
        int d = d1 * d2 + c;
        c = d / b;
        d = d % b;
        rv += d * p;
        p = p * 10;
    }
    return rv;
}

int getsum(int b, int n1, int n2) {

    int c=0,rv=0,p=1,sum=0;
    while(n1>0||n2>0||c>0)
    {
        int d1=n1%10;
        n1/=10;
        int d2=n2%10;
        n2/=10;
        sum=d1+d2+c;
        if(sum>=b)
        {
            c=1;
        }
        else if(sum<b)
        {
            c=0;
        }
        sum = sum % b;
        rv += sum * p;
        p = p * 10;
    }
    return rv;
}

int getproduct(int b, int n1, int n2)
{
    int rv=0,carry=0,p=1;
    while(n2>0)
    {
        int d2=n2%10;
        n2=n2/10;
        int pwd = getpwd(b,n1,d2); // 17402
        //cout<<rv<<endl;
        rv=getsum(b,rv,p*pwd); // rv = 10670
        p = p * 10;
    }
    return rv;
}
int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    int d = getproduct(b, n1, n2);
    cout<<d;
    return 0;
}