#include <iostream>
#include <string>
using namespace std;
struct Points
{
	int x1;
	string xs;
};
int main(){

	int n;

	cin >> n;

	int**B1 = new int*[n + 1];
	for (int i = 0; i < n + 1; i++)
		B1[i] = new int[n+1];

	int**B2 = new int*[n + 1];
	for (int i = 0; i < n + 1; i++)
		B2[i] = new int[n + 1];

	for (int i = 0; i < n + 1; i++)
		for (int j = 0; j < n + 1; j++){
			B1[i][j] = 0;
			B2[i][j] = 0;
		}

	string* list = new string[n + 1];
	int max = 0;
	for (int i = 0; i < n; i++){
		int a, b; cin >> a >> b;
		B1[a][b]++;
		if (a!=b)
		B1[b][a]++;

		B2[i+1][b]++;
		if (a != b)
		B2[i+1][a]++;

		if (a>max) max = a;
		if (b>max) max = b;
		list[a] = list[a] + (char)(b+48) + ", ";
		list[b] = list[b] + (char)(a+48) + ", ";
	}
	
	cout << endl << endl;
	for (int i = 1; i < max; i++){
		cout <<i<<" - "<< list[i]<<endl;
	}
	cout << endl << endl;
	for (int i = 1; i < max+1; i++){
		for (int j = 1; j < max+1; j++)
			cout << B1[i][j] << " ";
		cout << endl;
	}
	cout << endl << endl;
	for (int i = 1; i < max+1; i++){
		for (int j = 1; j < n+1; j++)
			cout << B2[j][i] << " ";
		cout << endl;
	}

	return 0;
}