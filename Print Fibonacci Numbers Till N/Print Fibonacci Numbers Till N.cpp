#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin>>n;
    int a=0;
    int b=1;
    while(n>0)
    {
        cout<<a<<endl;
        int c=a+b;
        a=b;
        b=c;
        n--;
    }
    
}