#include<iostream>
using namespace std;
int main()
{
  int amt,discount;
  cout<<"enter amount";
  cin>>amt;
  if(amt>2000)
  discount=15;
  else if (amt>15000)
    discount=10;

  else if (amt>10000)
  discount=5;
  else
  discount=0;
  cout<<"you will get"<<discount<<"%discount";
 return 0;

}
