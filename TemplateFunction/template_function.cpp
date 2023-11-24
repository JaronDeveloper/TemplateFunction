#include <iostream>
#include <vector>

template <class T>
T square(T a)
{	
	return a*a;	
}

template <class V>
V vector(V vector) {	
	return vector*vector;
}

int main() {
	std :: cout << square(5) << std :: endl;	
	std::vector<int> ve {vector(5), vector(15)};
	auto it = ve.begin();
	for (it;it != ve.end();it++) {
		std::cout << *it << " ";
	}
}