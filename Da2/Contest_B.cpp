#include<bits/stdc++.h>
#define endl   "\n"
#define ll long long
#define Boost  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

 ll kth_divs(ll n,ll k)
 {
    ll count=0;
    vector<ll>divs;
    for(ll i=1;i*i<=n;i++)
    {
      if(n%i==0)
      {

        divs.push_back(i);
        count++;
        if(i!=n/i){divs.push_back(n/i);
        count++;
        }
      }

    }
    
   
    if(count<k)
    {
      return -1;
    }

  sort(divs.begin(),divs.end());
  
  cout<<endl;
  return divs[k-1];
   
 }

 int main()
  {

    Boost;
   ll n,k;
   cin>>n>>k;
   cout<<kth_divs(n,k);

    return 0;

  }