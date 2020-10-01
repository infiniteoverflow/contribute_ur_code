import time

board = [
    [7,8,0,4,0,0,1,2,0],
    [6,0,0,0,7,5,0,0,9],
    [0,0,0,6,0,1,0,7,8],
    [0,0,7,0,4,0,2,6,0],
    [0,0,1,0,5,0,9,3,0],
    [9,0,4,0,6,0,0,0,5],
    [0,7,0,3,0,0,0,1,2],
    [1,2,0,0,0,7,4,0,0],
    [0,4,9,2,0,6,0,0,7]
]

def findEmpty(bo):
    for i in range(len(bo)):
        for j in range(len(bo[0])):
            if bo[i][j] == 0:
                return (i, j)
            
    return False

def checkValid(bo, num, pos):
    # SO we have the current position and the number we're testing so we need to check row first and see if num is already there then repeat for col and box
    for value in bo[pos[0]]:
        if value == num:
            return False
    for i in range(len(bo)):
        if (bo[i][pos[1]]) == num:
            return False
    xBox = pos[0] // 3
    yBox = pos[1] // 3
    # actualPos = (boxNum * 3) + posInBox 
    for i in range(xBox * 3, (xBox + 1) * 3):
        for j in range(yBox * 3, (yBox + 1) * 3):
            if bo[i][j] == num:
                return False
    return True

def printBoard(bo):
    for i in range(len(bo)):
        if i % 3 == 0 and i != 0:
            print("---------------------")
        for j in range(len(bo[0])):
            if j % 3 == 0 and j != 0:
                print("|", end=" ")
            if j == 8:
                print(bo[i][j])
            else:
                print(str(bo[i][j]), end=" ")

def solve(bo):
    if not findEmpty(bo):
        print("ALL DONE")
        printBoard(bo)
        return True
    else:
        currentPos = findEmpty(bo)
        for i in range(1,10):
            if checkValid(bo, i, currentPos):
                bo[currentPos[0]][currentPos[1]] = i

                if solve(bo):
                    return True

                bo[currentPos[0]][currentPos[1]] = 0


printBoard(board)
solve(board)