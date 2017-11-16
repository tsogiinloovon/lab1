#include<iostream>
using namespace std;
int main()
{
    int a,b,c,max;
    cin >>a>>b>>c;
    if(a==b&&a==c)
    {
        max=a;
    }
    if(a>b&&a>c)
    {
        max=a;
    }
    if(c>a&&c>b)
    {
        max=c;
    }
    if(b>a&&b>c)
    {
        max=b;
    }
    cout<<max;
}
