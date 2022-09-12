#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;
	while (0 < (n--)) {
		int a, b;
		cin >> a >> b;
		if ((a <= 1 && b <= 2) || (a <= 2 && b <= 1)) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}

	return 0;
}