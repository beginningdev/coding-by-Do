function isPrime(num: number): boolean {
    if (num <= 1) return false;
    for (let i = 2; i <= Math.sqrt(num); i++) {
        if (num % i === 0) return false;
    }
    return true;
}

// This function returns an array of divisors of a given number
// It iterates from 1 to the number itself and checks if the number is divisible by each iterator
// If it is, the iterator is added to the array of divisors
// Finally, it returns the array of divisors
// The time complexity of this function is O(n), where n is the input number
// The space complexity is O(n) as well, since in the worst case, all numbers from 1 to n are divisors
// The function is efficient for small numbers but may take longer for larger numbers
function getDivisors(num: number): number[] {
    const divisors: number[] = [];
    for (let i = 1; i <= num; i++) {
        if (num % i === 0) divisors.push(i);
    }
    return divisors;
}

function main(): void {
    const input = prompt("Enter a natural number:");
    if (!input) {
        console.log("No input provided.");
        return;
    }

    const number = parseInt(input, 10);
    if (isNaN(number) || number <= 0) {
        console.log("Please enter a valid natural number.");
        return;
    }

    const primeStatus = isPrime(number) ? "a prime number" : "not a prime number";
    const divisors = getDivisors(number);

    console.log(`${number} is ${primeStatus}.`);
    console.log(`Divisors of ${number}: ${divisors.join(", ")}`);
}

main();