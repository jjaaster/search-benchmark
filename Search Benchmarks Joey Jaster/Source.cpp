#include<iomanip>
#include<iostream>

using namespace std;

int iterations = 0;

int LinearSearch(const int arr[], int size, int value)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < size && !found)
	{
		if (arr[index] == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	iterations = index;
	return position;
}

	int BinarySearch(const int array[], int size, int value)
	{

		int first = 0,
			last = size - 1,
			middle,
			position = -1;
		bool found = false;

		while (!found && first <= last)
		{
				iterations++;
				middle = (first + last) / 2;

				if (array[middle] == value)
				{
					found = true;
					position = middle;

				}
				else if (array[middle] > value)
				
					last = middle - 1;
				
				else
				first = middle + 1;
			
		}

		return position;
	}
	
	void main()
	{
		const int SIZE = 20;
		int find = 64;
		int data[SIZE] = { 2, 4, 7, 11, 12, 12, 14, 19, 26, 29, 35, 41, 41, 47, 49, 64, 68, 84, 94, 98 };
		iterations = 0;
		cout << "Linear search....." << endl;
		int ls = LinearSearch(data, SIZE, find);
		if (ls < 0)
		{
			cout << "element was not found." << endl;
		}
		else
		{
			cout << "Element found at position " << ls << endl;
		}
		cout << "Linear search took " << iterations << " iterations." << endl;
		iterations = 0;
		int bs = BinarySearch(data, SIZE, find);
		if (bs < 0) 
		{
			cout << "element was not found." << endl;
		}
		else
		{
			cout << "Element found at position " << bs << endl;
		}
		cout << "Binary search took " << iterations << " iterations." << endl;
	}
	



