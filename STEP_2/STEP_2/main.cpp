#include <iostream>
using namespace std;

void SpiralM(int * _matrix[],int _row,int _column);

int main()
{
	int ** matrix;
	int row, column;
	cin >> row >> column;
	
	matrix = new int*[row];
	for (int i = 0; i < row; i++) 
		matrix[i] = new int[column];
	
	for (int i = 0; i < row; i++) 
		for (int j = 0; j < column; j++) matrix[i][j] = -1;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	

	return 0;
}

void SpiralM(int * _matrix[], int _row, int _column)
{
	int num = 0;
	int ctemp, rtemp = 0;
	if (_row % 2 == 0)
	{
		int count = _row / 2;
		while (count != 0)
		{
			
		}
	}
}