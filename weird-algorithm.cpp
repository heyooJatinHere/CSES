#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==0)
    {
        return 0;
    }
    long long temp=n;
    while(temp!=1)
    {
        cout<<temp<<" ";
        if(temp%2==0)
        {
            temp/=2;
        }else{
            temp=3*temp+1;
        }
    }
    cout<<temp<<" ";
    
}