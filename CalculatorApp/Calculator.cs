using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CalculatorApp
{

    public class Calculator
    {
        public double Add(double a, double b)
        {
            double result = a + b;
            return result;
        }
        public double Subtract(double a, double b)
        {
            double result = a - b;
            return result;
        }
        public double Multiple(double a, double b)
        {
            double result = a * b;
            return result;
        }
        public double Divide(double a, double b)
        {
            return 0;
        }
    }
}
