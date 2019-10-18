import java.util.Arrays;
import java.util.Scanner;

/**
 * Examples of Linear Search
 */
class LinearSearch { 

	/** 
   * This function returns index of element x in arr[] 
   * @param arr Array of integers
   * @param x value to look for
   * @param partial partial or full search (Stop when found first or not)
   *  
   */
	static String search(int arr[], int x, boolean partial) 
	{ 
    String indexes = "";
    if (partial) {
      indexes += "Partial Search: ";
      boolean isFound = false;

      for (int i = 0; i < arr.length && !isFound; i++) { 


        System.out.println(arr[i] + " == " + x + " ? " + (arr[i] == x));

        // Return the index of the element/s if found
        if (arr[i] == x) {
          indexes += "[" + String.valueOf(i) + "]"; 
          isFound = true;
        }
      }
    } 
    else {
      indexes += "Full Search: ";
      for (int i = 0; i < arr.length; i++) { 

        System.out.println(arr[i] + " == " + x + " ? " + (arr[i] == x));

        // Return the index of the element/s if found
        if (arr[i] == x) 
          indexes += "[" + String.valueOf(i) + "]"; 
      }
    }

		// return the indexes of the elements
		return indexes; 
	} 

	public static void main(String[] args) 
	{ 
		int[] arr = { 3, 4, 1, 7, 5, 6, 10, 9, 3, 7, 7 }; 
    
    System.out.println("Array to be searched:" + Arrays.toString(arr));

    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the value to search:");

    int x = sc.nextInt();

    System.out.println("\nPartial Search?");
    boolean partial = sc.next().equalsIgnoreCase("true");

    String index = search(arr, x, partial); 

		if (index.equals("")) 
			System.out.println("\nElement is not present in the array"); 
		else
      System.out.println("\nElement/s found at position/s: " + index); 
      
    sc.close();
	} 
} 