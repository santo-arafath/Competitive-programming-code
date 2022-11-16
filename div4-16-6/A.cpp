
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
int a,b,c,d;

cin>>a>>b>>c>>d;
int n=0;
   if(b>a)
   {
     n++;
   }
   if(c>a)
   {
     n++;
   }
   if(d>a)
   {
     n++;
   }

   cout<<n<<endl;


   }


    return 0;

  }
