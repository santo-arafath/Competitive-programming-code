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
     ll n;
     cin>>n;
     ll arr[n+2];
     for(ll i=0;i<n;i++){cin>>arr[i];}

     sort(arr,arr+n);

     //for(int i=0;i<n;i++){cout<<arr[i]<<" ";}

     
     int l=0,r=n-1;
     int cnt=0;
     int sum=0;
     r--;
     int i=2;

     while(l<r)
       {
           
          if(arr[n-1]==arr[l]+arr[r]){sum=arr[n-1];break;}

          if((arr[n-1])>(arr[l]+arr[r])){l++;}
          

         
       }

      cout<<sum<<endl;

     cout<<endl;

   }


    return 0;

  }
