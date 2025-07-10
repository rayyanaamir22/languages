// TODO: Write a recursive function in Rust (e.g., factorial).

fn factorial(n: i32) -> i64 {
    if n < 0 {
        unimplemented!("factorial undefined for n < 0. n = {}", n);
    }

    if n < 2 {
        return 1;
    }
    
    return (n as i64) * factorial(n-1);
}

// Memoized Fibonacci using a HashMap for caching
use std::collections::HashMap;

fn fibonacci_memoized(n: u32, memo: &mut HashMap<u32, u64>) -> u64 {
    if n <= 1 {
        return n as u64;
    }
    
    // Check if we've already calculated this value
    if let Some(&result) = memo.get(&n) {
        return result;
    }
    
    // Calculate recursively and cache the result
    let result = fibonacci_memoized(n - 1, memo) + fibonacci_memoized(n - 2, memo);
    memo.insert(n, result);
    result
}

// Wrapper function to create the memo HashMap
fn fibonacci(n: u32) -> u64 {
    let mut memo = HashMap::new();
    fibonacci_memoized(n, &mut memo)
}

// Regular recursive Fibonacci (for comparison)
fn fibonacci_recursive(n: u32) -> u64 {
    if n <= 1 {
        return n as u64;
    }
    fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2)
}

fn main() {
    // Factorial examples
    println!("=== Factorial Examples ===");
    println!("factorial(5) = {}", factorial(5));
    println!("factorial(10) = {}", factorial(10));
    println!("factorial(0) = {}", factorial(0));
    println!("factorial(1) = {}", factorial(1));
    
    // Fibonacci examples
    println!("\n=== Fibonacci Examples ===");
    println!("Regular recursive Fibonacci:");
    for i in 0..=10 {
        println!("fibonacci_recursive({}) = {}", i, fibonacci_recursive(i));
    }
    
    println!("\nMemoized Fibonacci (much faster for larger numbers):");
    for i in 0..=10 {
        println!("fibonacci({}) = {}", i, fibonacci(i));
    }
    
    // Show the performance difference for larger numbers
    println!("\n=== Performance Comparison ===");
    println!("Calculating fibonacci(40) with memoization...");
    let start = std::time::Instant::now();
    let result = fibonacci(40);
    let duration = start.elapsed();
    println!("fibonacci(40) = {} (took {:?})", result, duration);
    
    // Note: Regular recursive would be extremely slow for n=40
    println!("Regular recursive would take much longer for n=40!");
} 