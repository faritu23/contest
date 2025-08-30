#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int x,y; cin>>x>>y;
   vector<int>v(10);
   v[0]=x;v[1]=y;

   for(int i=2;i<=10;i++)
   {
        int a=v[i-1]+v[i-2];
        string l=to_string(a);
        string r=to_string(a);
        reverse(r.begin(),r.end());
        int sum=0;
        
        for(int j=0;j<r.size();j++)
        {
            int k=r[j]-'0';
            sum*=10;
            sum+=k;
        }
        v[i]=sum;
        

   }
   cout<<v[9]<<endl;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}