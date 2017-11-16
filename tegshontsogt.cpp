#include<iostream>
using namespace std;
int talbai(int x,int y)
{
    int s;
    s=x*y;
    return s;

}
int main()
{
    int x,y,s;
    cin>>x>>y;
    s=talbai(x,y);
    cout<<"s="<<s;
}
