#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>
using namespace std;

int main()
{
    vector<int> value;
	vector<int> output;
	value.push_back(10);
	value.push_back(20);
	value.push_back(30);
	cout<< accumulate(value.begin(),value.end(),1,multiplies<int>())<<endl;
	cout<< accumulate(value.begin(),value.end(),0,plus<int>())<<endl;

	adjacent_difference(value.begin(),value.end(),inserter<vector<int>>(output,output.begin()));
	for(int i = 0; i < output.size(); i++)
		cout<<output[i]<<" ";
	cout<<endl;
	copy(output.begin(),output.end(), ostream_iterator<int>(cout," "));
	cout<<endl;
	copy(value.begin(),value.end(), ostream_iterator<int>(cout," "));
	cout<<endl;

	vector<int>out;
	partial_sum(value.begin(),value.end(), inserter<vector<int>>(out,out.begin()), multiplies<int>());
	copy(out.begin(),out.end(), ostream_iterator<int>(cout," "));
	cout<<endl;
    return 0;
}
