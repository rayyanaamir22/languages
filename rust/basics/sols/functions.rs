// TODO: Write a function that adds two numbers and call it from main.
fn add(a: i32, b: i32) -> i32 {
    // Your code here
    return a + b;
}

fn is_prime(n: i32) -> bool {
    /*
    A prime number is a number that is only divisible by 1 and itself.
    We can check if a number is prime by checking if it is divisible by any number between 2 and the square root of the number (inclusive).
    If it is divisible, then it is not a prime number. Otherwise, it is a prime number.
    */

    // base cases
    if n <= 1 {
        return false;
    } else if n == 2 {
        return true;
    } else if n % 2 == 0 {
        return false;
    }

    let sqrt_n = (n as f64).sqrt() as i32;
    for i in 3..=sqrt_n {
        if n % i == 0 {
            return false;
        }
    }
    return true;
}

fn main() {
    let n = 100;
    println!("Prime numbers up to {} are:", n);
    // Your code here
    for i in 1..n {
        if is_prime(i) {
            println!("{} is prime", i);
        }
    }
}