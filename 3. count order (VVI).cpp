#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define pf push_front
#define np next_permutation
#define pp prev_permutation
#define all(x) (x).begin(),(x).end()

using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n),c(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
        cin>>b[i];
    for(int i=0; i<n; i++)
        c[i]=i+1;

    vector<vector<int> >d;

    do 
    {
	d.push_back(c);
    }
    while(next_permutation(all(c)));

    int x,y;
    for(int i=0; i<d.size(); i++)
    {
        if(d[i]==a) x=i;
        if(d[i]==b) y=i;
    }
    cout<<abs(x-y);
    return 0;
}
