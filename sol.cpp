#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n;
	cin >> n;
	if(n % 8 == 1) {
		cout << n + 3 << "LB";
	}
	else if(n % 8 == 2) {
		cout << n + 3 << "MB";
	}
	else if(n % 8 == 3) {
		cout << n + 3 << "UB";
	}
	else if(n % 8 == 4) {
		cout << n - 3 << "LB";
	}
	else if(n % 8 == 5) {
		cout << n - 3 << "MB";
	}
	else if(n % 8 == 6) {
		cout << n - 3 << "UB";
	}
	else if(n % 8 == 7) {
		cout << n + 1 << "SU";
	}
	else {
		cout << n - 1 << "SL";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	return 0;
}
