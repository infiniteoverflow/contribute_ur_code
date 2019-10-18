// This is an exercise to show how Array.prototype.filter() works
// We'll have a list of products and filter them by category

// List of products
const products = [
    { "name": "Smartphone", "category": "Technology" },
    { "name": "Laptop", "category": "Technology" },
    { "name": "Mug", "category": "Kitchen" },
    { "name": "The Hitchhiker's Guide to the Galaxy", "category": "Book" },
    { "name": "Smart TV", "category": "Technology" },
    { "name": "Coffee", "category": "Food" },
    { "name": "Chocolate", "category": "Food" }
]

// The Array.prototype.fitler() will return a NEW ARRAY with all elements that pass the test
let selectedProducts = products.filter(function(element) {
    // If this condition is true add this element in the new array
    return element.category === "Technology"
})

console.log(selectedProducts)