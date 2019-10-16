// This is an exercise to show how Array.prototype.map() works
// We'll have a list of products in a cart, then to apply a coupon on those who are classified by Technology a 20% discount and a 100% discount on Coffee.

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

// Let's assign our variables the functions to apply a rule


const techCoupon = function(element) {
    // Check if the element is classified by Technology
    if(element.category === "Technology")
        // Return to the element with a 20% discount on his price (0.8 of his value)
        // The function toFixed is used to format the number as ##.##
        // Here we use parseFloat because toFixed functions return a string
        return { "name": element.name, "category": element.category, "price": parseFloat((element.price * 0.8).toFixed(2)) }
    else
        return element
}

const coffeeCoupon = function(element) {
    // Check if the element has the name Coffee
    if(element.name === "Coffee")
        // Return 0 on his price
        return { "name": element.name, "category": element.category, "price": 0 }
    else
        return element
}

// The Array.prototype.map() will apply our functions to each element and return as a NEW ARRAY.
let cartWithCoupon = products.map(techCoupon).map(coffeeCoupon)

console.log(cartWithCoupon)