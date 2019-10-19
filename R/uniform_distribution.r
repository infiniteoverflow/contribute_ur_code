# Plotting a uniform distribution
n <- floor(runif(10000)*10)
t <- table(n)
barplot(t)
