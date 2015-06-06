#include <iostream>
using namespace std;

void Promt_size(int *size) {
	cout << "Enter size: ";
	cin >> *size;
}

int *allocateArray(int size){
	int *list = new int[size];
	for (int i = 0; i < size; i++){
		list[i] = 50;
	}
	return list;
}

void populate_numbers(int *list, int size){
	for (int *curr = list; curr < list + size; curr++) {
		cout << "Enter number: ";
		cin >> *curr;
	}
}

int *doubleCapacity(const int *list, int size) {
	int new_size = size * 2;
	int *new_list = new int[new_size];

	for (int *curr = list; )

	return new_list;
}

int main() {
	int nums;

	Promt_size(&nums);
	int *list = allocateArray(nums);
	populate_numbers(list, nums);
	doubleCapacity(list, nums);





}
