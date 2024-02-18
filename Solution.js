
/**
 * @param {number[]} linesLength
 * @return {number}
 */
var largestPerimeter = function (linesLength) {
    const NOT_POSSIBLE_TO_CREATE_A_POLYGON = -1;

    linesLength.sort((x, y) => x - y);
    let prefixSum = linesLength[0] + linesLength[1];
    let polygonWithLargestPerimeter = NOT_POSSIBLE_TO_CREATE_A_POLYGON;

    for (let i = 2; i < linesLength.length; ++i) {
        if (prefixSum > linesLength[i]) {
            polygonWithLargestPerimeter = prefixSum + linesLength[i];
        }
        prefixSum += linesLength[i];
    }
    return polygonWithLargestPerimeter;
};
