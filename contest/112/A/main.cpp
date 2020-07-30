#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main() {
    string a,b;
    cin >> a;
    cin >> b;
    transform(a.begin(), a.end(), a.begin(),[](unsigned char c){ return ::tolower(c); });
    transform(b.begin(), b.end(), b.begin(),[](unsigned char c){ return ::tolower(c); });
    if (a.compare(b) < 0) printf("%d\n", -1);
    else if (a.compare(b) == 0) printf("%d\n", 0);
    else printf("%d\n", 1);
}
