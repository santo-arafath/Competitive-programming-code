
#include<bits/stdc++.h>
#define endl   "\n"
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

 int main()
  {

    Boost;
  int t;
   cin>>t;
   while(t--)
   {
        long long n;
        cin>>n;
        long long res=0;
        while(n>=5)
        {
         res+=n/5;
         n/=5;
        }
cout<<res<<endl;
   }


    return 0;

  }
