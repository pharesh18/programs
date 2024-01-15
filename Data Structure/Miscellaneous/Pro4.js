var arr = [2, 5, 7, 2, 9, 1, 2, 10, 23, 45, 76, 89, 32, 31, 40, 57];
var k = 4;
arr.sort((a, b) => { return a - b });

if (k >= arr.length || k < 0) {
    console.log("Out of range");
} else {
    console.log(arr);
    console.log("Kth smallest element is : ", arr[k - 1]);
    console.log("Kth largest element is : ", arr[arr.length - k]);
}
