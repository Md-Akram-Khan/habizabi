#include<bits/stdc++.h>
#define WELCOME_TO_MY_CODE using namespace std;
#define nl                 "\n"
#define f                  first
#define s                  second
#define ll                 long long
#define pb                 push_back
#define pf                 push_front
#define np                 next_permutation
#define pp                 prev_permutation
#define sz(x)              x.size()
#define sqr(x)             ((x)*(x))
#define pi                 acos(-1)
#define setprecision(x)    fixed<<setprecision((int)(x))
#define mem1(x)            memset(x,0,sizeof(x))
#define mem2(x)            memset(x,-1,sizeof(x))
#define all(x)             (x).begin(),(x).end()
#define rev(x)             reverse(all(x))
#define iota(x,a)          iota(all(x),a)
#define sorta(x)           sort(all(x))
#define sortd(x)           sort(all(x),greater<int>())
#define csort(x,c)         sort(all(x),c)
#define rsort(x)           sort(x.rbegin(),x.rend())
#define allup(x)           transform(x.begin(),x.end(),x.begin(),::toupper)
#define alllow(x)          transform(x.begin(),x.end(),x.begin(),::tolower)
#define faster_io          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define count_time         cerr<<nl<<"Time elapsed : "<<clock()*1000.0/CLOCKS_PER_SEC<<"ms"<<nl;
#define all_ele(x)         for(auto i:(x)){cout<<i<<' ';}cout<<nl;
#define multiple_test      int t; cin>>t; while(t--){solve();}
#define multiple_test2     int t;cin>>t;for(int i=1; i<=t; i++){cout<<"Case #"<<i<<": "<<test()<<nl;}
#define single_test        solve();


WELCOME_TO_MY_CODE
//vector<vector<int>>p(sz,vector<int>(sz,val));
/*
ll test()
{
    return value;
}
*/
void solve()
{
/*
       -------------------------
      |  AUTHOR: Md. Akram Khan |
       -------------------------
       -----------------------------------
      |  DATE:02 APRIL, 2020  TIME: 11:48 |
       -----------------------------------
       -----------------------------------------------
      |  EID-MUBARAK HUMBAAAAAAAAAAAAAAAAAAAAAAAA :)) |
       -----------------------------------------------
*/
    char a[12];
    read:
    while(scanf("%s",&a)!=EOF)
    {
        vector<pair<char,char>>p;
        int i=0,j=5;
        while(i<j)
        {
            p.pb({a[i],a[j]});
            i++,j--;
        }
        i=6,j=11;
        while(i<j)
        {
            bool ok=true;
            for(int k=0; k<p.size(); k++)
            {
                if((a[i]==p[k].f && a[j]==p[k].s)||(a[i]==p[k].s && a[j]==p[k].f))
                {
                    p[k]={'z','z'};
                    ok=false;
                    break;
                }
            }
            if(ok)
            {
                cout<<"FALSE\n";
                goto read;
            }
            i++,j--;
        }
        cout<<"TRUE\n";
    }
}
int main()
{
    faster_io //multiple_test2
    //multiple_test
    single_test
    //count_time
    return 0;
}



