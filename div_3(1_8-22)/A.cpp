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

     int n,h,m;
     cin>>n>>h>>m;


     int k=h*60+m;


     int h1,m1;
     int time[n];
     bool flag=false;
     int f=0;


     for(int i=0;i<n;i++)
     {

      cin>>h1>>m1;

      time[i]=(h1*60)+m1;

      if(time[i]>k)
      {
          flag=true;
      }




      if(time[i]==k)
      {
         //cout<<0<<" "<<0<<endl;
          f=1;

      }

     }


     int finall=0;

     sort(time,time+n);

     if(f==0)
     {



     if(flag==true)
     {

     for(int i=0;i<n;i++)
     {
       if(time[i]>k)
       {
        finall=time[i];
        break;
       }
     }

     int th=(finall-k)/60;
     int tm=(finall-k)%60;
cout<<th<<" "<<tm<<endl;


     }
     else{


       finall=time[0];



       int intime=(1440-k)+finall;

        int th=intime/60;
        int tm=intime%60;

cout<<th<<" "<<tm<<endl;



     }



     }

     else if(f==1)
     {

         cout<<0<<" "<<0<<endl;
     }



   }


    return 0;

  }

