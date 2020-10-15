#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int size = S.size();
  int one_num   = 1;
  int plus_num  = 0;
  int minus_num = 0;

  for (int i = 0; i < size; i++){
    if (S.at(i) == '+') {
      plus_num++;
    } else if (S.at(i) == '-') {
      minus_num++;
    } else {
      continue;
    }
  }

  cout << one_num + plus_num - minus_num << endl;
}
