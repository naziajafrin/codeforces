#include<bits/stdc++.h>
using namespace std;

int main(){
  int a , b;
  char s;
  cin >> a >> s >> b;

  if(s == '+'){
    int res = a + b; cout << res << endl;
  }
  else if(s == '-'){
    int res = a - b; cout << res << endl;
  }
  else if(s == '*'){
    int res = a * b; cout << res << endl;
  }
  else if(s == '/'){
    int res = a / b; cout << res << endl;
  }
  return 0;
}