#include<bits/stdc++.h>
using namespace std;

int main(){
  int x, y;
  cin >> x >> y;
  int sum = x + y;
  long long int multi =(long long) x * y;
  int subs = x - y;

  cout << x << " " << '+' <<" " << y << " " << "=" << " " << sum << endl;
  cout << x << " " << '*' <<" " << y << " " << "=" << " " << multi << endl;
  cout << x << " " << '-' <<" " << y << " " << "=" << " " << subs << endl;
  return 0;
}