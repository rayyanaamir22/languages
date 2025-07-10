// TODO: Define a struct and implement methods for it.
struct Cat {
    // Your fields here
    name: String,
    age: u32,
    breed: String,
    gender: String,
    meows: Vec<String>,
}

impl Cat {
    // Your methods here

    // Cat constructor :p
    fn new(name: String, age: u32, breed: String, gender: String) -> Self {
        Cat {
            name,
            age,
            breed,
            gender,
            meows: vec![
                String::from("Meow!"),
                String::from("Mrrrow!"),
                String::from("Purr..."),
                String::from("Hiss!"),
            ],
        }
    }


    // make a random meow on the console
    fn meow(&self) {
        use rand::seq::SliceRandom;
        use rand::thread_rng;
        let mut rng = thread_rng();
        if let Some(meow) = self.meows.choose(&mut rng) {
            println!("{}", meow);
        } else {
            println!("...");
        }
    }
}

impl Default for Cat {
    fn default() -> Self {
        Cat {
            name: String::from("Unknown"),
            age: 0,
            breed: String::from("Unknown"),
            gender: String::from("Unknown"),
            meows: vec![
                String::from("Meow!"),
                String::from("Mrrrow!"),
                String::from("Purr..."),
                String::from("Hiss!"),
            ],
        }
    }
}

fn main() {
    // Your code here
    // Create a new Cat instance
    let mut my_cat = Cat::new(
        String::from("Stormy"),
        3,
        String::from("Bengal"),
        String::from("Male"),
    );

    // Print cat's details
    println!("Cat's name: {}", my_cat.name);
    println!("Cat's age: {}", my_cat.age);
    println!("Cat's breed: {}", my_cat.breed);
    println!("Cat's gender: {}", my_cat.gender);

    // Make the cat meow a few times
    println!("The cat says:");
    for _ in 0..3 {
        my_cat.meow();
    }

    // Create a default cat
    let default_cat = Cat::default();
    println!("\nDefault cat's name: {}", default_cat.name);
    println!("Default cat's age: {}", default_cat.age);
    println!("Default cat's breed: {}", default_cat.breed);
    println!("Default cat's gender: {}", default_cat.gender);
    println!("Default cat says:");
    default_cat.meow();
} 