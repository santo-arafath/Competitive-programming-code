#include<iostream>
using namespace std;
int main()
{
  int m=10,n=10;

  for(int i=0;i<=n;i++)
  {
    for(int j=0;j<=m;j++)
    {
        if(j!=0 && j!=n)
        {
            cout<<" ";
          if(i!=0 && i!=m)
          {
              cout<<" ";
            continue;
          }
        }
        cout<<"*";
    }
    cout<<endl;
  }


    return 0;
}
