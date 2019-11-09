    #include<bits/stdc++.h>
    using namespace std;
    int arr[1006];
    int main()
    {
        int even = 0,odd = 0;
        string str;
        cin>>str;
        set<char>st;
        for (auto i : str)
            st.insert(i);
        for(int i =0; i<str.size(); i++)
        {
            arr[str[i]]++;
        }
        for(auto i:st)
        {
            if( arr[i] %2 != 0)
                odd++;
        }
        if( odd <=1 || odd%2 != 0)
            cout<<"First"<<endl;
        else
            cout<<"Second"<<endl;

    }
