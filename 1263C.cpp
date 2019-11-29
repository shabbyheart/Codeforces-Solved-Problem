#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>vec;
        double n;
        cin>>n;
        vec.push_back(0);
        for( double i= 1; i*i<=n; i++)
        {

            double p = n/i;

            if( int(p)*i == n)
            {
                if( i != int(n/i))
                {
                    vec.push_back(i);
                    vec.push_back(n/i);
                }
                else
                    vec.push_back(i);

            }
            else{
                double temp = n/i;
                int temp2 = round( temp);
                int temp3 = n/i;

                    if( i != temp3)
                    {
                        vec.push_back(i);
                        vec.push_back(temp3);
                    }
                    else
                        vec.push_back(i);
            }

        }
        cout<<vec.size();
        cout<<endl;
        sort(vec.begin(),vec.end());
        for(int i=0; i<vec.size(); i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
}
