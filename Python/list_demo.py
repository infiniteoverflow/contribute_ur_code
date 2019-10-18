i = 0
numbers = []

while i < 6:
    print(f'At the top i is {i}')
    numbers.append(i)

    i += 1
    print(f'Number now is {numbers}')
    print(f'At the bottm i is {i}')

print('The Numbers')
for number in numbers:
    print(number)
