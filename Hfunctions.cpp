//https://www.hackerrank.com/challenges/c-tutorial-functions/problem?h_r=next-challenge&h_v=zen
#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
 {
    cout<<a<<b<<c<<d;

    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    


    return 0;
}
