#include <bits/stdc++.h>
using namespace std;
const string V = "aeiouy";
#define is_vowel(s, k) (V.find(s[k]) != -1)

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main() {
    int x;
    scanf("%d", &x);
    string s;
    cin >> s;
    int q = 0;
    while (1){
        q = s.find_first_of("aeiouy", q);
        if (q == -1) break;
        q++;
        while(q != -1 && is_vowel(s, q)) {
            s.erase(s.begin() + q);
        }
    }
    cout << s << endl;
}
