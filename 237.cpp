#include<bits/stdc++.h>
using namespace std;
map< pair<int,int>,int>mp;
map< pair<int,int>,int>::iterator it;
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        int u,v;
        cin>>u>>v;
        mp[{u,v}]++;
    }
    int mx = 0;
    for(it = mp.begin(); it!=mp.end();it++)
    {
        if(mx< it->second)
            mx = it->second;
    }
    cout<<mx;
}
