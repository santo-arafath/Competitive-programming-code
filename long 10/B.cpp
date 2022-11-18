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
     int n,x;

     cin>>n>>x;
if(n<6){cout<<x<<endl;
continue;}

     int b=n/6;


     if(b*6<n)
     {
         b++;
     }
cout<<b*x<<endl;

   }


    return 0;

  }

