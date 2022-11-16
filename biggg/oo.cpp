#include<bits/stdc++.h>
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  // Write your code here.
int i=array.size();
  int k=0;
   while(i!=0 || k!=sequence.size()+1))
     {
        if(array[i]==sequence[k])
        {
          k++;

        }
      i++;

     }

if(k==sequence.size())
{
  return true;
}


  return false;
}


int main()
{

vector<int>array=[1,2,3,4];
vector<int>sequence=[1,3,4];


bool a=isValidSubsequence(array,sequence);

  cout<<a<<endl;




}
