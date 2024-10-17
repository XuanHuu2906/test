#include<bits/stdc++.h>
using namespace std;
int main(){
	int check;
	cin >> check;
	while(check--)
	{
		cin >> n;
		vector<int> arr(n);
		int tong = 0;
		for(int i = 0; i < n;i++)
		{
			cin >> arr[i];
			tong += arr[i];
		}
        int tam = arr[0];
		for(int i = 0; i < n-1;i++)
		{
			for(int j = i + 1;j < n;j++)
			{
				tam += arr[j];
				if(tam > tong)
				{
					tong = tam;
				}
			}
            tam = 0;
			
		}
		cout << tong << endl;
	}
	return 0;
}