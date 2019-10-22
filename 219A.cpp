#include<bits/stdc++.h>
using namespace std;
int arr[30];
int main()
{
    int k;
    cin>>k;
    string str;
    cin>>str;
    set< int > s;
    int len = str.size();
    for(int i = 0; i <str.size(); i++)
    {
        arr[str[i]]++;
        s.insert( str[i] );
    }

    string ans = "";
    for(auto it = s.begin(); it != s.end(); it++)
    {
        int cont = arr[*it]/k;
        for( int i = 1; i<=cont; i++)
        {
            int value =  *it;
            string ss ;
            ss = value;
            ans = ans + ss;
        }
        if(arr[*it] % k != 0)
        {
            cout<<-1;
            return 0;
        }
    }
    for( int i = 0; i<k; i++)
    {
        cout<<ans;
    }
    return 0;
}

