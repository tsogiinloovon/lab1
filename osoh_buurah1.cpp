#include<iostream>
using namespace std;
int main()
{
 int k,n,i,g,s;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
 {
     cin>>a[i];
 }

 for(k=n;k>=0;k--)
 {
    for(i=0;i<n;i++)
    {
      if(a[i]>a[i+1]){  g=a[i];
        a[i]=a[i+1];
        a[i+1]=g;
      }
    }
 }
 for(i=0;i<n;i++)
     {
         cout<<"\n";
         cout<<a[i];
     }
     i--;
     cout<<"\n";
for(;i>=0;i--)
     {
         cout<<"\n";
         cout<<a[i];
     }

}

