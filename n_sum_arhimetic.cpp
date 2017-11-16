#include<iostream>
using namespace std;
int main()
{
    float n,i,a,s=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        s=i+s;
    }
    i--;
    a=s/i;
    cout<<"s="<<s<<endl;
    cout<<"d="<<a;
}
