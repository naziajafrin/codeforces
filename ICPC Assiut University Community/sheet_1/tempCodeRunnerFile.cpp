#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  long long int sum = 0;
  cin >> n;

  for(int i = 1; i <= n; i++){
    sum = sum + i;
  }
  cout << sum;
  return 0;
}