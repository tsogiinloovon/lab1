#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==0)
        {

            count++;
        }
    }
    cout<<"count="<<count;

}
