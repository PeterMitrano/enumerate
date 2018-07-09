#include <string>
#include <vector>
#include <iostream>

#include "enumerate.h"

using namespace enmr;

int main() {
     std::vector<std::string> v{"hi", "I", "am", "bob"};
     for (auto [i, value]: enumerate(v.begin(), v.end())) {
         std::cout << i << ", " << value << '\n';
     }

    return 0;
}
