#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maximum=0;
    cin>>n;
    map<string,int>m;
    map<string,int>::iterator it;
    for(int i=0; i<n; i++)
    {
        string a;
        cin>>a;
        m[a]++;
        maximum=max(maximum,m[a]);
    }
    for(it=m.begin(); it!=m.end(); it++)
    {
        if(it->second==maximum)
            cout<<it->first<<endl;
    }
    return 0;
}

