let removeUnusedLetters = function (arr, word) {
    let strSplit = word.split(""),
        unusedLettersArr = [];


    for (let i = 0; i < arr.length; i++) {
        if (strSplit.includes(arr[i])) {
            strSplit.splice(strSplit.indexOf(arr[i]), 1);
        } else {
            unusedLettersArr.push(arr[i]);
        }
    }

    console.log(`Unused letters in the [${arr}] array are [${unusedLettersArr}].`);

}

removeUnusedLetters(["j", "a", "v", "a", "s", "c", "n", "z", "j"], "javascript");
