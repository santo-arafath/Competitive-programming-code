#include<bits/stdc++.h>
#define endl   "\n"
#define ll long long
#define ull unsigned long long
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;


 
///const int N = 1e7 + 9;
void prime_sieve(ll n)
{
   ll p[n+5]={0};

   vector<ll> prime;
   
  for(ll i=2;i*i<=n;i++)
   {
     
     if(p[i]==0)
     {
        
         prime.push_back(i);
         
         for(ll j=i*i;j<=n;j+=i)
          {
           p[j]=1;
       
          }
     }

     
    
   } 

   for(ll i=2;i<=n;i++)
          {
          if(p[i]==0)
          {
            prime.push_back(i);
          }
       
          }
     sort(prime.begin(),prime.end());
   for(auto x:prime){cout<<x<<" ";}
   cout<<prime[0]<<" "<<prime[101]<<" "<<prime[201];


}

 int main()
  {

    Boost;
   
   ll n;
  n=10000;

   prime_sieve(n);

    
     


    return 0;

  }
