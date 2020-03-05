#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"enter the number of rows : ";
  cin>>c;
  for(a=1;a<=c;a++){
    for(b=1;b<=a;b++){
      cout<<"*";
    }

    cout<<"\n";
  }
}
