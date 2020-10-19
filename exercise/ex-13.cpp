#include<bits/stdc++.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
  int sum = 0;
  int n;
  cin >> n;

  vector<int> points(n);

  for (int i = 0; i < n; i++) {
    cin >> points.at(i);
    sum += points.at(i);
  }

  int avg = abs(sum / n);

  for (int i = 0; i < points.size(); i++) {
    cout << abs(points.at(i) - avg) << endl;
  }
}
