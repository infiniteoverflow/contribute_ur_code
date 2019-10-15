# NUMBER REPRESENTATION AND CONVERSION PYTHON PROGRAM
# (c) 2019 Tafadzwa Muteke. All rights reserved.
# https://github.com/tmuteke

def encode(digits):
    encode_map = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    if max(digits) >= len(encode_map):
        raise ValueError
    return ''.join([encode_map[x] for x in digits])


def from_base_ten(number, base):
    if 2 >= base >= 36:
        raise ValueError('Base too big')
    digits = []
    while number > 0:
        number, remainder = divmod(number, base)
        digits.append(remainder)
    return digits[::-1]


def to_base_ten(str_number, base):
    return int(str_number, base)


def init():
    print('Represent numbers from one base to another; base 2 through base 36')
    number = input('Enter your number: ')
    base = int(input('Enter its base: '))
    repr_in_base = int(input('Represent in base: '))

    in_base_ten = to_base_ten(number, base)
    number_repr = encode(from_base_ten(in_base_ten, repr_in_base))
    print('{}[{}] = {}[{}]'.format(number, base, number_repr, repr_in_base))


init()