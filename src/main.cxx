#include "headers/common.hxx"

using namespace std;

void greet(string yes,string answer){
	cout << "Hello, " << yes << endl << "brub" << endl << "say your name:" << endl;
	getline(cin,answer);
	cout << "Hello, " << answer << endl;
}

int main(int, char**) {
	string yes = "World";
	string answer;

	greet(yes,answer);

	return 0;
}
