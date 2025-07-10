use std::collections::HashMap;

fn main() {
  let mut capital_cities = HashMap::new();
  capital_cities.insert("France", "Paris");
  capital_cities.insert("Japan", "Tokyo");
  capital_cities.insert("Pakistan", "Islamabad");
  capital_cities.insert("Palestine", "Jerusalem");

  println!("Capital of Pakistan is {}", capital_cities["Pakistan"]);
}