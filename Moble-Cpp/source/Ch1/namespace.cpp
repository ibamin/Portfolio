#include "NameSpace.h"

void NameSpace1::function() {
	cout << "NameSpace 1ÀÇ function\n";
}
void NameSpace2::function() {
	cout << "NameSpace 2ÀÇ function\n";
}
void NameSpace2::function2() {
	NameSpace1::function();
	function();
}

/*
extern을 활용하였기에 가능한 재정의 만약 static으로 한다면
이것을 지워야함.
*/
namespace Parent {
    int num = 1;
    namespace Child {
        int num = 2;
        namespace GrandChild {
            int num = 3;
        }
    }
}
