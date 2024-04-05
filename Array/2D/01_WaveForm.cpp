#include <bits/stdc++.h>
using namespace std;

void wavePrint(vector<vector<int>> &a, int row, int col)
{
	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i < row; i++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int row, col;
	cout << "row size: ";
	cin >> row;
	cout << "col size: ";
	cin >> col;

	vector<vector<int>> a(row, vector<int>(col));
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> a[i][j];
		}
	}

	wavePrint(a, row, col);

	return 0;
}