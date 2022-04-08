#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <string>
#include <any>
#include <bitset>

using namespace std;

class Solution {
public:
  string sayHello(const string &name) {
    return "Hello " + name;
  }
};

int main(int argc, char** argv) {
  Solution s;

  cout << s.sayHello("World") << endl;

  return 0;
}