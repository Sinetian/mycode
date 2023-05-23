#include <iostream>
#include <algorithm>
using namespace std;
string x;
long long cnt , sum , cur;
int main()
{
	cin >> x;
	for(int i = 0; i < x.size(); i++)
	{
		if(x[i] == '(')
		{
			while(x[cur] == ')')
			{
				cur++;
				cnt++;
			}
		}
		sum += (cnt + 1) * (cnt + 1);
		cnt = 0;
		cur = 0;
	}
	cout << sum << endl;
 	return 0;
}