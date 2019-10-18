#creating a list
x <- list(TRUE,1:5,"rex")
#display element at position 1

x[1]

# if we give x[0] we get list()

x[0]

#add new element in list by adding tags

x[["event"]]<-"hacktober"
x[["month"]]<-"October"

#modify elements of a list
x[["event"]]<-"hacktoberfest"


# delete element of list at particular index
x[["month"]] <- NULL

x
#check datatype
typeof(x[[2]])
 
#partial matching this matches with event and displays the output as hacktoberfest
x$eve


