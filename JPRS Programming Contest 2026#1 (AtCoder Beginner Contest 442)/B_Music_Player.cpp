#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int q; cin>>q;
   int a=0;bool flag=false;
   while(q--)
   {
    int n;cin>>n;
    if(n==1)a++;
    else if(n==2){
        if(a>0)a--;
    }
    else{
        if(flag)flag=false;
        else flag=true;
    }


    if(a>=3 && flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
   }
   
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}