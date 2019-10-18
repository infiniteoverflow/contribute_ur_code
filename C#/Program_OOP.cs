using System;

namespace Hacktoberfest
{
    public class Program
    {
        static void Main(string[] args)
        {
            // Polymorphism
            Animal a = new Cat("Tom", 20, "David");
            Console.WriteLine(a);

            // In order to use the DrinkMilk method, a casting is needed.
            ((Cat)a).DrinkMilk();
        }
    }
}
