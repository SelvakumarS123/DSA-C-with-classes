#include<iostream>
using namespace std;
void gradingSystem(int m)
{
    if(m>=90)
    {
        cout<<"excellent";
    }
    else if(m>80&&m<=90)
    {
        cout<<"good";
    }
    else if(m>70&&m<=80)
    {
        cout<<"fair";
    }
    else if(m>60&&m<=70)
    {
        cout<<"meets expectations";
    }
    else if(m<=60)
    {
        cout<<"below par";
    }
}
int main()
{
    int marks;
    cin>>marks;
    gradingSystem(marks);
    return 0;
}