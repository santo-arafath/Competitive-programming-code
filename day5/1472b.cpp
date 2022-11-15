#include<bits/stdc++.h>
#define endl   "\n"
#define ll long long
#define ull unsigned long long
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

 int main()
  {

    Boost;
  int t;
   cin>>t;

  

   while(t--)
   {
       int a,n;
       cin>>n;
      
      int one=0;
      int two =0;
       for(int i=0;i<n;i++)
       {
          cin>>a;

          if(a==1)
          {
             one++;
          }
          if(a==2)
          {
            two+=2;
          }

       }
       
      

       if((one%2==0) && (two%2==0)){cout<<"YES\n";}
       else {cout<<"NO\n";}
       
   }

    return 0;

  }
