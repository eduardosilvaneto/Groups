#include <iostream>
#include <fstream>

using namespace std;

int main () {

	ofstream out ("test");
	if (!out) {
		cout << "Nao pode abrir o arquivo.\n";
		return 1;
	}

	out << 10 << "\n" << 123.3 << "\n";
	out << "Este is um pequeno texto do arquivo.\n";
	out.close();
	return 0;
}

