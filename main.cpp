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
#include <string_view>
#include <any>
#include <bitset>

using namespace std;

class Solution {

private:
  string _generateHello(const string& name) {
    return "Hello " + name;
  }

public:
  string sayHello(const string& name) {
    return _generateHello(name);
  }

};

int main(int argc, char** argv) {
  Solution s;

  cout << s.sayHello("World") << endl;

  return 0;
}