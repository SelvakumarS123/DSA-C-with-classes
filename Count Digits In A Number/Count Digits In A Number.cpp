#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int m=0;
    while(n!=0)
    {
        n/=10;
        m++;
    }

    cout<<m<<endl;

    return 0;
    
}