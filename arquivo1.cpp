#include <iostream>
#include <fstream>

using namespace std;

int main () {


	int i;
	float f;
	char str[80];

	ifstream in("test", ios::in | ios::binary);
	if(!in){
		cout << "Nao pode abrir o arquivo.\n";
		return 1;
	}

	in >> i;
	in >> f;
	in >> str;

	cout << i << " " << f << " " << "\n";
	cout << str << "\n";
	in.close();

	return 0;
}

