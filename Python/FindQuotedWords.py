sentance = input('Enter a sentence: ')
for word in sentance.split():
    if word.startswith('"') and word.endswith('"'):
        print(word)
