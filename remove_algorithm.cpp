#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Preq(int n)
{
	return n < 40;
}
int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	unique(v.begin(),v.end());
	cout<<"unique 비정상  호출!!"<<endl;
	for(int i = 0; i < v.size(); i++)
		cout<<v[i]<<" ";
	cout<<endl;

	sort(v.begin(),v.end());

	vector<int>::iterator unique_output;
	unique_output = unique(v.begin(),v.end());
	cout<<"unique 정상 호출!!"<<endl;
	for(vector<int>::iterator iter = v.begin(); iter < unique_output; ++iter)
		cout<<*iter<<" ";
	cout<<endl;

	vector<int>::iterator it2;
	cout<<"Partition사용 예제"<<endl;
	it2 = partition(v.begin(),v.end(),Preq);
	for(vector<int>::iterator iter = v.begin(); iter < it2; ++iter)
		cout<<*iter<<" ";
	cout<<endl;

	random_shuffle(v.begin(),v.end());
	cout<<"1번째 랜덤 셔플!!"<<endl;
	for(int i = 0; i  < v.size(); i++)
		cout<<v[i]<<" ";
	cout<<endl;

	random_shuffle(v.begin(),v.end());
	cout<<"2번째 랜덤 셔플!!"<<endl;
	for(int i = 0; i  < v.size(); i++)
		cout<<v[i]<<" ";
	cout<<endl;

	vector<int> v2;
	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(30);
	v2.push_back(40);
	v2.push_back(50);
	v2.push_back(60);

	rotate(v2.begin(),v2.begin()+3,v2.end());
	cout<<"rotate 3번 옆으로 shift 회전시키기"<<endl;
	for(int i = 0; i  < v2.size(); i++)
		cout<<v2[i]<<" ";
	cout<<endl;

	return 0;
}
