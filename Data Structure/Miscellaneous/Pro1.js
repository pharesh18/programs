var str = "Hello how are you all    , i am waiting for you guys!";
var result = "";
var arr = str.split(' ');
for (var i = arr.length - 1; i >= 0; i--) {
    result = result + arr[i] + ' ';
}

console.log(result);