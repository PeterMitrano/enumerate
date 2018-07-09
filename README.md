# enumerate

-----------

## Usage

    #include <vector>
    #include <iostream>

    #include "enumerate.h"

    int main() {
         std::vector<std::string> v = {"hi", "I", "am", "bob"};
         for (auto i_and_val : enumerate(v)) {
             auto [i, value] = i_and_val;
             std::cout << i << ", " << value << '\n';
         }

        return 0;
    }

    # Output
    ~/Projects/enumerate (master) $ ./a.out
    0, 1
    1, 2
    2, 3

