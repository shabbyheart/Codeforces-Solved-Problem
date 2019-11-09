#include<bits/stdc++.h>
using namespace std;
bool haveRoot(long long  value)
{

    long long  s = sqrt(value);
    if(s*s == value)
        return true;
    else
        return false;
}
bool isPrime(long  value)
{
    if(value <= 1 )
        return false;
    for(long  i =2; i*i<=value; i++)
    {
        if(value % i == 0)
            return false;
    }
    return true;
}
int main()
{
    long long  n;
    cin>>n;
    while(n--)
    {
        long long  value;
        cin>>value;
        long long  root = sqrt(value);

        if(haveRoot(value))
        {   //cout<<root<<" ";
            if(isPrime(root))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
