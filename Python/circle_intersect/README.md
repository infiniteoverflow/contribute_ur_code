# Python script to check the state of the circles

### Features:
Checks if the circles are concentric, are tangents to each other or intersect each other at more than one point.

### User input:
#### Takes input for:
                        1)x, y coordinates of centres of circle A, B.
                        2)Length of the radii of circles A, B.
                        
### Algorithm / Thinking process:    
##### 1)Two circles would intersect or be tangents to each other only if
                     The distance between their centers is between the sum and the difference of their radii.
                     i.e. interSect = abs(r_1 - r_2) <= math.sqrt((x_1 - x_2)^2 + (y_1 - y_2)^2) <= abs(r_1 + r_2)

##### 2)Now there are four cases:
                            if interSect == 'True':
                                if C1C2 == r_1 + r_2:
                                    print("Circle A and circle B are tangents to each other.")
                                else:
                                    print("Circles A, B intersect each other")
                                    
                            else:
                                if C1C2 == 0:
                                    print("Circles A, B are concentric.")
                                else:
                                    print("The circles don't intersect.")


##### I used matplotlib to just draw an image of what happens in the computers brain 
