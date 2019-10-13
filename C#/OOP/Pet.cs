using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Hacktoberfest
{
    // Inheritance
    public abstract class Pet : Animal
    {
        private string owner;

        protected Pet(string name, int age, string owner) : base(name, age)
        {
            this.owner = owner;
        }

        public string Owner
        {
            get { return owner; }
            set { owner = value; }
        }

        public override string ToString()
        {
            return string.Format("{0}\nOwner: {1}", base.ToString(), owner);
        }
    }
}
