
#include <iostream>
#include <vector>

using namespace std;

void swapvec(vector  <int> *vect, int *arr) {
	cout << vect;
	cout << arr;
}

int main()
{
	vector <int> vect = { 1, 2, 3, 4, 5 };
	int arr[] = { 6, 7, 8, 9, 10 };
	swapvec(&vect, arr);



}
