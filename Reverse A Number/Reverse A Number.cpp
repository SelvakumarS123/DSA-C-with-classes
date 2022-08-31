#include <iostream>
using namespace std;

int main(int argc, char **argv){
    unsigned long int n,r;
    cin >> n;
    while(n!=0)
    {
        r=n%10;
        n/=10;
        cout<<r<<endl;
    }

    return 0;

}