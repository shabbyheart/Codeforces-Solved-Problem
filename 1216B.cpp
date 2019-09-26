#include<bits/stdc++.h>
using namespace std;
pair<int,int> arr[1003];
bool sortby(pair<int,int> a,pair<int,int>b )
{
    return a.first>b.first;
}

int main()
{
    int n,sum=0;
    cin>>n;
    for( int i = 0;i<n; i++)
    {
        int temp;
        cin>>temp;
        arr[i].first = temp;
        arr[i].second = i;
    }
    sort(arr,arr+n,sortby);
    for(int i = 0; i < n; i++)
    {
        sum = sum+ (arr[i].first*i) +1;
    }
    cout<<sum<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i].second+1<<" ";
    }
    return 0;
}
