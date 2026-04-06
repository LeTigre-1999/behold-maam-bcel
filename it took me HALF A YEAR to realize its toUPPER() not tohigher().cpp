#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
	string name, lower, HIGHER;
	name = "Im a SCATMan";
	for (int x = 0; x < name.length(); x++)
		lower.push_back(tolower(name[x]));
	for (int x = 0; x < name.length(); x++)
		HIGHER.push_back(touppper(name[x]));
	cout << lower << endl;
	cout << HIGHER;
}
