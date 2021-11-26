#include <algorithm>
#include <string>
#include <stack>
#include <iostream>

using namespace std;

bool solve(string s) {
    stack<string> s;
    auto it = unique(s.begin(), s.end());

    for (it=s.begin(); it!=s.end(); ++it)

    return true;
}

int main() {
    solve("abcd");
}
