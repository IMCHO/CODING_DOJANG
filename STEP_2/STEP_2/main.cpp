#include <iostream>
using namespace std;

bool CheckMatrix(int * _matrix[],int _row,int _column);

int main()
{
	int ** matrix;
	int row, column;
	int rtemp = 0, ctemp = 0;
	int num = 0;
	int level = 1;
	cin >> row >> column;
	
	matrix = new int*[row];
	for (int i = 0; i < row; i++) 
		matrix[i] = new int[column];
	
	for (int i = 0; i < row; i++) 
		for (int j = 0; j < column; j++) matrix[i][j] = -1;

	while (!CheckMatrix(matrix, row, column))
	{
		if (level == 1)
		{
			while (rtemp < row && ctemp < column)
			{
				if (matrix[rtemp][ctemp] != -1)
				{
					ctemp++;
					continue;
				}
				else
				{
					matrix[rtemp][ctemp] = num;
					num++;
					ctemp++;
				}
			}
			level = 2;
			ctemp-=2;
		}
		else if (level == 2)
		{
			while (rtemp < row && ctemp < column)
			{
				if (matrix[rtemp][ctemp] != -1)
				{
					rtemp++;
					continue;
				}
				else
				{
					matrix[rtemp][ctemp] = num;
					num++;
					rtemp++;
				}
			}
			level = 3;
			rtemp-=2;
		}
		else if (level == 3)
		{
			while (rtemp >=0 && ctemp >= 0)
			{
				if (matrix[rtemp][ctemp] != -1)
				{
					ctemp--;
					continue;
				}
				else
				{
					matrix[rtemp][ctemp] = num;
					num++;
					ctemp--;
				}
			}
			level = 4;
			ctemp+=2;
		}
		else if (level == 4)
		{
			while (rtemp >= 0 && ctemp >= 0)
			{
				if (matrix[rtemp][ctemp] != -1)
				{
					rtemp--;
					continue;
				}
				else
				{
					matrix[rtemp][ctemp] = num;
					num++;
					rtemp--;
				}
			}
			level = 1;
			rtemp+=2;
		}
	}

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

bool CheckMatrix(int * _matrix[], int _row, int _column)
{
	for (int i = 0; i < _row; i++)
		for (int j = 0; j < _column; j++)
		{
			if (_matrix[i][j] == -1) return false;
		}
	return true;
}