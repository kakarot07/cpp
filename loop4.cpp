//Write a program in C++ to find the sum of first 10 natural numbers.
#include<iostream>
using namespace std;
int main()
{
  int i,sum=0;
  cout<<"the natural numbers are"<<endl;

  for(i=1;i<=10;i++){
    cout<<i<<endl;
    sum=sum+i;
  }
  cout<<sum;
}
