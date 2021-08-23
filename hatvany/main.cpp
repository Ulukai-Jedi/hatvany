#include <iostream>

unsigned long long int hatvany(const int a, const int b) {
	unsigned long long int eredmeny = 1UL;
	for (int i = 0; i < b; i++) {
		 eredmeny *= a;
	}
	return eredmeny;
}


int main() {

	int a = 0;
	int b = 0;
	std::cout << "Kerem a szamot: ";
	std::cin >> a;
	std::cout << "Kerem a kitevot: ";
	std::cin >> b;
	std::cout << hatvany(a,b);

	return 0;
}