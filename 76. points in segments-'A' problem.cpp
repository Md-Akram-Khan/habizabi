#include<bits/stdc++.h>

#define nl                 "\n"
#define ll                 long long
#define pb                 push_back
#define pf                 push_front
#define np                 next_permutation
#define pp                 prev_permutation
#define sqr(x)             ((x)*(x))
#define pi                 acos(-1)
#define setprecision(x)    fixed<<setprecision((int)(x))
#define mem1(x)            memset(x,0,sizeof(x))
#define mem2(x)            memset(x,-1,sizeof(x))
#define all(x)             (x).begin(),(x).end()
#define sort1(x)           sort(all(x))
#define csort(x,c)         sort(all(x),c)
#define rsort(x)           sort(x.rbegin(),x.rend())

using namespace std;
void solve1()
{
    int n,m;
    cin>>n>>m;
    set<int>a;
    set<int>::iterator it;
    for(int i=1; i<=m; i++)
        a.insert(i);
    while(n--)
    {
        int f,l;
        cin>>f>>l;
        for(int i=f; i<=l; i++)
            a.erase(i);
    }
    cout<<a.size()<<nl;
    for(it=a.begin(); it!=a.end(); it++)
        cout<<*it<<' ';
    cout<<nl;

}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    //int t; cin>>t; while(t--){solve();}
    solve1();
    return 0;
}



