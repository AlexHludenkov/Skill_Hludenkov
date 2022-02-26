#include <iostream>
using namespace std;

int ways(int a) {
	int count = 0;
	int step = 1;
	if (a == 0) return 1;
	while (step != 4) {
		if (step <= a) {
			count += ways(a - step);
		}
		step++;
	}
	return count;
}

int main() {
	int steps;
	cout << "Enter number of steps: ";
	cin >> steps;
	cout << ways(steps);
	return 0;
}