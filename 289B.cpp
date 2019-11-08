#include<bits/stdc++.h>
using namespace std;
int arr[100004],m,n,d,ans1 = 0,ans2 = 0;
int main()
{
    cin>>m>>n>>d;
    for(int i =1; i<=n*m; i++)
    {
        cin>>arr[i];
    }
    if(n*m == 1)
    {
        cout<<0<<endl;return 0;
    }
    sort(arr+1,arr+(n*m)+1);
    for(int i =1; i<=n*m; i++)
    {
        ans1 += abs(arr[(n*m) / 2] - arr[i]) / d;
        ans2 += abs(arr[(n*m) / 2+1] - arr[i]) / d;
        if( abs(arr[(n*m) / 2] - arr[i]) % d != 0)
        {
            cout<<-1<<endl;return 0;
        }
    }

    cout<<min(ans1,ans2);
}

