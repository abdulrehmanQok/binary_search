#include<iostream>
using namespace std;
bool binary_search(int* arr, int low, int high, int key) {
	int mid = (low + high) / 2;
	while (key != arr[mid] && low <= high) {
		if (key > arr[mid]) {
			low = mid + 1;
		}
		else if( key < mid){
			high = mid - 1;
		}
		mid = (low + high) / 2;
	}
	if (low <= high) {
		return true;
	}
	else {
		return false;
	}
	
}
int main() {
	int* arr = nullptr;
	int size;
	cout << " Enter the size of array " << endl;
	cin >> size;
	arr = new int[size];
	cout << " Enter the value for array : " << endl;
	cout << "*********** For Binary_search array is sorting cumpolsory ********" << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	cout << " Your sorted value is ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	int key;
	cout << " Enter the key which you want to search " << endl;
	cin >> key;
	if (binary_search(arr,0,size-1,key)){
		cout << " key found " << endl;
	}
	else {
		cout << " key not found " << endl;
	}
	cout << endl;
	delete[]arr;
	system("pause");
	return 0;
}