#include <iostream>
using namespace std;
int main()
{
    int t,c,p=0,np=0;
    cin >> t;
    c=0;
    while(t>0)
    {
        c=0;
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {

            if(n%i==0)
            {
                c++;
            }
        }

    if(c==2)
    {
        cout<<"prime"<<endl;
    }
    else if(n==1)
    {
        cout<<"prime"<<endl;
    }
    else
    {
        cout<<"not prime"<<endl;
    }
    t--;
    }
    return 0;
}