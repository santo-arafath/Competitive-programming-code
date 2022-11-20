

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
    int l=n-1;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];


    }
    int i=n-1;
    while(arr[i]==0)
    {
      i--;
      l--;

    }

  cout<<l<<endl;

 }


    return 0;

  }
