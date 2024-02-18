
import java.util.Arrays;

public class Solution {

    private static final int NOT_POSSIBLE_TO_CREATE_A_POLYGON = -1;

    public long largestPerimeter(int[] linesLength) {

        Arrays.sort(linesLength);
        long prefixSum = linesLength[0] + linesLength[1];
        long polygonWithLargestPerimeter = NOT_POSSIBLE_TO_CREATE_A_POLYGON;

        for (int i = 2; i < linesLength.length; ++i) {
            if (prefixSum > linesLength[i]) {
                polygonWithLargestPerimeter = prefixSum + linesLength[i];
            }
            prefixSum += linesLength[i];
        }
        return polygonWithLargestPerimeter;
    }
}
