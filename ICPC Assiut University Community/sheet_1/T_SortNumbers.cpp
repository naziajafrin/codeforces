#include<bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c; cin >> a >> b >> c;
  
  if(a > b && a > c){
    if(b > c) cout << c;
    else cout << b;
  }
  else if (b > a && b > c){
    
  }
  
  cout << a << b << c << endl;
  
  return 0;
}