#include<iostream>

using namespace std;

int getSub(int b, int n1, int n2,int carry) {
    int value;
    if(n1>0||n2>0)
    {

        int sub=0;
        int r1,r2,borrow;
        r1=n1%10;
        n1/=10;
        r2=n2%10;
        n2/=10;
        r2+=carry;
        if(r2>=r1)
        {
            borrow=0;
            carry=0;
        }
        else if(r2<r1)
        {
            borrow=b;
            carry=-1;
        }
        sub=(r2+borrow)-r1;
        getSub(b, n1, n2,carry);
        if(n1==0&&sub==0)
        {

        }
        else
        {
            cout<<sub;
        }
    }
}

int main() {
    int b, n1, n2,carry=0;
    cin >> b >> n1 >> n2;
    getSub(b, n1, n2,carry);
    return 0;
}