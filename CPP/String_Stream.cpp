#include <sstream>
#include <vector>
//String Stream

#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
  stringstream s(str);
  vector<int> result;
  char ch;
  int tmp = -1;
  while (s >> tmp) 
  {
    result.push_back(tmp);
    s >> ch;
  }
  return result;
}
int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

