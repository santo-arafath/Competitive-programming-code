#include<bits/stdc++.h>
#define endl   "\n"
#define ll long long
#define ull unsigned long long
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


using namespace std;

bool is_prime(ll n)
  {
     for(ll i=2;i*i<=n;i++)
       {

        if(n%i==0)
        {return false;}
       }

    return true;

  }

 int main()
  {

    Boost;
  ll t;
   cin>>t;
   while(t--)
   {
    
    ll p,n;
    cin>>p;



    n=sqrt(p);
     
    if(p==1)
    {
        cout<<"NO"<<endl;
    }
     
    
    

      else if((n*n)==p && is_prime(n))
    {cout<<"YES"<<endl;}
    else{
        cout<<"NO"<<endl;
    }



   }


    return 0;

  }
