    #include<bits/stdc++.h>
    using namespace std;
    class Node{
    public:
        int start,endd;
        Node(){}
        Node(int s, int e){start=s; endd=e;}
    };
    bool compare(Node n1, Node n2)
    {
        return n1.start<n2.start;
    }
    int main()
    {
        int s,n;
        cin>>s>>n;
        vector<Node>vec;
        for( int i =0; i < n; i++)
        {
            int u,v;
            cin>>u>>v;
            vec.push_back(Node(u,v));
        }
        sort(vec.begin(),vec.end(),compare);
        int cnt=0;
        for( int i =0; i <n; i++)
        {
                if(s>vec[i].start)
                {
                    s = s + vec[i].endd;
                    cnt++;

                }
                else if( s < vec[i].start)
                {
                    cout<<"NO";
                    return 0;
                }

        }
        if(cnt == n)
        {
            cout<<"YES";

        }
        else
            cout<<"NO";
        return 0;
    }
