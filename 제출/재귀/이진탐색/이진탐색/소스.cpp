#include<iostream>
#include<string>
using namespace std;


int BSearch(int arr[], int target, int startnum, int endnum)
{
	if (startnum <= endnum)
	{
		int mid = (startnum + endnum) / 2;

		if (arr[mid] == target)
			return mid;
		else if (arr[mid] > target)
			return BSearch(arr, target, startnum, mid - 1);
		else
			return BSearch(arr, target, mid + 1, endnum);
	}
	else
		return -1;
}

void main()
{
	int num;
	int size;
	int target;
	cout << "�迭�� ����� ���� ����� �Է��Ͻÿ� : ";
	cin >> num;

	cout << "�迭�� ũ�⸦ �Է��Ͻÿ� : ";
	cin >> size;

	int* Arr = new int[size];

	for (int i = 1; i <= size; i++)
		Arr[i] = num * i;

	cout << "ã����� ���ڸ� �Է��Ͻÿ� : ";
	cin >> target;

	num = BSearch(Arr, target, 0, size - 1);

	if (num != -1)
	{
		cout << "�ش� ���ڴ� �迭�� " << num << "��° �����Դϴ�." << endl;
	}
	else
		cout << "�ش� ���ڸ� ã�� �� �����ϴ�." << endl;
}