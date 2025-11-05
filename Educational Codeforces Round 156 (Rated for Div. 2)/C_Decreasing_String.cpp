
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   string s; cin>>s;
   char c='0';
   s.push_back(c);

   int n=s.size(),m;cin>>m;
   bool f=false;
   string s1="";
   for(char c: s)
   {
        if(n>m)f=true;
        while(!f && s1.size()>0 && s1.back()>c)
        {
            s1.pop_back();
            m-=n-1;
            n--;
        

            if(n>m) f=true;
        }
        s1.push_back(c);
   }
//    cout<<s1<<" "<<m<<endl;
   cout<<s1[m-1];

}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;cin>>t;
    while(t--)
    {
        solve();
        
    }
    cout<<endl;
    return 0;
}


