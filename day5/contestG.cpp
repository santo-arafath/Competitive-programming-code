#include<bits/stdc++.h>
#define endl   "\n"
#define ll long long
#define ull unsigned long long
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;


 int main()
  {

    Boost;
   ll k;
   cin>>k;

   ll res=k/2;

   cout<<res<<endl;

   for(ll i=0;i<res-1;i++)
   {
    cout<<2<<" ";
   }
   

   if(k%2==0)
   {
     cout<<2;
   }else{ cout<<3;}





    return 0;

  }
