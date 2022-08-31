#include<iostream>

using namespace std;

int getSum(int b, int n1, int n2,int carry) {
    int value;
    //cout<<"m1 = "<<m1<<endl<<"n1 = "<<n1<<endl<<"m2 = "<<m2<<endl<<"n2 = "<<n2<<endl;
    if(n1>0||n2>0||carry>0)
    {

        int sum=0;
        int r1,r2;
        r1=n1%10;
        n1/=10;
        r2=n2%10;
        n2/=10;
        //cout<<"carry = "<<carry<<endl;
        sum=r1+r2+carry;
        if(sum>=b)
        {
            carry=1;
        }
        else if(sum<b)
        {
            carry=0;
        }
        value=sum%b;
        //cout<<r1<<" + "<<r2<<" = "<<sum<<endl<<sum<<" % "<<b<<" = "<<value<<endl;
        getSum(b, n1, n2,carry);
        cout<<value;
    }
}

int main() {
    int b, n1, n2,carry=0;
    cin >> b >> n1 >> n2;
    getSum(b, n1, n2,carry);
    return 0;
}