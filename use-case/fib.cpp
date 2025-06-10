#include <iostream>

int main() {
  std::cout << "Enter two natural values: ";
  std::cout.flush();

  long long n, m;
  std::cin >> n >> m;

  std::cout << "Fibonacci sequence (first " << n << " values modulo " << m
            << "):\n";
  long long bef = 0, aft = 1;
  for (int i = 0; i < n; i++) {
    std::cout << "\tfib[" << i << "] = " << bef << '\n';
    std::swap(bef, aft);
    aft = (aft + bef) % m;
  }

  return 0;
}
