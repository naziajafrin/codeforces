#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;

  int yr = n / 365; cout << yr << " years" << endl;
  float yr_mod = n % 365;
  int months = yr_mod / 30; cout << months << " months" << endl;
  float days = (int)yr_mod % 30; cout << days << " days" << endl;
  
  return 0;
}