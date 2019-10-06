using System;

namespace BubbleSort
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Bubble sort algorithm");

            int[] array = { 20, 50, 10, 70, 100, 60, 30, 40, 90, 80 };

            Console.WriteLine("Array before sort:");
            for (int i = 0; i < array.Length; i++)
            {
                Console.Write(array[i] + " ");
            }

            for (int i = 0; i < array.Length; i++)
            {
                for (int j = 0; j < array.Length - 1; j++)
                {
                    if (array[j] > array[j + 1])
                    {
                        int temp = array[j + 1];
                        array[j + 1] = array[j];
                        array[j] = temp;
                    }
                }
            }

            Console.WriteLine("\nArray after sort:");
            for (int i = 0; i < array.Length; i++)
            {
                Console.Write(array[i] + " ");
            }

            Console.Write("\nEnter any key to continue: ");
            Console.ReadKey();
        }
    }
}
