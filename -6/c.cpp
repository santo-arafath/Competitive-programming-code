
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
     int sum=0;
     int a;
     for(int i=0;i<n;i++)
     {

         cin>>a;
         sum+=a;

     }

     cout<<"sum "<<sum<<endl;
     if(sum==0)
     {cout<<0<<endl;
     }


       else if(sum%2==0)
       {
           cout<<sum/2<<endl;

       }

       else{
        cout<<-1<<endl;

       }

   }


    return 0;

  }
