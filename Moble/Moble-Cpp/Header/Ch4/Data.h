#pragma once
#include "default_header.h"

template <typename t>
class Data {
	t A;
public:
	Data(t a = 0);
	void GetData();
};
template <typename t>
t getMax(t a, t b) {
	return a > b ? a : b;
}
