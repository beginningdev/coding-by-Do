//hàm tính tổng các sóng trong mảng
function sumArray(arr) {
    let sum = 0;
    for (let i = 0; i < arr.length; i++) {
        sum += arr[i];
    }
    return sum;
}
//mảng số ví dụ
const numbers = [1, 2, 3, 4, 5];
//Gọi hàm và in kết quả
const result = sumArray(numbers);
console.log("Tổng các số trong mảng là: " + result); // Kết quả: 15