def main():
    numbers_up_to_100 = [x for x in range(1, 101)]
    print("All of the numbers up to 100:")
    print(numbers_up_to_100)

    print()

    even_numbers = [x for x in numbers_up_to_100 if x % 2 == 0]
    print("All of the even numbers up to 100:")
    print(even_numbers)

    print()

    odd_numbers = [x for x in numbers_up_to_100 if x not in even_numbers]
    print("All of the odd numbers up to 100:")
    print(odd_numbers)

    even_squares = [x ** 2 for x in even_numbers]
    print("All of the even numbers up to 100 squared:")
    print(even_squares)

    print()

    numbers_dict = {x: y for x, y in zip(odd_numbers, even_numbers)}
    print("It works also with dictionaries!")
    print(numbers_dict)


if __name__ == '__main__':
    main()
