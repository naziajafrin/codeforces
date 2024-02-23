#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;

  int reverse = 0; int m = n;
  while(n > 0){
    int lastDigit = n % 10;
    reverse = reverse * 10 + lastDigit;
    n = n / 10;
  }

  if(reverse == m){
    cout << reverse << endl;
    cout << "YES" << endl;
  }
  else {
    cout << reverse << endl;
    cout << "NO" << endl;
  }

  return 0;
}