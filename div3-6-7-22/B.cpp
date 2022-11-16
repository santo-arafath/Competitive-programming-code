
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

    int a[n];
    int b[n];

  for(int i=0;i<n;i++)
  {
   cin>>a[i];
  }

  for(int i=0;i<n;i++)
  {
    cin>>b[i];
  }



  if(n==1)
  {
      if(a[0]>b[0])
      {cout<<"YES"<<endl;}

      else{cout<<"NO"<<endl;}
      continue;
  }



  int k=0;


    int f=a[0]-b[0];


     for(int i=0;i<n;i++)
     {
        if(b[i]==0)
        {
           if((a[i]-b[i])<=f)
           {
             continue;
           }
           cout<<"NO"<<endl;
           continue;

        }



       if(a[i]-b[i]!=f)
       {
           cout<<"NO"<<endl;
           k=1;
           break;
       }

     }

     if(k==0)
     {
         cout<<"YES"<<endl;
     }



   }


    return 0;

  }
