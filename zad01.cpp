#include <iostream>
#include <algorithm>

using namespace std;

void vrati(int polje[], int n) {
	int poljeklon[7];
	int index = 0;

	for (int i = 0; i < n; i++)
	{
		poljeklon[i] = count(polje, polje + 7, polje[i]);
	}

	int jed = count(poljeklon, poljeklon + 7, 1);
	int* novo = new int[jed];

	for (int i = 0; i < n; i++)
	{

		if (poljeklon[i] == 1) {
			novo[index++] = polje[i];
			swap(polje[i], poljeklon[i]);
		}
	}

	for (int i = 0; i < jed; i++)
	{
		cout << novo[i] << endl;
	}
	delete[] novo;
}

int main() {
	int n = 7;
	int polje[7] = {1,2,3,1,5,5,7};

	vrati(polje, n);
		
	return 0;
}
