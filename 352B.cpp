#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector< pair<int,int> >vec;
    vector< pair<int,int> >ans;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        int value;
        cin>>value;
        vec.push_back(make_pair(value,i));
    }
    sort(vec.begin(),vec.end());
    int cont = 0,p=0,q =0,r = 0,x = 0;
    for(int i = 0; i < n; i++)
    {
        if(vec[i].first == vec[i+1].first)
        {
            if(p == 0) /// for count first two position distance
            {
                p++;
                q = abs(vec[i].second - vec[i+1].second);
            }
            else /// check first second - three,three-four and so on distance are same as first-second distance
            {
                if( q != abs(vec[i].second - vec[i+1].second))
                    r++;
            }

        }
        else ///found different value;
        {
            if( r == 0) /// current values position are increase order an arithmetic progression.
            {
                x++; /// how many value are follow condition.
                ans.push_back(make_pair(vec[i].first,q));
            }
            p = 0;
            q = 0;
            r = 0;
        }
    }
    cout<<x<<endl;
    for(int i = 0; i < ans.size(); i++)
        cout<<ans[i].first<<" "<<ans[i].second<<endl;

}





