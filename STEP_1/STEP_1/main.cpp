#include <iostream>
#include <string>
#include <sstream>
#include <list>

#define MAXNUM 3000

using namespace std;

void GeneratorFunc(string str);

list<int> temp;

int main()
{
	int final_result = 0;

	for (int i = 1; i < MAXNUM; i++)
	{
		temp.push_back(i);
	}
	list<int>::iterator iterPos = temp.begin();
	list<int>::iterator iterEnd = temp.end();

	for (; iterPos != iterEnd; iterPos++)   
	{
		stringstream sstr;
		sstr << *iterPos;
		GeneratorFunc(sstr.str());
		iterEnd = temp.end();                     // change end_Pos
	}

	iterPos = temp.begin();                       // initial begin_Pos
	for (; iterPos != iterEnd; iterPos++)
	{
		final_result += *iterPos;
	}

	cout << final_result << endl;
	return 0;
}

void GeneratorFunc(string str_num)
{
	int sum = 0;
	int result;

	for (int i = 0; i < str_num.size(); i++)     // each sum
	{
		sum += (str_num.at(i) - '0');
	}
	result = sum + stoi(str_num);                // final data

	if (result < MAXNUM)
	{
		stringstream sstr;
		temp.remove(result);
		sstr << result;
		GeneratorFunc(sstr.str());               // change to str and recursive
	}
}