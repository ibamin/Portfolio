#include "Data.h"

template <typename t>
Data<t>::Data(t a) {
	A = a;
}
template <typename t>
void Data<t>::GetData(){
	cout << A << '\n';
}