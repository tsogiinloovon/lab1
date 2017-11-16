#include<iostream>
using namespace std;
int main()
{
    int n,i,s=0,u=1;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        s=s+a[i];
        u=u*a[i];
    }
    cout<<"s="<<s<<"\n";
    cout<<"u="<<u;
}
