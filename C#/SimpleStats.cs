using System;

class SimpleStats
{
    /// <summary>
    /// Ask user to enter numbers then compute the average
    /// of those numbers
    /// </summary>
    public static void ComputeAverage()
    {
        double total = 0, counter = 0;

        // display instructions
        Console.WriteLine("I will compute the average of numbers.");
        Console.WriteLine("Enter as many numbers as you want,");
        Console.WriteLine("Or press enter to see the result.\n\n");
        Console.WriteLine("Start entering numbers: ");

        // get input from user
        while (true)
        {
            double temp;
            var value = Console.ReadLine();
            if (String.IsNullOrEmpty(value)) break;
            if (double.TryParse(value, out temp))
            {
                total += temp;
                counter++;
            }
        }

        // display result
        if (counter > 0)
        {
            var avg = total / counter;
            Console.WriteLine($"You entered {counter} valid numbers.");
            Console.WriteLine($"Average {avg:N2}.");
        }
        else
        {
            Console.WriteLine("You did not enter any valid numbers.");
        }
    }
}
