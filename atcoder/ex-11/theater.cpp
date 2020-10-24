#include <bits/stdc++.h>
using namespace std;
int n;
int sum=0;

int main() {
  cin >> n;
  for (int i=0; i<n; i++) {
    int l,r;
    cin >> l >> r;
    sum += (r-l)+1;
  }
  cout << sum << endl;
}
