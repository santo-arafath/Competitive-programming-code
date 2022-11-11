#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int odd_div(ll n)  /// O(N)
{
  ll count =0;

  for(ll i=1;i*i<=n;i++)
  {
   
   
    cout<< i*i<<" ";

    count++;

  }
cout<<endl;
  return count;
}





int main()
{
 ll n ;
 cin>>n ;

  cout<<odd_div(n);


    return 0;
}