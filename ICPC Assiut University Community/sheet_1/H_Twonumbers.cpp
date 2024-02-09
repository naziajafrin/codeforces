#include<bits/stdc++.h>
using namespace std;

int main(){
  float a,b; cin >> a >> b;
  float res = a / b;

  cout << "floor " << a << " / " << b << " = " << floor(res) << endl;
  cout << "ceil " << a << " / " << b << " = " << ceil(res) << endl;
  cout << "round " << a << " / " << b << " = " << round(res) << endl;
  return 0;
}