#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)

    {

      int a;
      cin>>a;

      int sum1=0;
      int sum2=0;
      for(int i=0;i<3;i++)
      {
          sum1+=a%10;

          a=a/10;

      }


      for(int i=0;i<3;i++)
      {

         sum2+=a%10;
         a=a/10;


      }
      if (sum1==sum2)
      {


          cout<<"Yes"<<endl;
      }
      else{

        cout<<"No"<<endl;
      }
    }



}
