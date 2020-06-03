import java.util.Scanner;

public class TowerOfHanoi {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of disks: ");
        int noOfDisks = scanner.nextInt();

        towerOfHanoi(noOfDisks, 'A', 'C', 'B');
    }

    private static void towerOfHanoi(int n, char from_rod, char to_rod, char auxillary_rod) {
        if (n == 1) {
            System.out.println("Move disk 1 from rod " + from_rod + " to rod " + to_rod);
            return;
        }
        towerOfHanoi(n - 1, from_rod, auxillary_rod, to_rod);
        System.out.println("Move disk " + n + " from rod " + from_rod + " to rod " + to_rod);
        towerOfHanoi(n - 1, auxillary_rod, to_rod, from_rod);
    }
}
