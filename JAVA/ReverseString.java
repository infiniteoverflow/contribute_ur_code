public class ReverseString {

    public static void main(String[] args) {

        String str= "Reverse";
        StringBuilder reverse = new StringBuilder();
        String[] letters = str.split("");

        for(int i=letters.length -1; i >=0; i--) {
            reverse.append(letters[i]);
        }

        System.out.println(reverse);

        if(str.equals(reverse.toString())) {
            System.out.println("Input is palindrome.");
        }
        else {
            System.out.println("Input is not palindrome.");
        }

    }

}
