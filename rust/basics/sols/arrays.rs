// TODO: Create an array, print its elements, and modify them.
fn main() {
    println!("Hello, world!");

    // non-mutable array
    let numbers: [i32; 7] = [1, 2, 3, 4, 5, 6, 7];  // this cant be changed

    let mut words: [&str; 3] = ["hello", "world", "rust"];

    println!("numbers: {:?}", numbers);
    println!("words: {:?}", words);

    // mutable array
    words[2] = "SIUUUUU"; // change rust to SIUUUUU
    println!("I changed the hi to SIUUUUU");
    println!("words: {:?}", words);
    println!("The length of words is: {}", words.len());
} 