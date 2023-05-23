#include <bits/stdc++.h>
using namespace std;
queue<long long> a;
int main()
{
	int q , op , x , c , sum = 0;
	for(int i = 1; i <= q; i++)
	{
		cin >> op;
		switch(op)
		{
			case 1:
			{
				cin >> x >> c;
				for(int j = 1; j <= c; j++) a.push(x);
			}
			case 2:
			{
				cin >> c;
				for(int j = 1; j <= c; j++)
				{
					sum += a.front();
					a.pop();
				}
				cout << sum << endl;
			}
		}
	}
	return 0;
}