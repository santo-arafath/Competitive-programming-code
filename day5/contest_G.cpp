#include<bits/stdc++.h>
#define endl   "\n"
#define ll long long
#define ull unsigned long long
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void prime_fac(ll k)
{

    ll count=0;
    vector<ll>fac;
  for(int i=2;i*i<=k;i++)
   {
     if(k%i==0)
       {
        count++;
        fac.push_back(i);
        k/=i;
        while(k%i==0)
        {
           fac.push_back(i);
           count++;
           k/=i;

        } 

       }

   }

   if(k>1)
   {
    facs.push_back(k);
    count++;
   }

   cout<<cout<<endl;
   sort(fac.begin(),fac.end());

   for(auto x:fac){cout<<x<<" ";}





}



 int main()
  {

    Boost;
  ll k;
   cin>>k;
   

   prime_fac(k);



    return 0;

  }
