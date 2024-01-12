#include <iostream>
using namespace std;

var generateResult = (l, str) => {
    var ret = "";
    var cnum;
    var le = parseInt(l);
    for(var i = 0; i<le; i++){
        ret = ret + str;
    }
    return ret;
}

string intToRoman = function(num) {
    var len = num.toString().length;
    var result = "";
    
    while(len>0){
        if(num > 3999 || num < 1){
            console.log("Invalid Input");
        }
        
        
        cnum = num.toString();
        
        if(num > 999 && num < 4000){
            result = result + generateResult(cnum[0], 'M');
        }
        
        if(num > 899 && num < 1000){
            result = result + 'C' + 'M';
        }
        
        if(num > 599 && num < 900){
            result = result + 'D' + generateResult((num - 500).toString()[0], 'C');
        }
        
        if(num > 499 && num < 600){
            result = result + 'D';
        }
        
        if(num > 399 && num < 500){
            result = result + 'C' + 'D';
        }
        
        if(num > 99 && num < 400){
            result = result + generateResult(cnum[0], 'C');
        }
        
        if(num > 89 && num < 100){
            result = result + 'X' + 'C';
        }
        
        if(num > 59 && num < 90){
            result = result + 'L' + generateResult((num - 50).toString()[0], 'X');
        }
        
        if(num > 49 && num < 60){
            result = result + 'L';
        }
        
        if(num > 39 && num < 50){
            result = result + 'X' + 'L';
        }
        
        if(num > 9 && num < 40){
            result = result + generateResult(cnum[0], 'X');
        }
        
        if(num == 9){
            result = result + 'I' + 'X'
        }
        
        if(num > 4 && num < 9){
            result = result + 'V' + generateResult((num - 5).toString()[0], 'I');
        }
        
        if(num == 4){
            result = result + 'I' + 'V';
        }
        
        if(num >= 1 && num < 4){
            result = result + generateResult(cnum[0], 'I');
        }
        
        cnum = cnum.slice(1);
        num = parseInt(cnum);
        len -= 1;
    }
    
    return result;
};

int main(){
	intToRoman(100);
	return 0;
}
