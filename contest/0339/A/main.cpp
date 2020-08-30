#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

string func(int a) {return to_string(a) + '+';}


int main() {
    string s;
    cin >> s;
    vector<int> a;
    size_t found = -1; int x;
    do {
        x = stoi(s.substr(found+1, s.find('+', found+1)));
        a.push_back(x);
        found = s.find('+', found+1);
    } while (found != string::npos);
    sort(a.begin(), a.end());
    vector<string> b; b.resize(a.size());
    transform(a.begin(), a.end(), b.begin(), [](int x) -> string {return to_string(x) + '+';});
    b.back().pop_back();
    for (auto y : b) cout << y;
    cout << "\n";
}
