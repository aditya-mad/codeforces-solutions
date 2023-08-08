#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int size;
	string input;
	cin >> size >> input;

	stack<char> memo;

	for (auto x : input)
	{
		while (!memo.empty() && memo.top() == x)
			memo.pop();
		memo.push(x);
	}

	cout << size - memo.size();

	return 0;
}
