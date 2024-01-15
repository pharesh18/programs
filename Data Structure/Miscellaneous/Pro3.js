var arr = [10, 20, 20, 30, 30, 20, 10, 30, 50, 40, 60, 20, 10, 30, 30, 40, 20];
var eleArr = [];
var cntArr = [];
var cntr;
var ele, cnt;

for (i = 0; i < arr.length; i++) {
    cntr = 0;
    if (eleArr.indexOf(arr[i]) == -1) {
        for (j = i; j < arr.length; j++) {
            if (arr[i] == arr[j])
                cntr++;
        }
        eleArr.push(arr[i]);
        cntArr.push(cntr);
    }
}

var max = Math.max(...cntArr);
for (i = 0; i < cntArr.length; i++) {
    if (cntArr[i] == max) {
        console.log(eleArr[i] + " with the count " + cntArr[i]);
    }
}