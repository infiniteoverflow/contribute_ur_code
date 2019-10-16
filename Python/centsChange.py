#Python 3

def change(cent):
    quarter = dime = nickel = penny = coins = 0;
    
    while cent>0:
        if cent >= 25:
            quarter += 1
            cent -= 25
        elif cent >= 10 :
            dime += 1
            cent -= 10
        elif cent >= 5 :
            nickel += 1
            cent -= 5
        elif cent >= 1:
            penny += 1
            cent -= 1
        coins +=1
    
    print()
    print("Change : ")
    print(str(quarter) + " Quarter")
    print(str(dime) + " Dime")
    print(str(nickel) + " Nickel")
    print(str(penny) + " Penny")
    print()
    print(str(coins)+" Coins")

if __name__ == "__main__":
    change(int(input("How many cents? :")))