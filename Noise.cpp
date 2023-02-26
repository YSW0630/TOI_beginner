#include <algorithm>
#include <iostream>
#include <string>

using namespace std;
bool palindrome(string foo, char bar) {
  foo.erase(std::remove(foo.begin(), foo.end(), bar), foo.end());
  return equal(foo.begin(), foo.begin() + foo.length() / 2, foo.rbegin());
}

int main() {
  string test_string;
  char remove_char;

  cin >> test_string >> remove_char;
  cout << ((palindrome(test_string, remove_char)) ? "Yes" : "No");
}
