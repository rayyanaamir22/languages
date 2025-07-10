// TODO: Write a function that takes a reference as a parameter.
struct Product {
    name: String,
    stock: u32,
}

fn print_product(product: &Product) {
    println!("Product: {}, Stock: {}", product.name, product.stock);
}

fn restock_all(products: &mut Vec<Product>, amount: u32) {
    for product in products.iter_mut() {
        product.stock += amount;
    }
}

fn main() {
    let mut inventory = vec![
        Product { name: "Widget".to_string(), stock: 10 },
        Product { name: "Gadget".to_string(), stock: 5 },
    ];
    
    for product in &inventory {
        print_product(product);
    }
    
    restock_all(&mut inventory, 20);
    println!("After restocking:");
    for product in &inventory {
        print_product(product);
    }
} 