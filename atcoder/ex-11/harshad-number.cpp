#include <bits/stdc++.h>
using namespace std;
string n;
int sum;
int num;
int main()
{
  cin >> n;
  num = stoi(n);
  for (int i=0; i<n.length(); i++)
  {
    sum += (n.at(i) - '0');
  }
  if ((num%sum)==0){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
