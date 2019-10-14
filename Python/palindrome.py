# Python program to check if a string is a palindrome or not

s = input("Enter your string: ")  
  
def isPalindrome(s):
    s.lower()
    rev = s[::-1]
  
    if (s == rev): 
        return True
    return False

print(isPalindrome(s))

if __name__ == "__main__":
    isPalindrome(s)