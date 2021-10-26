function bubble_sort(input_arr){
    for(var i = 0; i < input_arr.length; i++){
        for(var j = 0; j < (input_arr.length-i-1); j++){
            if(input_arr[j] > input_arr[j+1]){
                var temp = input_arr[j]; 
                input_arr[j] = input_arr[j+1];
                input_arr[j+1] = temp;
            }
        }
    }
    return input_arr;
}

var test_arr = [4, 1, 2, 3, -1, 5];

bubble_sort(test_arr);
console.log(test_arr);