const readline = require('readline');

// Tạo giao diện nhập liệu từ terminal
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

// Kiểm tra số nguyên tố
function isPrime(n) {
  if (n < 2) return false;
  for (let i = 2; i <= Math.sqrt(n); i++) {
    if (n % i === 0) return false;
  }
  return true;
}

// Chạy chương trình
function main() {
  rl.question("Nhập vào một số tự nhiên: ", function(input) {
    const number = parseInt(input);

    if (isNaN(number)) {
      console.log("Giá trị không hợp lệ.");
    } else if (isPrime(number)) {
      console.log(`${number} là số nguyên tố.`);
    } else {
      console.log(`${number} không phải là số nguyên tố.`);
    }

    rl.close(); // Đóng giao diện nhập
  });
}

main();
