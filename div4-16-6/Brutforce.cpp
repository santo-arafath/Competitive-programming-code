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
    int arr[n];

     vector<int> a2;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
     int s=n;

    int p=0;
    a2[0]=arr[0];
    p++;
     for(int i=1;i<n;i++)
     {
        if(arr[i]>a2[p])
        {
            int k=p,l=0;

            while(k>=0)
            {
              if(arr[i]==a2[i]){l==1;}

              p--;

              cout<<p<<endl;
            }

            if(l==0)
            {


          a2.push_back(arr[i]);
           p++;}
        }

     }

     cout<<a2.size()<<endl;

   }


    return 0;

  }


