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
  int flag=false;
     int n;
     cin>>n;
     int k=0;
     int arr[n];
     for(int i=0;i<n;i++)
     {
      cin>>arr[i];
     }

int minx=0;
int f=0;
     for(int i=n-1;i>f+1;i--)
     {

        if(arr[i]!=0)
       {
          for(int j=i-1;j>=0;j--)
          {
            if((arr[i]==arr[j]))
            {
              flag=true;

                if(j>minx)
                {minx=j;
                  flag=true;
                }

                arr[j]=0;
                k++;
            }

          }



        }


     }


if(flag==true)
{


     cout<<minx+1<<endl;}

     else{

        cout<<minx<<endl;
     }

   }


    return 0;

  }

