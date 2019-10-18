using System;

namespace Hacktoberfest
{
    // Abstraction
    public abstract class Animal
    {
        private const int AGE_MAX = 100;
        private const int AGE_MIN = 0;
        private const int AGE_DEFAULT = 0;

        // Encapsulation
        private string name;
        private int age;

        protected Animal(string name, int age)
        {
            this.name = name;
            this.age = age;
        }


        public string Name
        {
            get { return name; }
            set { name = value; }
        }

        public int Age
        {
            get { return age; }
            set
            {
                if (value >= AGE_MIN && value <= AGE_MAX)
                {
                    age = value;
                }
                else
                {
                    age = AGE_DEFAULT;
                }
            }
        }

        public abstract string MakeASound();

        public override string ToString()
        {
            return string.Format("Name: {0}\nAge: {1}\nSound: {2}", name, age, MakeASound());
        }
    }
}