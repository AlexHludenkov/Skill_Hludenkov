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


	*vect = 21;
	*arr = 22;
	cout <<  *(++ arr) << endl;
	cout << *(++arr) << endl;
	
}

int main()
{
	vector <int> vect = { 1, 2, 3, 4, 5 };



	int *ptr = vect.data();
	
	swapvec(ptr, arr);
	cout << vect[0] << endl;
	cout << arr[0] << endl;
}
