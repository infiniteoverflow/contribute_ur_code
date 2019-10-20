recur_factorial <- function(n) {
if(n <= 1) {
return(1)
} else {
return(n * recur_factorial(n-1))
}
}
