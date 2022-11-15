#include<bits/stdc++.h>
#define endl   "\n"
#define ll  long long
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void gcd(ll a,ll b)
 {
   
   ll i=min(a,b);

   while(i>0)
   {
     if(a%i==0 && b%i==0)
     {
        cout<<i;
        break;
     }
  i--;
   }




 }

 int main()
  {

    Boost;
  int t;
   cin>>t;
   while(t--)
   {
  ll a,b;
  cin>>a>>b;
  gcd(a,b);

   }


    return 0;

  }
