#include<bits/stdc++.h>
using namespace std;

int main(){
  char a; cin >> a;
  int ascii = a;

  if(ascii >= 65 && ascii <= 90){
    char ch = ascii + 32;
    cout << ch << endl;
  }
  else if (ascii >= 97 && ascii <= 122){
    char ch = ascii - 32;
    cout << ch << endl;
  } 
  return 0;
}