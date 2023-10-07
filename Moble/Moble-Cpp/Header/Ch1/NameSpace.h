#pragma once
#include <iostream>

using namespace std;

namespace NameSpace1 {
	void function();
}

namespace NameSpace2 {
	void function();
	void function2();
}

/*
extern�� �ܺ����Ͽ��� ������ ������ �� �� ������ ���Ѵ�. ���� Main������ ��°�
namespace.cpp���� �����Ǹ� �ϴµ��� �۾��� �ʿ������� �� namespace������ �������� ������
num�� extern�� ���� �ܺ����Ϸ� ������ ����̳� static���� �������� ������ �ʿ��ϴ�
*/
namespace Parent {
	extern int num;
	namespace Child {
		extern int num;
		namespace GrandChild {
			extern int num;
		}
	}
}

namespace GChild = Parent::Child::GrandChild;