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

namespace Parent {
    int num = 1;
    namespace Child {
        int num = 2;
        namespace GrandChild {
            int num = 3;
        }
    }
}