#include<iostream>
using namespace std;
int main()
{
  int a;
  cout << "enter a number:";
  cin >> a;
  if(a>0){
    cout << "it is a positive number" << '\n';
  }
  else if(a<0){
    cout << "it is a negative number" << '\n';
  }
  else{
    cout << "it is zero" << '\n';
  }
}
