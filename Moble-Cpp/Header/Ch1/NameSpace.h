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
extern은 외부파일에서 변수가 재정의 될 수 있음을 말한다. 현재 Main에서의 출력과
namespace.cpp에서 재정의를 하는등의 작업이 필요함으로 각 namespace에서의 전역변수 선언인
num에 extern와 같은 외부파일로 부터의 허용이나 static같은 고정변수 선언이 필요하다
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