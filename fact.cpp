#include<iostream>
using namespace std;
int main()
{
    int n,f=1;
    cin>>n;
    cout<<"Enter your choice:";
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<"Result is: ",f;
    return 0;
}