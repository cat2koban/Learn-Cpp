#include <bits/stdc++.h>
using namespace std;

int main(){
  string num;
  int ans;
  cin >> num;
  if (num.at(0) == '1') ans++;
  if (num.at(1) == '1') ans++;
  if (num.at(2) == '1') ans++;
  cout << ans << endl;
}
