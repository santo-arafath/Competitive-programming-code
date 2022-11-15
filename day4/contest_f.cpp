#include<bits/stdc++.h>
#define endl   "\n"
#define ll long long
#define ull unsigned long long
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


using namespace std;

 int main()
  {

    Boost;
   
    ll n;
    cin>>n;
    ll a;
    vector<ll> arr;
    vector<ll> arr2;
    for(ll i=1;i<=n;i++)
    {
     cin>>a;
     arr2[a]++;

    
    }
   
          for(ll j=1;j<=1000000;j++)
             {
                for(ll i=j;i<=n;i+=j)
                {
                    arr[j]+=arr2[i];
                    
                }
               
             }
int b=1;
        for(ll i=1;i<=1000000;i++)
        {

            cout<<b++<<" "<<arr[i]<<endl;
        }


    return 0;

  }
