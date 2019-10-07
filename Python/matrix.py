import numpy as np


def inputMatrix():
    r = int(input("Enter number of rows: "))
    c = int(input("Enter number of columns: "))
    A = MyMatrix(r, c)
    return(A)


class MyMatrix:
    def __init__(self, rows, cols):
        self.rows = rows
        self.cols = cols
        self.m = []
        for i in range(0, self.rows):
            self.m.append([])
            for j in range(0, self.cols):
                x = int(input("Enter element: "))
                self.m[i].append(x)
        self.mat = np.array(self.m)

    def addMatrix(self, mat2):
        return (self.mat + mat2.mat)

    def subMatrix(self, mat2):
        return (self.mat - mat2.mat)

    def mulMatrix(self, mat2):
        if((self.cols == mat2.rows)):
            return (self.mat.dot(mat2.mat))
        else:
            return "Not possible"

    def inverseMatrix(self):
        y = np.linalg.inv(self.mat)
        return (y)


class SqMatrix(MyMatrix):
    def __init__(self):
        self.matrix = inputMatrix()
        if(self.matrix.rows != self.matrix.cols):
            print("As rows is not equal to columns, this is not a square matrix")
        else:
            print("This is a square matrix")

    def eigenvalueMatrix(self):
        y = np.linalg.eig(self.matrix.mat)
        return (y)


mat1 = inputMatrix()
mat2 = inputMatrix()
mat3 = SqMatrix()
print(mat3.eigenvalueMatrix())
mat3 = inputMatrix()
print("Addition:\n", mat1.addMatrix(mat2))
print("Subtraction:\n", mat1.subMatrix(mat2))
print("Multiplication:\n", mat1.mulMatrix(mat2))
print("Inverse of first matrix:\n", mat1.inverseMatrix())
print("Inverse of second matrix:\n", mat2.inverseMatrix())
