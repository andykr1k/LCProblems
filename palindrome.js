/*
Make sure start and end never touch (Middle Number can be a single)
Compare first and last number
if they are not the same return false
if they are continue
*/
var isPalindrome = function(x) {
    if (x < 0){
        return false;
    }
    let str = x.toString();
    let s = 0;
    let e = str.length - 1;
    while(s < e){
        if (str.charAt(s++) != str.charAt(e--)){
            return false;
        }
    }
    return true;
};