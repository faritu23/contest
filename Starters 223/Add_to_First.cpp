
// #include<bits/stdc++.h>
// #define ll long long
// #define int long long
// using namespace std;
// void solve()
// {
//    int n; cin>>n;
//    map<int,vector<int>> mp;
//    vector<int> a(n),b(n);
//    for(int i=0;i<n;i++) cin>>a[i];
//    for(int i=0;i<n;i++) cin>>b[i];

//    for(int i=0;i<n;i++)
//    {
//        if(a[i]>b[i])
//        {
//            cout<<"No"<<endl;return;
//        }
//         a[i]*=-1;
//         mp[a[i]].push_back(b[i]);
//    }

//    bool f=true;
//    for(auto [i,j]:mp)
//    {
//         vector<int> v=j;
//         int m=v.size();
//         int a=0;
//         for(int k=1;k<m;k++)
//         {
//             if(v[k-1]<v[k]){
//                 a=1;break;
//             }
//         }
//         if(a)
//         {
//             cout<<"No"<<endl;return;
//         }
//    }
//    cout<<"Yes"<<endl;
// }
// main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t=1;cin>>t;
//     while(t--)
//     {
//         solve();
//     }
//     return 0;
// }


#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
   int n; 
   cin >> n;
   map<int, vector<int>> mp;
   vector<int> a(n), b(n);
   
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < n; i++) cin >> b[i];

   for(int i = 0; i < n; i++)
   {
       if(a[i] > b[i])
       {
           cout << "No" << endl;
           return;
       }
       mp[a[i]].push_back(b[i]);
   }

   for(auto& [i , v] : mp)
   {
       for(int i = 1; i < v.size(); i++)
       {
           if(v[i-1] < v[i])
           {
               cout << "No" << endl;
               return;
           }
       }
   }
   cout << "Yes" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}