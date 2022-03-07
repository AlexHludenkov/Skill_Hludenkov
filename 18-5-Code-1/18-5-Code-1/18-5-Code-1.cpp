#include <iostream>
#include <vector>

using namespace std;

void swapvec(vector  <int> *vect_, int *arr) {
	int i = vect_-> back();
	cout << i << endl;
	cout << *arr << endl;
	cout <<  *(++ arr) << endl;
	cout << *(++arr) << endl;
}

int main()
{
	vector <int> vect = { 1, 2, 3, 4, 5 };
	int arr[] = { 6, 15, 8, 9, 10 };
	swapvec(&vect, arr);
}
