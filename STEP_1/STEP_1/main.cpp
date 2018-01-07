#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void GeneratorFunc(string str);

vector<int> temp;
int main()
{
	GeneratorFunc("1");
	
	for (int i = 0; i < temp.size(); i++)
	{
		cout << temp[i] << " ";
	}
	
	return 0;
}

void GeneratorFunc(string str_num)
{
	int sum = 0;
	int result;

	stringstream sstr;
	for (int i = 0; i < str_num.size(); i++)
	{
		sum += (str_num.at(i) - '0');
	}

	result = sum + stoi(str_num);
	if (result < 5000)
	{
		temp.push_back(result);
		sstr << result;
		GeneratorFunc(sstr.str());
	}

}