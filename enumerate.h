#include <utility>
#include <vector>
#include <iterator>
#include <algorithm>

namespace enmr {

template <class Iterator>
struct enumerate {

    enumerate(Iterator first, Iterator last) {
        auto i = 0lu;
        auto make_pair = [&i] (auto item) auto {
            return std::make_pair(i++, item);
        };
        internal_container.resize(std::distance(first, last));
        std::transform(first, last, internal_container.begin(), make_pair);
    }

    auto begin() const {
        return internal_container.begin();
    }

    auto end() const {
        return internal_container.end();
    }

    std::vector<std::pair<size_t, typename std::iterator_traits<Iterator>::value_type>> internal_container;
};

} // Namespace enmr
