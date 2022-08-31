#include <iostream>
#include <string>
using namespace std;

int main(){
    int len,len1;
    string str;
    getline(cin,str);
    len=str.length();
    string str1="";
    str1.resize(len);
    string::reverse_iterator rit;
    int i=1;
    str1.insert(0,"0");
    for(rit=str.rbegin();rit!=str.rend();rit++)
    {
        str1[i]=*rit;
        i++;
    }
    len1=str1.length();
    string str2="";
    str2.resize(len1-1);
    int arr[len1-1]={};
    for(int t=1;t<=len1-1;t++)
    {
        int indx;
        int h;
        switch (t)
    {
    case 0:h=48;
    break;
    case 1:h=49;
    break;
    case 2:h=50;
    break;
    case 3:h=51;
    break;
    case 4:h=52;
    break;
    case 5:h=53;
    break;
    case 6:h=54;
    break;
    case 7:h=55;
    break;
    case 8:h=56;
    break;
    case 9:h=57;
    break;
    }
        indx=str1.find(h);
        str2[t-1]=indx;
        arr[t-1]=(int)indx;
    }
    int len2=str2.length();
    int temp;
    for (int i = 0,j = len2-1; i < len2/2; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for ( i = 0; i < len2; i++)
    {
        cout << arr[i];
    }
    return 0;
}