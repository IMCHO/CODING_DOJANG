#include <iostream>
#include <iomanip>
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

	SpiralM(matrix, row, column);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << setw(3);
			cout<< matrix[i][j] << "  ";
		}
		cout << endl;
	}
	

	return 0;
}

void SpiralM(int * _matrix[], int _row, int _column)
{
	int num = 0;
	int temp = 0;
	int differ = 1;
	int final_num = _row * 4 - 5;
	int ctemp = 0 , rtemp = 0;
	int count;

	if (_row % 2 == 0) count = _row / 2;                      // if n is even, n & n-1 rotate n/2
	else count = _row / 2 + 1;

	while (count != 0)
	{
		_matrix[rtemp][ctemp] = num;
		if (count != 1) _matrix[rtemp + 1][ctemp] = final_num;       // forbid initialize final final_num in odd
		temp = num;
		num = final_num + 1;
		final_num = final_num - temp - 8 + num;

		for (int i = ctemp+1; i <= _column - differ; i++)    // increase column
		{
			_matrix[rtemp][i] = ++temp;
		}

		int ctemp2 = _column - differ;                        // column fix
		for (int i = rtemp+1; i <= _row-differ; i++)         // increase row
		{
			_matrix[i][ctemp2] = ++temp;
		}

		int rtemp2 = _row - differ;                       // row fix
		for (int i = ctemp2 - 1; i >= _column - ctemp2 - 1; i--) // decrease column
		{
			_matrix[rtemp2][i] = ++temp;
		}
			
		int ctemp3 = _column - ctemp2 - 1;                       // column fix
		for (int i = rtemp2 - 1; i >= _row - rtemp2; i--)       // decrease row
		{
			_matrix[i][ctemp3] = ++temp;
		}
		differ += 1;
		ctemp++;
		rtemp++;
		count--;
	}
}