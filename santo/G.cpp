
#include<bits/stdc++.h>
#define endl   "\n"
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

 int main()
  {

    Boost;


    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }

   sort(arr, arr + n);



   int l=0,m=n-1;

    int pk=1;


     while(true)
     {
 if(l>=m){


   cout<<-1<<endl;

   break;}

      if((arr[l]+arr[m])>k)
      {

          m--;

      }

       else if ((arr[l]+arr[m])<k)
      {

          l++;

      }
      else{

        cout<<arr[l]<<" "<<arr[m]<<endl;
          return 0;
      }


   if(l>=m){


   cout<<-1<<endl;

   break;}


     }




    return 0;

  }

