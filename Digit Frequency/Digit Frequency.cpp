#include<iostream>
using namespace std;
int digFreq(int n, int d)
{
  int r,cnt=0;
  while(n!=0)
  {
    r=n%10;
    n/=10;
    if(r==d)
    {
        cnt++;
    }
  }
  return cnt;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}