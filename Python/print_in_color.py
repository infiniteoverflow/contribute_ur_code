import colorama
from colorama import Fore, Back, Style


def main():
    colorama.init()

    print(Fore.CYAN)
    print("This is CYAN color!!!")
    print(Style.RESET_ALL)
    print("Now the colors have been reset\n")

    print("You can color only a single " + Fore.YELLOW + Back.WHITE + "word" + Style.RESET_ALL + " and than reset the colors")

    print(Fore.RED+Back.LIGHTGREEN_EX)
    print("Pay attention: Dark colors are not recommended, because it's hard to see them over the black console.")

    print(Style.RESET_ALL)
    print( Fore.GREEN + "H" + Fore.YELLOW + "A" + Fore.BLUE + "V" + Fore.CYAN + "E" + Fore.RED + " F" + Fore.WHITE + "U" + Fore.LIGHTGREEN_EX + "N")


if __name__ == '__main__':
    main()
