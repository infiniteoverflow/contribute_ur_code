import math
import matplotlib.pyplot as plt

print("""The following values need to be entered:
                           1) C1 = x, y coordinates of the first circle(centre)  
                           2) C2 = x, y coordinates of the second circle(centre)
                           3) R1 = length of the radius of the first cicle
                           4) R2 = length of the radius of the second circle  """)

#Values input
x_1 = float(input("Enter the x coordinate of circle A:  "))
y_1 = float(input("Enter the y coordinate of circle A:  "))
r_1 = float(input("Enter the length of the radius of circle A:  "))

x_2 = float(input("Enter the x coordinate of circle B:  "))
y_2 = float(input("Enter the y coordinate of circle B:  "))
r_2 = float(input("Enter the length of the radius of circle B:  "))

#dist between the centres = sqrt((x1 - x2)^2 + (y1 - y2)^2)
C1C2 = math.sqrt(abs(x_1 - x_2)**(2) + abs(y_1 - y_2)**(2))
print("""---------------------------------------------------------------
Distance between the centres of the two circles = """, C1C2)

if abs(r_1 - r_2) <= C1C2 and C1C2 <= abs(r_1 + r_2):
    if C1C2 == r_1 + r_2:
        print("Circle A and circle B are tangents to each other.")
    elif C1C2 == 0:
        print("The circles are concentric")
    elif C1C2 != r_1 + r_2:
        print("Circles A, B intersect each other")
else:
    if C1C2 == 0:
        print("Circles A, B are concentric.")
    else:
        print("The circles don't intersect.")
print("---------------------------------------------------------------")

plt.axes()
circle1 = plt.Circle((x_1, y_1), r_1, fc='none', ec='#4684cf')
circle2 = plt.Circle((x_2, y_2,), r_2, fc='none', ec='#ee90bb')
plt.scatter(x_1, y_1, s=5, fc='#4684cf')
plt.scatter(x_2, y_2, s=5, fc='#ee90bb')
plt.gca().add_patch(circle1)
plt.gca().add_patch(circle2)
plt.axis('scaled')
plt.show()