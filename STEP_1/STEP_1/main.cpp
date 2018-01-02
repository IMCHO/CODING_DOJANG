#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int sum = 0;
	int result;
	cout << "Input : ";
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		sum += (str.at(i) - '0');
	}

	result = sum + stoi(str);

	cout << result << endl;

	return 0;
}