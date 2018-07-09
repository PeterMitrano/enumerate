#include <utility>
#include <vector>
#include <algorithm>

namespace enmr {

template <typename T>
struct enumerate {

    enumerate(std::vector<T> container) {
        size_t i = 0;
        auto make_pair = [&i] (auto item) auto {
            return std::make_pair(i++, item);
        };
        internal_container.resize(container.size());
        std::transform(container.begin(), container.end(), internal_container.begin(), make_pair);
    }

    auto begin() {
        return internal_container.begin();
    }

    auto end() {
        return internal_container.end();
    }

    std::vector<std::pair<size_t, T>> internal_container;
};

} // Namespace enmr
