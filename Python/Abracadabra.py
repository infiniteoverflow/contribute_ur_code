while True:
    try:
        palavra = input()
        palavra = ''.join(list(map(lambda x: x+' ', list(palavra))))
        for i in range(len(palavra) // 2):
            print(palavra[:-1])
            palavra = ' ' + palavra[:-2]

        print()
    except EOFError:
        break
