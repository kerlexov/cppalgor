#include <iostream>
#include <algorithm>

using namespace std;
int* ptojed=nullptr;
int* poljeklon(int polje[],int n) {
	int* poljeklon = new int[n];
	for (int i = 0; i < n; i++)
	{
		poljeklon[i] = count(polje, polje + 7, polje[i]);
	}
	return poljeklon;
}

int* brojjed(int polje[]) {
	int* broj = new int;
		*broj = count(polje, polje + 7, 1);
	return broj;
}

int* vrati(int polje[], int n) {
	
	int index = 0;

	int* klon = poljeklon(polje, n);
	int* jed = brojjed(klon);
	ptojed = jed;
	int* novo = new int[*jed];

	for (int i = 0; i < n; i++)
	{
		if (klon[i] == 1) {
			novo[index++] = polje[i];
			swap(polje[i], klon[i]);
		}
	}
	delete[] klon;
	return novo;
}

int main() {
	int n = 7;
	int polje[7] = {1,2,3,1,5,5,7};

	
	int* novo = vrati(polje, n);
	for (int i = 0; i < *ptojed; i++)
	{
		cout << novo[i] << endl;
	}
	delete[] novo;
	delete ptojed;

	return 0;
}
