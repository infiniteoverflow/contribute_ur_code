// This is an exercise to show how Array.prototype.reduce() works
// We'll add all the products price to get the total price using reduce and map

// List of products
const products = [
    { "name": "Smartphone", "category": "Technology", "price": 499.99 },
    { "name": "Laptop", "category": "Technology", "price": 699.99 },
    { "name": "Mug", "category": "Kitchen", "price": 4.99 },
    { "name": "The Hitchhiker's Guide to the Galaxy", "category": "Book", "price": 19.99 },
    { "name": "Smart TV", "category": "Technology", "price": 799.99 },
    { "name": "Coffee", "category": "Food", "price": 5.99 },
    { "name": "Chocolate", "category": "Food", "price": 2.99 }
]

// Return the price of an element
let getPrices = function(element) {
    return element.price
}

// The method map returns just the field "price" and reduce are accumulating the value of each element to get the total price
let totalPrice = products.map(getPrices).reduce(function (accumulator, currentValue) {
    return accumulator + currentValue
})

console.log(totalPrice)