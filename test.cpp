#include <utility>
#include <vector>
#include <algorithm>
#include <iostream>

template <typename T>
struct i_and_val_t {
    size_t i = 0;
    T t;
};

template <typename T>
struct enumerate {

    enumerate(std::vector<T> container) {
        size_t i = 0;
        auto lambda = [&i] (auto item) auto {
            return std::make_pair(i++, item);
        };
        internal_container.resize(container.size());
        std::transform(container.begin(), container.end(), internal_container.begin(), lambda);
    }

    auto begin() {
        return internal_container.begin();
    }

    auto end() {
        return internal_container.end();
    }

    std::vector<std::pair<size_t, T>> internal_container;
};

int main() {
     std::vector<int> v = {1,2,3};
     for (auto i_and_val : enumerate(v)) {
         auto [i, value] = i_and_val;
         std::cout << i << ", " << value << '\n';
     }

    return 0;
}
