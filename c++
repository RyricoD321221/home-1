let arr = [1,2,3,4,5,6,7,8,9,10];
//         0   1   2
let sum = 0;
let i = 0;
let b = 0
while (i <= arr.length - 1) {
    if (arr[i] % 2 !== 0) {
        sum += arr[i];
    }   else if (arr[i] % 2 !== 1) {
        sum += arr[i];
    }
    var difference = function (a, b) { return Math.abs(a - b); }


    i += 1;
}

console.log(sum);
