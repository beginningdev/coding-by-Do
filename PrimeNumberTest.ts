function isPrime(num: number): boolean {
    if (num <= 1) return false;
    for (let i = 2; i <= Math.sqrt(num); i++) {
        if (num % i === 0) return false;
    }
    return true;
}

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