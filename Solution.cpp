
#include <ranges>
#include <vector>
using namespace std;

class Solution {
    
    static const int NOT_POSSIBLE_TO_CREATE_A_POLYGON = -1;

public:
    long long largestPerimeter(vector<int>& linesLength) const {

        // Alternatively, prior to C++20:
        // sort(linesLength.begin(), linesLength.end());
        ranges::sort(linesLength);
        long long prefixSum = linesLength[0] + linesLength[1];
        long long polygonWithLargestPerimeter = NOT_POSSIBLE_TO_CREATE_A_POLYGON;

        for (size_t i = 2; i < linesLength.size(); ++i) {
            if (prefixSum > linesLength[i]) {
                polygonWithLargestPerimeter = prefixSum + linesLength[i];
            }
            prefixSum += linesLength[i];
        }
        return polygonWithLargestPerimeter;
    }
};
