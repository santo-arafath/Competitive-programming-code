#include<bits/stdc++.h>
#define endl   "\n"
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

 int main()
  {

    Boost;
  int t;
   cin>>t;

   int arr[10]={1,2,3,4,5,6,7,8,9};
   while(t--)
   {

    int n;
    cin>>n;
    int f=8;

    int sum=0;
    int arr22[50]={0};
    int p=n;

     int i=-1;
    while(true)
    {
i++;
        if(f<p)
      {

        p=p-arr[f];

        sum+=arr[f];
        //cout<<arr[f];
        arr22[i]=arr[f];
        f--;
      }else{


         sum+=arr[p-1];
         //cout<<arr[p-1];
         arr22[i]=arr[p-1];
      }

    if(sum==n){break;}

    }


     for(int k=i;k>=0;k--)
    {
        cout<<arr[k];
    }

     cout<<endl;
   }


    return 0;

  }

