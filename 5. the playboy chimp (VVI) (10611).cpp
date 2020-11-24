#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    long x[a];
    for(int i=0; i<a; i++)
        cin>>x[i];
    int b;
    cin>>b;
    long y[b];
    for(int i=0; i<b; i++)
        cin>>y[i];
    int mn,mx;
    for(int i=0; i<b; i++)
    {
        mn=lower_bound(x,x+a,y[i])-x-1;
        mx=upper_bound(x,x+a,y[i])-x;
        if(mn<0&&mx>=a)
            cout<<"X X\n";
        else if(mn<0&&mx<a)
            cout<<"X "<<x[mx]<<endl;
        else if(mn>=0&&mx>=a)
            cout<<x[mn]<<" X"<<endl;
        else
            cout<<x[mn]<<" "<<x[mx]<<endl;
    }
    return 0;
}
