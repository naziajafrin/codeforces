#include<bits/stdc++.h>
using namespace std;


int main(){
  int n; cin >> n;

  bool flag = 0;

  for(int i = 2; i < n; i++){
    if(n % i == 0){
      flag = 1;
      break;
    }
  }

  if(flag == 0) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}