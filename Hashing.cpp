#include <iostream>
using namespace std;
class manipulation {
public:
	manipulation() {

	}
	void getdata(int arr[], int size) {
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		hash_function(arr,size);
	}
	void hash_function(int arr[],int total) {
		int table_size;
		cout << "Please enter the table size : ";
		cin >> table_size;
		int* arr1 = new int[total];
		for (int i = 0; i < table_size; i++) {
			arr1[i] = NULL;
		}
		linear(arr, arr1, table_size, total);
	}
	void linear(int arr[],int arr1[], int table_size, int total) {

		for (int i = 0; i < total; i++)
		{
			int stop = 1;
			for (int j = 0; j <= stop; j++)
			{
				int index = (arr[i] + j) % table_size;
				if (arr1[index] == NULL) {
					arr[index] = arr[i];
				}
				else {
					stop = stop + 1;
				}
			}
		}
		for (int k = 0; k < table_size; k++)
		{
			cout << arr1[k] << " ";
		}

	}
};

int main() {
	int arr_size;
	cout << "Enter the size of table : ";
	cin >> arr_size;
	int* arr = new int[arr_size];
	manipulation obj;
	obj.getdata(arr, arr_size);

	return 0;
}
