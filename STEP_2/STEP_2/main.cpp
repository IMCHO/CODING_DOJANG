#include <iostream>
using namespace std;

int main()
{
	int ** matrix;
	int row, column;
	int rtemp = 0, ctemp = 0;
	int num = 0;
	cin >> row >> column;
	
	matrix = new int*[row];
	for (int i = 0; i < row; i++) 
		matrix[i] = new int[column];
	
	for (int i = 0; i < row; i++) 
		for (int j = 0; j < column; j++) matrix[i][j] = { -1, };

	//while (ctemp<column)
	//{
	//	matrix[rtemp][ctemp] = num;
	//	ctemp++;
	//	num++;
	//	if (ctemp == column)
	//	{
	//		while (rtemp < row)
	//		{
	//			matrix[rtemp][ctemp] = num;
	//			rtemp++;
	//			num++;
	//			if (rtemp == row)
	//			{

	//			}
	//		}
	//	}
	//}


	return 0;
}