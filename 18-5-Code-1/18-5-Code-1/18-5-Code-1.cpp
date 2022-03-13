#include <iostream>
#include <vector>
using namespace std;

void swapvec(int *vect, int *arr) {
	int temp;
	for (int i = 0; i < 6; i++) {
		temp = *vect;
		*vect = *arr;
		*arr = temp;
		++arr;
		++vect;
	}
}

int main()
{
	int arr[6] = { -1, -2, -3, -4, -5, -6 };
	vector <int> vect = { 1, 2, 3, 4, 5, 6 };

	cout << "Array before swap: " << endl;
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << endl;
	}

	cout << "Vector before swap: " << endl;
	for (int i = 0; i < 6; i++) {
		cout << vect[i] << endl;
	}
	
	int *ptr = vect.data();
	swapvec(ptr, arr);
	
	cout << " ---- Swapping -----" << endl;

	cout << "Array after swap: " << endl;
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << endl;
	}
	
	cout << "Vector after swap: " << endl;
	for (int i = 0; i < 6; i++) {
		cout << vect[i] << endl;
	}
	
	return 0;
}
