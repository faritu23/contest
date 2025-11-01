// #include<iostream>
// using namespace std;
// int main()
// {
//     int test;cin>>test;
//     for(int t=0;t<test;t++)
//     {
//         int n,i;
//         cin>>n;
//         string a;cin>>a;
//         int cnt=n;
//         for(i=0; i<n/2; i++)
//         {
            
//             if((a[i]=='0' && a[n-i-1]=='1') || (a[i]=='1' && a[n-i-1]=='0'))
//             {
//                 cnt-=2;
//             }
//             else
//                 break;
//         }
//         cout<<cnt<<endl;

//     }
   
// }


#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,j;
    cin>>t;
    for(j=0; j<t; j++)
    {
        int n,i;
        cin>>n;
        int cnt=n;
        string s;
        cin>>s;
        for(i=0; i<n/2; i++)
        {
            if((s[i]=='0' && s[n-i-1]=='1') || (s[i]=='1' && s[n-i-1]=='0'))
            {
                cnt--;
            }
            else
                break;
        }
        cout<<cnt<<endl;
    }
}