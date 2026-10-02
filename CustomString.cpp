#include <iostream>
using namespace std;/
class myString {
private:
	char str[200];
	int len;
public:
	myString() {
		str[0] = '\0';
		len = 0;
	}
	myString(const char* text) {
		len = 0;
		while (text[len] != '\0') {
			str[len] = text[len];
			len++;
		}
		str[len] = '\0';
	}
	int getLenght() const {
		return len;
	}
	void combine(const myString& other) {
		int i = 0;
		while (other.str[i] != '\0') {
			str[len] = other.str[i];
			len++;
			i++;
		}
		str[len] = '\0';
	}
	void print() const {
		cout << str << endl;
	}
};


int main() {
	myString s1("Barev");
	myString s2("ashkharh");
	cout << " s1" << endl;
	s1.print();

	cout << endl;
	cout << "s2" << " ";
	s2.print();
	cout << "s1 - i erkarutyuny" << " "<< s1.getLenght();
	s1.combine(s2); 
	cout << endl;
	cout << " miacrinq" << endl;
	s1.print();
	cout << " nor erkarutyun" << " " << s1.getLenght();

	return 0;
}
