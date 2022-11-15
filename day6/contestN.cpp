#include<bits/stdc++.h>
#define endl   "\n"
#define ll long long
#define ull unsigned long long
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void prime_sieve(ll n)
{
  vector<ll>sv(10000000,0);
  ll  c=0,c1=0;
   for(ll i=2;i<n;i++)
    {
        if(sv[i]==0)
        {
        
         c++;  
        for(int j=i*i;j<=n;j+=i)
          {

             sv[j]=1;

          }
        }

    } 


  for(int i=2;i<=6;i++)
  {

     if(sv[i]!=1)
     {
        c1++;
        cout<<i<<" ";
     }


  }


cout<<"C "<<c<<endl;

cout<<"C1 "<<c1<<endl;
cout<<"C1222 "<<c1*c1<<endl;

}

 int main()
  {

    Boost;
   ll t;
   cin>>t;
   while(t--)
   {
  
     ll n,a,b;
     cin>>a>>b;

     n=b-a;
     prime_sieve(6);


   }


    return 0;

  }
