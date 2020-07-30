#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main() {
    int y;
    scanf("%d", &y);
    y++;
    string s = to_string(y);
    while (any_of(s.begin(), s.end(), [s](char c){return count(s.begin(), s.end(), c) > 1;})) {
        y++; s = to_string(y);
    }
    printf("%d\n", y);
}
