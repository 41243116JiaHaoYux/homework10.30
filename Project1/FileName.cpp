#include <iostream>

using namespace std;

void print_arr(int* arr, int size) {
	for (int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << '\n';
}

void change_size(int*& arr, int size, int new_size) {
	int* new_arr = new int[new_size]; //adding a new arr(直接給予縮需的新陣列大小) 
	int* recycler = arr;			//adding a recycler
	copy(arr, arr + size, new_arr);	//copy arr on new arr

	// Increase every elements by size.
	for (int i = 0; i < new_size; i++) new_arr[i] += new_size;

	delete[] recycler;	//delete odd arr space
	arr = new_arr;
	delete[] new_arr;
}

int main() {
	int num;
	int* arr = new int[3];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;

	cout << "input number：";
	cin >> num;
	print_arr(arr, 3);	//print odd arr
	change_size(arr, 3, num);
	print_arr(arr, num);	//print new arr
	return 0;
}