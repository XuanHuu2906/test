#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin >> s;
	char tam = s[s.length() - 1];
	string result = "";
	result += tam;
	for(int i = s.length()- 2;i >= 0 ;i--){
		if(s[i] >= tam){
			tam = s[i];
			result = s[i] + result;
		}
	}
	cout << result;
	return 0;
}
