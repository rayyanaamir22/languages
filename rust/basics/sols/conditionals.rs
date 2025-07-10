// import a module
mod functions;

fn main() {
    let name = "Rayyan";
    let age: i32 = 20;

    if functions::is_prime(age) {
        println!("hello {}, your age {} is prime", name, age);
    } else {
        println!("hello {}, your age {} is not prime", name, age);
    }
} 