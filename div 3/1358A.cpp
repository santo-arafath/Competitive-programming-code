#include<bits/stdc++.h>
#define endl   "\n"
#define ll long long
#define ull unsigned long long
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

 int main()
  {

    Boost;
  ll t;
   cin>>t;
   while(t--)
   {
      ll a,b,n;
      cin>>a>>b>>n;

      
      if(a>b)
      {
        n-=b;
        cout<<n/a<<endl;
      }
      else{
          n-=a; 
        cout<<n/b<<endl;


      }


   }


    return 0;

  }
