#include<bits/stdc++.h>
#define endl   "\n"
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

 int main()
  {

    Boost;
  int t;
   cin>>t;
   int arr[t];
    for(int i=0;i<t;i++)
    {
    cin>>arr[i];
    }



    sort(arr,arr+t);

    int k;
    k=arr[0];
    int n=1;

    for(int i=0;i<t;i++)
    {
      if(arr[i] !=k)
      {
          n++;
          k=arr[i];
      }
    }
cout<<n<<endl;
    return 0;

  }

