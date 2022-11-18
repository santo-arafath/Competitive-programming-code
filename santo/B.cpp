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
     bool odd=false;
     int k=0;
     for(int i=0;i<n;i++)
     {
         int a;

         cin>>a;
         if(a%2==0)
         {
             k++;
         }
         else{
            odd=true;
         }

     }

     if(odd==true)
     {
         cout<<k<<endl;
     }
     else{
        cout<<-1<<endl;
     }

   }


    return 0;

  }

