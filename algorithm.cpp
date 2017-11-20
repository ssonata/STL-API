#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	vector<int> value;
	value.push_back(10);
	value.push_back(20);
	value.push_back(30);
	value.push_back(40);

	vector<int> value2;
	value2.push_back(20);
	value2.push_back(30);

	cout<< includes(value.begin(),value.end(),value2.begin(),value2.end())<<endl;

	if(binary_search(value.begin(),value.end(),20))
		cout<<"BINGO!"<<endl;

	vector<int>output(6); //초기값 지정해줘야 한다.
	set_union(value.begin(),value.end(),value2.begin(),value2.end(),output.begin());
	copy(output.begin(),output.end(),ostream_iterator<int>(cout, " "));
	cout<<endl;

	output.assign(6,0); //초기값 지정해줘야 한다.
	set_intersection(value.begin(),value.end(),value2.begin(),value2.end(),output.begin());
	copy(output.begin(),output.end(),ostream_iterator<int>(cout, " "));
	cout<<endl;

	return 0;
}
