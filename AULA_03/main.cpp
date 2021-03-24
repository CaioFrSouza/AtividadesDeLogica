#include <iostream>
#include <string>
using namespace std;

float nota, i, media;

void readAndWriteLine(string text) {
	cout<< "Digite a " << text << " nota do aluno: ";
	cin >> i;
	nota= nota+i;
}

int main(int argc, char** argv) {
	readAndWriteLine("primeira");
	readAndWriteLine("segunda");
	readAndWriteLine("terceira");
	readAndWriteLine("quarta");
	media = nota/4;
	cout << "A media do aluno sera: " << media << "\n";
	system("pause");
	return 0;
}
