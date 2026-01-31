/*



3 6
a 6

1 6
2 
1011
7 11
4 11
3

4 13








*/



#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
string binary_convert(int n)
{
    string s;
    for(int i=0;i<=31;i++)
    {
        if((n>>i)&1)s.push_back('1');
        else s.push_back('0');
    }
    // while(s.size()>1 && s.back()=='0')s.pop_back();
    return s;
}
int aa(string s1,string s2,int x,int y)
{
    //take x
    int a=0,b=0,i=0,c=0;
    while(a<y)
    {
        if(s1[i]=='0')
        {
            a+=pow(2,i);
            if(a>y)
            {
                b=a;
                a-=pow(2,i);
                break;
            }
        }
        i++;
    }

    while(s2.size() && s2.back()=='0')
    {
        s2.pop_back();
    }

    // cout<<"0"<<endl;
    int k=min(abs(y-b),abs(y-a));
    if(s1[s2.size()]== '0'){
        c=pow(2,s2.size());
        k=min(abs(y-c),k);
    }
    return k;

}
int bb(string s1,string s2,int x,int y)
{
    //take y
    int a=0,b=0,i=0,c=0;
    while(a<x)
    {
        if(s2[i]=='0')
        {
            a+=pow(2,i);
            if(a>x)
            {
                b=a;
                a-=pow(2,i);
                break;
            }
        }
        i++;
    }
    while(s1.size() && s1.back()=='0')
    {
        s1.pop_back();
    }
    

    int k=min(abs(x-b),abs(x-a));
    if(s2[s1.size()]== '0'){
        c=pow(2,s1.size());
        k=min(abs(x-c),k);
    }
    return k;

}
void aa1(string s1,string s2,int x,int y)
{
    //take x
    int a=0,b=0,i=0,c=0;
    while(a<y)
    {
        if(s1[i]=='0')
        {
            a+=pow(2,i);
            if(a>y)
            {
                b=a;
                a-=pow(2,i);
                break;
            }
        }
        i++;
    }
    while(s2.size() && s2.back()=='0')
    {
        s2.pop_back();
    }

    int k=min(abs(x-b),abs(x-a));
    if(s2[s1.size()]== '0'){
        c=pow(2,s1.size());
        k=min(abs(x-c),k);
    }

    if(abs(y-b)<=abs(y-a) && abs(y-b)<=abs(y-c)) cout<<x<<" "<<b<<endl;
    else if(abs(y-a)<=abs(y-b) && abs(y-a)<=abs(y-c)) cout<<x<<" "<<a<<endl;
    else cout<<x<<" "<<c<<endl;

}
void bb1(string s1,string s2,int x,int y)
{
    //take y
    int a=0,b=0,i=0,c=0;
    while(a<x)
    {
        if(s2[i]=='0')
        {
            a+=pow(2,i);
            if(a>x)
            {
                b=a;
                a-=pow(2,i);
                break;
            }
        }
        i++;
    }
    while(s1.size() && s1.back()=='0')
    {
        s1.pop_back();
    }

    int k=min(abs(x-b),abs(x-a));
    if(s2[s1.size()]== '0'){
        c=pow(2,s1.size());
        k=min(abs(x-c),k);
    }
    
    if(abs(x-b)<=abs(x-a) && abs(x-c)>=abs(x-b)) cout<<b<<" "<<y<<endl;
    else if(abs(x-b)>=abs(x-a) && abs(x-a)<=abs(x-c)) cout<<a<<" "<<y<<endl;
    else cout<<c<<" "<<y<<endl;

}
void solve()
{
    int x,y; cin>>x>>y;
    string s1=binary_convert(x),s2=binary_convert(y);
    int a=aa(s1,s2,x,y);
    int b=bb(s1,s2,x,y);
    
    if(a<=b)
    {
        aa1(s1,s2,x,y);
    }
    else
    bb1(s1,s2,x,y);
   
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