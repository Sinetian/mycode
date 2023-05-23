#include <iostream>
#include <algorithm>
using namespace std;
int a , b , p , q;
bool plan[55] , flag;
void dfs(int step , int sum)
{
	if(sum > b) return;
	if(sum == b)
	{
		flag = true;
		return;
	}
	plan[step] = 0;
	dfs(step + 1 , sum * p);
	plan[step] = 1;
	dfs(step + 1 , sum + q);
}
int main()
{
	cin >> a >> b >> p >> q;
	dfs(1 , a);
	return 0;
}