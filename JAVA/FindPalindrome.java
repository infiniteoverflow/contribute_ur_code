class FindPalindrome {
     public static void main(String[] args) {
          //tests
          //true
          String test = "racecar";
          System.out.println(isPalindrome(test, 0, test.length()-1));

          //false
          test = "billy";
          System.out.println(isPalindrome(test, 0, test.length()-1));

          
     }

     //check if string is Palindrome
     static boolean isPalindrome(String s, int left, int right) {
          while(left < right) {
               if(s.charAt(left) != s.charAt(right)) {
                    return false;
               }

               left++;
               right--;
          }

          return true;
     }
}
