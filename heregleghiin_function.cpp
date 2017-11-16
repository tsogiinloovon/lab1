#include<iostream>
using namespace std;
int dundaj(int array[],int n)
{
    int i;
    float s=0,u=0;
    for(i=0;i<n;i++)
    {
        s=s+array[i];
    }
    return u=s/i;
}
int main()
{
    int n,i,j,d;
    float s=0;
    cin>>n;
    int array[n];
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    s=dundaj(array,n);
    cout<<s;
}
