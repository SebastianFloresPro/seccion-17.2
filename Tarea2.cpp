#include <iostream>
using namespace std;

template <class T>
class iteratorx {

	T *x;

public:
	void operator=(T *p) {
		x = p;
	}
	void operator=(T p) {
		*x = p;
	}
	bool operator<(T *p) {
		return (x < p);
	}
	iteratorx operator++() {
		iteratorx a;
		a = ++x;
		return a;
	}
	friend ostream &operator<<(ostream &output, const iteratorx &i) {
		output << *(i.x);
		return output;
	}
};

template <class T>
class ascendente {
public:
	bool operator()(T a, T b) {
		return a > b;
	}
};

template <class T>
class descendente {
public:
	bool operator()(T a, T b) {
		return a < b;
	}
};

template <class T, class O>
class ordena {

	iteratorx<T> itord;

public:
	void ordenar(T* ini, T* fin) {
		O comp;
		for (T* i = ini; i < fin; ++i) {
			for (T* j = ini; j < fin - 1; ++j) {
				if (comp(*j, *(j + 1))) {
					T tmp = *j;
					*j = *(j + 1);
					*(j + 1) = tmp;
				}
			}
		}
	}
};

int main() {
	iteratorx<int> it;
	int A[10] = {5, 8, 3, 9, 1, 2, 6, 7, 0, 4};

	for (it = A; it < A + 10; ++it) {
		cout << it << ' ';
	}
	cout << endl;

	ordena<int, ascendente<int>> ordenasc;
	ordenasc.ordenar(A, A + 10);

	for (it = A; it < A + 10; ++it) {
		cout << it << ' ';
	}
	cout << endl;

	return 0;
}
