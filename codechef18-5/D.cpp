
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
        long long mod=pow(10,9)+7;

        int n;
        cin>>n;
        char arr[n];



        for(int i=0;i<n;i++)
        {
          cin>>arr[i];


        }
        long long T=1;
        int k=1;


        for(int i=0;i<n;i++)
        {
            if(arr[i]=='c'||arr[i]=='g'||arr[i]=='l'||arr[i]=='r')
            {
               T*=2;
               T%=mod;

            }

        }
      cout<<T<<endl;


    }


    return 0;

  }
