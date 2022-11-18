
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
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }

   sort(arr, arr + n);





   int p=0;

   int l=0,m=n-1;

int pk=1;


     while(true)
     {


       while(pk==1)
       {
          if(arr[m]>=k && m>=0)
          {
              p++;

              m--;


          }else
          {


              pk=2;
              break;
          }

       }

       if(l>=m){

   break;}



      if((arr[l]+arr[m])>= k)
      {
          p++;

          l++;
          m--;

      }

       else{
             l++;

           }


   if(l>=m){

   break;}


     }

   cout<<p<<endl;
   }


    return 0;

  }
