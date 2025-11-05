
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
const ll N = 1e7 + 5;
void float_num(double num)
{
    std::cout <<std::fixed<< std::setprecision(10) << num << endl;
} 
void solve()
{
   double p1,p2,a1,a2,b1,b2; cin>>p1>>p2>>a1>>a2>>b1>>b2;
   double dis_for_a_to_p=(p1-a1)*(p1-a1) + (p2-a2)*(p2-a2);
   double dis_for_a_to_0=(0-a1)*(0-a1) + (0-a2)*(0-a2);
   double dis_for_b_to_p=(p1-b1)*(p1-b1) + (p2-b2)*(p2-b2);
   double dis_for_b_to_0=(0-b1)*(0-b1) + (0-b2)*(0-b2);
   double dis_for_b_to_a=sqrt((a1-b1)*(a1-b1) + (a2-b2)*(a2-b2));

   double x=min(dis_for_a_to_0,dis_for_b_to_0),y=min(dis_for_a_to_p,dis_for_b_to_p);
   double z=max(sqrt(max(x,y)),dis_for_b_to_a/2);

   double k1=max((dis_for_a_to_p),dis_for_a_to_0);
   k1=sqrt(k1);
   double k2=max((dis_for_b_to_p),dis_for_b_to_0);
   k2=sqrt(k2);
   float_num(min({z,k1,k2}));
   

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

