#include<bits/stdc++.h>
#define endl   "\n"
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


//n^2 solution is possible by taking all of the sum before

//n log n solution is also possible by finding difference before

using namespace std;
int main()
{
    Boost;
    int t;
    cin>>t;



   while(t--)
   {
       int n,m,difii=0;

       cin>>n>>m;


       int p=n-1;

       int sz=(p*(p+1))/2;

       int difff[sz];

       string arr[n];


       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }

       for(int i=0;i<n-1;i++)
       {

          for(int j=i+1;j<n;j++)
          {
              int sum=0;

              for(int k=0;k<m;k++)
              {

                 int dif;

                 dif=arr[i][k]-arr[j][k];

                 if(dif<0)
                 {
                     dif=dif*-1;
                 }

                 sum+=dif;

              }

              difff[difii]=sum;
              ++difii;



          }




       }
       int Min=difff[0];

          for(int i=1;i<sz;i++)
          {


             if(Min>difff[i])

             {
               Min=difff[i];
             }


          }

          cout<<Min<<endl;
   }




    return 0;
}
