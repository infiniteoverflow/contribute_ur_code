// Array that shows an inventory of cars 
// display's car id, car_type, car_make, car_model, and year

const Cars = [
    {id: 1, car_type: Sedan, car_make: Nissan, car_model: Versa, year: 2012}, 
    {id: 2, car_type: SUV, car_make: Honda, car_model: Pilot, year: 2017},  
    {id: 3, car_type: Sedan, car_make: Honda, car_model: Accord, year: 2012}, 
    {id: 4, car_type: SUV, car_make: Acura, car_model: MDX, year: 2017}, 
    {id: 5, car_type: Coupe, car_make: Chevrolet, car_model: Camaro, year: 2012},  
    {id: 6, car_type: Sedan, car_make: Nissan, car_model: Maxima, year: 2020},  
    {id: 7, car_type: Coupe, car_make: Chevrolet, car_model: Corvette, year: 2020},      
]

// **** How to retrieve values from an array ****

// Getting all the different car models 

const getCarModel = (cars) => {
    
    let carModel = []
    
    for(let i = 0; i < cars.length; i++) {
        carModel.push(cars[i].car_model)
    }

    return carModel; 
    
}


// Getting all the different car make 

const getCarMake = (inventory) => {
    
    let carMake = []

    for(let i = 0; inventory.length; i++) {
        carMake.push(inventory[i].car_make)
    }

    return carMake; 
}
