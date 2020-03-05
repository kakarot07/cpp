//Write a program in C++ to display n terms of natural number and their sum
#include<iostream>
using namespace std;
int main()
{
  int i,b,sum=0;
  cout<<"enter a number :"\';
  cin>>b;
  for(i=1;i<=b;i++){
    cout<<i<<endl;
    sum=sum+i;
  }
  cout<<"total is:"<<sum;

}
