#include<iostream>
using namespace std;
int main(){
  char o;
  int a,b;
  cout<<"enter a operator(+,-,*,/) :";
  cin>>o;

  cout<<"enter two numbers :"<<endl;
  cin>>a>>b;

  switch(o){
    case '+':
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
    break;

    case '-':
    cout<<a<<"-"<<b<<"="<<a-b<<endl;
    break;

    case '*':
    cout<<a<<"*"<<b<<"="<<a*b<<endl;
    break;

    case '/':
    cout<<a<<"/>"<<b<<"="<<a/b<<endl;
    break;


  }
  return 0;
}
