#include<iostream>

using namespace std;

#define ll long long

int main() {
	ll n, m,a;
	cin >> n >> m >> a;
	cout << ((n+a-1ll)/a)*((m+a-1ll)/a) << "\n";
}
