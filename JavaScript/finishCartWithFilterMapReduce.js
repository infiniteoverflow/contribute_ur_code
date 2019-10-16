// This is an exercise to show how Array.prototype.filter/map/reduce() works together
// We'll have a list of products in a cart, check if they are available in stock and add all products prices

// List of products
const products = [
    { "name": "Smartphone", "category": "Technology", "stock": 23, "price": 499.99 },
    { "name": "Laptop", "category": "Technology", "stock": 7, "price": 699.99 },
    { "name": "Mug", "category": "Kitchen", "stock": 0, "price": 4.99 },
    { "name": "The Hitchhiker's Guide to the Galaxy", "category": "Book", "stock": 42, "price": 19.99 },
    { "name": "Smart TV", "category": "Technology", "stock": 11, "price": 799.99 },
    { "name": "Coffee", "category": "Food", "stock": 0, "price": 5.99 },
    { "name": "Chocolate", "category": "Food", "stock": 65, "price": 2.99 }
]

// Let's assign our variables the functions to apply rules

// Check if there is the product in stock
let isAvailable = function(element) {
    return element.stock > 0
}

// Check if the product is classified as Food and apply a discount
let foodCoupon = function(element) {
    if(element.category === "Food")
        // Return to the element with 35% discount(0.65 of his value)
        // The function toFixed is used to format the number as ##.##
        // Here we use parseFloat because toFixed functions return a string
        return parseFloat((element.price * 0.65).toFixed(2))
    else
        return element.price
}

// Filter will check if there is the product/in /tock
// Map will check if the product is classified as Food and apply a discount
// Reduce will add the values after filter and map
let totalPrice = products.filter(isAvailable).map(foodCoupon).reduce(function (accumulator, currentValue) {
    return accumulator + currentValue
})

console.log(totalPrice)