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
       int n;
       cin>>n;

      int fs=3;
      int sn=2;
      int tri=1;
       n=n-6;
      while(true)
      {
        if(n==0)break;
         fs++;
         n--;

         if(n==0)break;

         sn++;
         n--;

         if(n==0)break;

         tri++;
         n--;

         if(n==0)break;

      }
  cout<<sn<<" "<<fs<<" "<<tri<<endl;

   }


    return 0;

  }

