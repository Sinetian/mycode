#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
stack<int> s;
int main()
{
	int n , op , x , maxn = 0;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> op;
		if(op == 0)
		{
			cin >> x;
			s.push(x);
			maxn = max(maxn , x);
		}
		else if(op == 1) s.pop();
		else if(op == 2) cout << maxn << endl;
	}
	return 0;
}