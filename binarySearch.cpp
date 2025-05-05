#include <vector>
#include <iostream>

const int NOT_FOUND = -1;

template <typename Comparable>
int binarySearch(const std::vector<Comparable>& a, const Comparable& x) {
    int low = 0;
    if (a.empty()) {
        return NOT_FOUND;
    }
    int high = a.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] < x) {
            low = mid + 1;
        } else if (a[mid] > x) {
            high = mid - 1;
        } else {
            return mid;
        }
    }
    return NOT_FOUND;
}




int main() {
    std::vector<int> data = {1, 3, 5, 7, 9, 11, 13};
    int target = 9;
    int index = binarySearch(data, target);

    if (index != NOT_FOUND) {
        std::cout << "Found " << target << " at index: " << index << std::endl;
    } else {
        std::cout << target << " not found." << std::endl;
    }

    target = 6;
    index = binarySearch(data, target);
     if (index != NOT_FOUND) {
        std::cout << "Found " << target << " at index: " << index << std::endl;
    } else {
        std::cout << target << " not found." << std::endl;
    }

    return 0;
}
