#include<bits/stdc++.h>
using namespace std;
int main(){
	string n;
	cin >>n;
	int a = n.length();
	while(n.length()>1)
	{
		
	int left = 0;
	int right = 0;
	int mid=n.length()/2;
	for (int i =0;i < mid;i++)
	{
		left = left * 10 + (n[i]-'0');
	}
		for (int i =mid;i < n.length();i++)
	{
		right = right * 10 + (n[i]-'0');
	}
	int tong = left + right;
	cout << tong<<endl;
	        n = "";
        while (tong > 0) {
            n = char(tong % 10 + '0') + n; 
            tong /= 10;
        }
	}
	return 0;
}