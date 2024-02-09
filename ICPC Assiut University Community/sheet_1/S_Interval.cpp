#include<bits/stdc++.h>
using namespace std;

int main(){
  float n; cin >> n;

  if(n >= 0 && 25 >= n) cout << "Interval [0,25]" << endl;
  else if(n > 25 && 50 >= n) cout << "Interval (25,50]" << endl;
  else if(n > 50 &&  75 >= n) cout << "Interval (50,75]" << endl;
  else if(n >75 && 100 >= n) cout << "Interval (75,100]" << endl;
  else cout << "Out of Intervals" << endl;
  return 0;
}