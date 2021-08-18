#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;
namespace zyy01
{



	void Test()
	{
		vector<int>v{ 1,2,3,2,5,2,8,2,4,3 };
		const auto new_end(remove(begin(v), end(v), 2));
		
		v.erase(new_end, end(v));
		for (auto i : v)
		{
			cout << i << ",";
		}
		cout << '\n';
		
	}
}
int main()
{
	zyy01::Test();
	return 0;
}