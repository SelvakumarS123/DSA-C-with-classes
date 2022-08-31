#include<iostream>
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
int main(){
    int n;
    int b;
    cin >> n;
    cin >> b;
    DecToAny(n,b);
//    int res = DecToBinary(n);
//    cout << res << endl;

}