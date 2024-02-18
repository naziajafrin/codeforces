#include<bits/stdc++.h>
using namespace std;


long long int fact(long long int n){
  if(n == 0) return 1;

  long long int ans = fact(n - 1);
  return ans * n;
}

int main(){
  int n; cin >> n;
  
  while(n--){
    long long int x ; cin >> x;
    long long int result = fact(x);
    cout << result << endl;
  }
  

  return 0;
}