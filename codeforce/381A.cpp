#include<bits/stdc++.h>
#define endl   "\n"
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

 int main()
  {

    Boost;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];

    }

    int sereja=0,dima=0;
    int i=0,j=n-1,k=2;
    while(i<=j)
    {
       if(k%2==0)
       {


       if(arr[i]>arr[j])
        {
          sereja+=arr[i];
          i++;
        }
        else{
          sereja+=arr[j];
           j--;
        }

       }else{

        if(arr[i]>arr[j])
        {
          dima+=arr[i];
          i++;

        }
        else{
          dima+=arr[j];
           j--;
        }


       }

       k++;

    }


    cout<<sereja <<" "<<dima<<endl;
    return 0;

  }

