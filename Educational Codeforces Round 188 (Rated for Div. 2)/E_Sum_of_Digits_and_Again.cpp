

#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
int check_n_sum(int n)
{
    int sum=0,i=0;
    while(n>9){
        int cur=0,x=n;
        while(x){
            sum+=x%10;
            cur+=x%10;
            x/=10;
        }
        n=cur;
    }
    sum+=n;
    return sum;
}
bool match(int n,vector<int> f)
{
    vector<int> v(11,0);
    int k=n;
    while(n>9){
        int cur=0,x=n;
        while(x){
            cur+=x%10;
            v[x%10]++;
            x/=10;
        }
        n=cur;
    }
    v[n]++;

    
    int sum=0;
    for(int i=0;i<10;i++)
    {
        if(v[i]>f[i])return false;
        f[i]-=v[i];
        sum+=(f[i]*i);
    }

    if(sum==k) return true;
    return false;
}
void check(int n,vector<int> f){
    vector<int> v(11,0);
    vector<int> ans;
    int k=n,i=0;
    while(n>9){
        ans.push_back(n);
        int cur=0,x=n;
        while(x){
            cur+=x%10;
            v[x%10]++;
            x/=10;
        }
        n=cur;
    }
    v[n]++;
    ans.push_back(n);

    
    for(int i=0;i<10;i++) f[i]-=v[i];

    for(int i=9;i>=0;i--){
        for(int j=0;j<f[i];j++)cout<<i;
    }
    for(int i=0;i<ans.size();i++)cout<<ans[i];cout<<endl;
}
void solve()
{
    string s;cin>>s;
    int n=9*s.size();
    vector<int> f(11,0);
    int sum=0;
    for(int i=0;i<s.size();i++){
        int c=s[i]-'0';
        sum+=c;
        f[c]++;
    }
    if(s.size()==1){
        cout<<s<<endl;return;
    }
    int a;
    for(int i=0;i<=n;i++)
    {
        if(i+check_n_sum(i)==sum)
        {
            if(match(i,f))
            {
                a=i;break;
            }
        }
    }

    check(a,f);
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