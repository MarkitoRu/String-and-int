#include <iostream>
#include <string>
using namespace std;

int aprendiendo(string n,int d){
	
	int res;
	long long comb;
	comb = stoi(n);
	
	res = comb % d;
	
	return res;
}
int main() {
	string n;
	int d;
	cin>>n>>d;
	cout<<aprendiendo(n,d)<<endl;
	
	return 0;
}
