
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
      int l=n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }

       for(int i=0;i<n-1;i++)
       {
          if(arr[i]==arr[i+1])
          {
            l--;
          }

       }
      cout<<l<<endl;

    }



    return 0;

  }
