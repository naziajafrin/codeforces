#include<bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, d;
  cin >> a>> b>> c>> d;
  long long int diff = (long long)a * b - (long long)c * d;
  cout << "Difference" << " " << "=" << " " << diff << endl;
  return 0;
}