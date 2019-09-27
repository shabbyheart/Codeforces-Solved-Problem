#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,mx=0;
    long long  arr[200005];
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]>mx)
            mx = arr[i];
    }
    long long y = 0,z = 0;
    for(int i = 0; i < n; i++)
    {
        y +=  mx - arr[i] ;
        z = __gcd( mx - arr[i] , z);

    }
    cout<<y/z<<" "<<z<<endl;

    return 0;
}

