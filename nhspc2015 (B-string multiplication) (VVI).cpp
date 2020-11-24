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
vector<int>a;
void divisors(int n)
{
    a.push_back(1);
    a.push_back(n);
    int limit=sqrt(n);
    for(int i=2; i<=limit; i++)
    {
        if(n%i==0)
        {
            a.push_back(i);
            if(n/i!=i)
                a.push_back(n/i);
        }
    }
    sort1(a);
}
void solve()
{
    string b;
    cin>>b;
    int sz=b.size(),l=sz;
    divisors(sz);
    for(int i=0; i<a.size()-1; i++)
    {
        bool ok=true;
        if(b.substr(0,a[i])==b.substr(sz-a[i]))
        {
            for(int j=a[i]; j<sz; j+=a[i])
                {
                    if(b.substr(0,a[i])!=b.substr(j,a[i]))
                       {
                          ok=false;
                          break;
                       }
                }
                if(ok)
                {
                    l=a[i];
                    break;
                }
        }
    }
    cout<<b.substr(0,l)<<nl;
    a.clear();

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t; while(t--){solve();}
    //solve();
    return 0;
}



