#include<iostream>
using namespace std;
int main()
{


 int t;
 cin>>t;

 while(t--)
 {

   int n;
   cin>>n;
  bool flag=false;
   while(n>0)
   {

   if(n%10!=0)
   {
     flag=true;
   }
    if(flag==true)
   {
    cout<<n%10;
   }
    n/=10;


   }
    cout<<endl;


 }




    return 0;
}
