#include<bits/stdc++.h>
#define WELCOME_TO_AKRAM_CODE   using namespace std;
#define nl                      "\n"
#define f                       first
#define s                       second
#define ll                      long long
#define pb                      push_back
#define pf                      push_front
#define np                      next_permutation
#define pp                      prev_permutation
#define sz(x)                   x.size()
#define sqr(x)                  ((x)*(x))
#define pi                      acos(-1)
#define mod                     1000000007
#define setprecision(x)         fixed<<setprecision((int)(x))
#define mem1(x)                 memset(x,0,sizeof(x))
#define mem2(x)                 memset(x,-1,sizeof(x))
#define all(x)                  (x).begin(),(x).end()
#define rev(x)                  reverse(all(x))
#define iota(x,a)               iota(all(x),a)
#define sorta(x)                sort(all(x))
#define sortd(x)                sort(all(x),greater<int>())
#define csort(x,c)              sort(all(x),c)
#define rsort(x)                sort(x.rbegin(),x.rend())
#define lb(x,a)                 lower_bound(all(x),a)-(x).begin()
#define lb1(x,a)                lower_bound(all(x),a)-(x).begin()-1
#define allup(x)                transform(all(x),(x).begin(),::toupper)
#define alllow(x)               transform(all(x),(x).begin(),::tolower)
#define faster_io               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define count_time              cerr<<nl<<"Time elapsed : "<<clock()*1000.0/CLOCKS_PER_SEC<<"ms"<<nl;
#define allele(x)               for(auto i:(x)){cout<<i<<' ';}cout<<nl;
#define multiple_test           int t; cin>>t; while(t--){solve();}
#define multiple_test2          int t;cin>>t;for(int i=1; i<=t; i++){cout<<"Case #"<<i<<": "<<test()<<nl;}
#define single_test             solve();
//int dx[4]= {-1,1,0,0};
//int dy[4]= {0,0,1,-1};
//ceil(a/b)=(a+b-1)/b
WELCOME_TO_AKRAM_CODE
//vector<vector<int>>p(sz,vector<int>(sz,val));
/*
ll test()
{
    return value;
}
*/
/*      0 O
         ^
*/
void solve()
{
    //multiset<int,greater<int>>m; //sortd;
    multiset<int>m;              //sorta;
    multiset<int>::iterator it;
    m.insert(8);
    m.insert(4);
    m.insert(4);
    m.insert(4);
    m.insert(9);
    m.insert(11);
    m.insert(1);
    m.insert(10);
    m.insert(11);
    allele(m);
    m.insert(6);
    m.insert(15);
    allele(m);

    multiset<int>m1(all(m));
    allele(m1);

    cout<<*m.lower_bound(11)<<nl;
    cout<<*m1.lower_bound(11)<<nl;
    cout<<*m.upper_bound(9)<<nl;
    cout<<*m1.upper_bound(9)<<nl;

    /*
    m.erase(m.begin(),m.find(10));
    allele(m);
    m1.erase(m1.begin(),m1.find(10));
    allele(m1);
    */

    int a=m.erase(6);
    cout<<a<<nl;
    allele(m);
    int aa=m1.erase(4);
    cout<<aa<<nl;
    allele(m1);
    m.erase(m.find(4));
    allele(m);
    m.erase(11);
    allele(m);
}
/*      O 0
         U
*/
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    faster_io //multiple_test2
    //multiple_test
    single_test
    count_time
    return 0;
}
