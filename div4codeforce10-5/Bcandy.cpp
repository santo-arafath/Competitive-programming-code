#include<bits/stdc++.h>
using namespace std;
int main()
{

   int t;
   cin>>t;
   while(t--)
   {
     int n;
     cin>>n;
     int arr[n];
     int Min=1000000000;
     for(int i=0;i<n;i++)
     {

       cin>>arr[i];
       if(arr[i]<Min)
            Min=arr[i];

     }

     int sum=0;

     for(int i=0;i<n;i++)
     {

       sum+=(arr[i]-Min);


     }

 cout<<sum<<endl;

   }




    return 0;
}
