
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   map<int,int>mp,mp1;
   vector<int> v(n);
   vector<pair<int,int>>p;
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
    mp1[v[i]]++;
   }
   stack<pair<int,int>>s;
   
   for(auto [i,j]:mp1)
   {
        p.push_back({j,i});
   }

   sort(p.rbegin(),p.rend());
   int a=0,b=0,al=0,bo=1;
   
   for(int i=0;i<p.size();i++)
   {
       int x=p[i].first;
       int y=p[i].second;//person

        int k=(y+1)/2;
        if(y%2)
        {
            if(al==0)
            {
                a+=k*x;
                b+=(y-k)*x;
            }
            else{
                b+=k*x;
                a+=(y-k)*x;
            }
            swap(al,bo);
        }
        else{
            a+=k*x;
            b+=k*x;
        }
        
        
   }
   cout<<a<<" "<<b<<endl;
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
    return 0;
}