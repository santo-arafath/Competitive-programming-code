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

    int s[n];
    int f[n];

    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>f[i];
    }


    int a;

    int arr[n];






    for(int i=0;i<n;i++)
    {
       if(s[i]<f[i])
       {
           a=s[i];

           arr[i]=f[i]-s[i];
       }

       else if(s[i]>f[i])
       {
           a=f[i];

           arr[i]=s[i]-a;
       }



    }



for(int i=0;i<n;i++)
    {

       cout<<arr[i]<<" ";


    }

cout<<endl;
   }


    return 0;

  }
