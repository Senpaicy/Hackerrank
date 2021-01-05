'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

/**
*   Return the second largest number in the array.
*   @param {Number[]} nums - An array of numbers.
*   @return {Number} The second largest number in the array.
**/
function getSecondLargest(nums) {
    // Complete the function
    let max = 0;
    for(let e of nums){
        if(e > max){
            max = e;
        }
    }
    let counter = 0;
    for(let a of nums){
        if(a == max){
            nums[counter] = 0;
        }
        counter++;
    }
    let secondmax = 0;
    for(let k of nums){
        if(k > secondmax){
            secondmax = k;
        }   
    }
    return secondmax;
}

