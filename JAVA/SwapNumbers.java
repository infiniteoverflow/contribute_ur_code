public class SwapNumbers {

    public static void main(String[] args) {

        int x = 75;
        int y = 50;

        System.out.println("Before Swapping\nx = " + x + "\ny = " + y);

        x = x + y;
        y = x - y;
        x = x - y;

        System.out.println("After Swapping\nx = " + x + "\ny = " + y);

    }

}
