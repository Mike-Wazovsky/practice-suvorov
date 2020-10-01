#include <cassert>
#include <vector>
#include <string>
#include <sstream>

using Container = std::vector<int>;
using ContainerIterator = Container::iterator;

std::string to_string(ContainerIterator begin, ContainerIterator end) {
    std::string str = "{";
    ContainerIterator it;
    for (it = begin; it < end; it++) {
        str += '0' + *it;
        if (it != end - 1)
            str += ", ";
    }
    str += '}';
    return str;
}

int main() {
    Container data = {1, 2, 3, 4, 5};

    assert(to_string(data.begin(), data.end()) == "{1, 2, 3, 4, 5}");
    assert(to_string(data.begin() + 2, data.end() - 1) == "{3, 4}");
    assert(to_string(data.end(), data.end()) == "{}");
    assert(to_string(data.begin() + 2, data.begin() + 2) == "{}");
}
