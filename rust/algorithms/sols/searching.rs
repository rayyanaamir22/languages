// TODO: Implement a searching algorithm (e.g., linear search) in Rust.

/// Linear search algorithm
/// Returns the index of the target element if found, None otherwise
/// Time complexity: O(n)
/// Space complexity: O(1)
fn linear_search(arr: &[i32], target: i32) -> Option<usize> {
    for (index, &element) in arr.iter().enumerate() {
        if element == target {
            return Some(index);
        }
    }
    None
}

/// Binary search algorithm (to be implemented)
/// Returns the index of the target element if found, None otherwise
/// Time complexity: O(log n)
/// Space complexity: O(1)
/// Note: Array must be sorted for binary search to work correctly
fn binary_search(arr: &[i32], target: i32) -> Option<usize> {
    if arr.is_empty() {
        return None;
    }

    let mut left = 0;
    let mut right =  arr.len() - 1;

    while left <= right {
        let mid = left + (right - left) / 2;
        if arr[mid] == target {
            return Some(mid);
        } else if arr[mid] < target {
            left = mid + 1;
        } else {
            if mid == 0 {
                break; // Prevents underflow
            }
            right = mid - 1;
        }
    }

    None
}

fn main() {
    println!("=== Linear Search Test Cases ===");
    
    // Test case 1: Basic linear search
    let arr1 = vec![1, 3, 5, 7, 9, 11, 13, 15];
    let target1 = 7;
    match linear_search(&arr1, target1) {
        Some(index) => println!("Test 1: Found {} at index {}", target1, index),
        None => println!("Test 1: {} not found", target1),
    }
    
    // Test case 2: Element not found
    let target2 = 10;
    match linear_search(&arr1, target2) {
        Some(index) => println!("Test 2: Found {} at index {}", target2, index),
        None => println!("Test 2: {} not found", target2),
    }
    
    // Test case 3: Empty array
    let arr2: Vec<i32> = vec![];
    let target3 = 5;
    match linear_search(&arr2, target3) {
        Some(index) => println!("Test 3: Found {} at index {}", target3, index),
        None => println!("Test 3: {} not found in empty array", target3),
    }
    
    // Test case 4: Single element array
    let arr3 = vec![42];
    let target4 = 42;
    match linear_search(&arr3, target4) {
        Some(index) => println!("Test 4: Found {} at index {}", target4, index),
        None => println!("Test 4: {} not found", target4),
    }
    
    // Test case 5: Duplicate elements (should return first occurrence)
    let arr4 = vec![1, 2, 2, 3, 4, 2, 5];
    let target5 = 2;
    match linear_search(&arr4, target5) {
        Some(index) => println!("Test 5: Found {} at index {} (first occurrence)", target5, index),
        None => println!("Test 5: {} not found", target5),
    }
    
    // Test case 6: Large array
    let arr5: Vec<i32> = (1..=1000).collect();
    let target6 = 999;
    match linear_search(&arr5, target6) {
        Some(index) => println!("Test 6: Found {} at index {}", target6, index),
        None => println!("Test 6: {} not found", target6),
    }
    
    println!("\n=== Binary Search Test Cases ===");
    println!("Note: Binary search tests will be implemented when the function is complete");
    
    // Test case 7: Binary search (commented out until implementation)
    
    let sorted_arr = vec![1, 3, 5, 7, 9, 11, 13, 15];
    let target7 = 9;
    match binary_search(&sorted_arr, target7) {
        Some(index) => println!("Test 7: Found {} at index {}", target7, index),
        None => println!("Test 7: {} not found", target7),
    }
} 