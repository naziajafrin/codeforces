#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, max = 0; cin >> n;

  for(int i = 0; i < n; i++){
    int q; cin >> q;

    if(q > max) max = q;
  }

  cout << max << endl;
  return 0;
}