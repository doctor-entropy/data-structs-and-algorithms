#include <iostream>

int MaxDenom(int m) {
  if (m >= 10) {
    return 10;
  } else if (m >= 5) {
    return 5;
  } else {
    return 1;
  }
}

int get_change(int m) {
  //write your code here
  int n = 0;
  int q;
  int i;

  while (m != 0) {

    i = MaxDenom(m);
    q = m / i;
    
    n += q;
    m = m - q*i;
  }

  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
