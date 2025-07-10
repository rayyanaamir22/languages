// TODO: Demonstrate references and borrowing in Rust.
struct Product {
    name: String,
    stock: u32,
}

fn restock(product: &mut Product, amount: u32) {
    product.stock += amount;
}

fn main() {
    let mut item = Product { name: "Widget".to_string(), stock: 10 };
    restock(&mut item, 50);
    println!("{} stock: {}", item.name, item.stock); // should be 60 since we added 50 to the og 10
} 