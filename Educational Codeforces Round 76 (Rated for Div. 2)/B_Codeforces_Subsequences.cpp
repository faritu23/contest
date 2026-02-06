

#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n; cin>>n;
    int c=45;
    int cur=1,l=0,len=10,i=0;
    string ans,s="codeforces";
    while(l<10)
    {
        if(cur==n)
        {
            ans.push_back(s[l]);
        }
        else{
            while(c--)
            {
                int need=1;
                for(int i=0;i<len;i++ )  need*=c;
                if(need*cur<n){
                    c++;
                    break;
                }
            }
            
            for(int i=0;i<c;i++)ans.push_back(s[l]);
            cur*=c;
            
        }
        len--;
        l++;
        i++;
    }
    cout<<ans<<endl;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // ll t=1;cin>>t;
    // while(t--)
    {
        solve();
    }
    return 0;
}