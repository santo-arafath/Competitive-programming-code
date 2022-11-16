#include<bits/stdc++.h>
#define endl   "\n"
#define Boost    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

 int main()
  {

    Boost;
  int t;
   cin>>t;
   char arr[8][8];
   while(t--)
   {
     bool dob=false;

     for(int i=0;i<8;i++)
     {
         for(int j=0;j<8;j++)
         {
           cin>>arr[i][j];
         }
     }
      int m;
     for(int i=0;i<8;i++)
     {
         int k=0;
         for(int j=0;j<8;j++)
         {
           if(arr[i][j]=='#')
           {
               k++;
               m=j;
           }
         }
         if(k==2)dob=true;

         if(dob==true && k==1)
         {
           cout<<i+1<<" "<<m+1<<endl;
           break;
         }
     }




   }


    return 0;

  }

