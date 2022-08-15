/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function(x) {
    let num = 0;
    while(num * num <= x) num++;
    
    return num-1;
};
