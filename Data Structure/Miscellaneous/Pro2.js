var arr = "abcdef";
var i, j;
for (i = 0, j = arr.length - 1; i < arr.length / 2, j >= arr.length - arr.length / 2; i++, j--) {
    if (arr[i] != arr[j]) {
        console.log("Not palindrome");
        return;
    }
}
console.log("Palindrome");
