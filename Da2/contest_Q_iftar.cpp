#include<bits/stdc++.h>
#define endl   "\n"
#define ll long long 
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void piaju(ll p,ll l)
{
   ll n=p-l;
   vector<ll>divs;
   for(ll i=1;i*i<=n;i++)
   {
      if(n%i==0)
      {
        divs.push_back(i);
        if(i!=n/i){divs.push_back(n/i);}
      }

   }

   sort(divs.begin(),divs.end());
   for(auto x:divs){cout<<x <<" ";}

}

 int main()
  {

    Boost;
   int t;
   cin>>t;
   ll p,l;
   int i=0;
   while(t--)
   {
    cin>>p>>l;
    cout<<"Case "<<++i<<": ";
    piaju(p,l);
    cout<<endl;  
   }


    return 0;

  }
