#include <bits/stdc++.h>
using namespace std;

#define DEBUG 0 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main() {
	string s;
	cin >> s;
	
	int sum=0;	
	for(int i=1; i<s.size() && sum < 6; i++) {
		if (s[i-1] == s[i]) sum++;
		else sum=0;	
	}
	if(sum>=6) printf("YES\n");
	else printf("NO\n");
}
