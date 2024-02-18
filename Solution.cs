
using System;

public class Solution
{
    static readonly int NOT_POSSIBLE_TO_CREATE_A_POLYGON = -1;
    public long LargestPerimeter(int[] linesLength)
    {
        Array.Sort(linesLength);
        long prefixSum = linesLength[0] + linesLength[1];
        long polygonWithLargestPerimeter = NOT_POSSIBLE_TO_CREATE_A_POLYGON;

        for (int i = 2; i < linesLength.Length; ++i)
        {
            if (prefixSum > linesLength[i])
            {
                polygonWithLargestPerimeter = prefixSum + linesLength[i];
            }
            prefixSum += linesLength[i];
        }
        return polygonWithLargestPerimeter;
    }
}
