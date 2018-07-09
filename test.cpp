#include <vector>
#include <iostream>

#include "enumerate.h"

using namespace enmr;

int main() {
     std::vector<std::string> v = {"hi", "I", "am", "bob"};
     for (auto [i, value]: enumerate(v)) {
         std::cout << i << ", " << value << '\n';
     }

    return 0;
}
