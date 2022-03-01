#include <iostream>
using namespace std;

int ways(int a, int jump = 3) {
	int count = 0;
	int step = 1;
	if (a == 0) return 1;
	while (step != jump) {
		if (step <= a) {
			count += ways(a - step);
		}
		step++;
	}
	return count;
}

int main() {
	int steps, jump;
	cout << "Enter number of steps: ";
	cin >> steps;
	cout << "Enter max jump: ";
	cin >> jump;


	cout << ways(steps, jump);
	return 0;
}