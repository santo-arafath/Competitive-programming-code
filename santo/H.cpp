#include<bits/stdc++.h>
#define endl   "\n"
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

long long subArray(int arr[],int n)
{
long long maxsum= -999999999999;
   for(int i=0;i<n;i++)
   {

       for(int j=0;j<n;j++)
       {
           int sum=0;
         for(int k=i;k<=j;k++)
         {

           sum+=arr[k];


         }

         if(sum > maxsum)
         {
             maxsum=sum;
         }

       }

   }


return maxsum;

}





int main()
{
   Boost;

   int n;
   cin >>n;
   int arr[n];


   for(int i=0;i<n;i++)
   {

     cin>>arr[i];
   }




  cout<<subArray(arr,n);



    return  0;
}






