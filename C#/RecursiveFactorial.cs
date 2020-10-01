using System;

namespace RecursiveFactorial
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter limit: ");
            Console.WriteLine(recursiveFactorial(Int32.Parse(Console.ReadLine())));
        }

        static int  recursiveFactorial(int input)
        {
            return (input == 1 || input == 0) ? 1 : input * recursiveFactorial(input - 1);
        }
        
    }
}