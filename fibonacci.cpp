//---------------------------------------------------------------------------

#pragma hdrstop

#include "Fibonacci.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Fibonacci::Fibonacci()
{
        // initialize first numbers        
        firstNumber = secondNumber = 1;
}

int Fibonacci::Get()
{
        int newNumber = firstNumber + secondNumber;

        firstNumber = secondNumber;
        secondNumber = newNumber;
        return newNumber;
}#ifndef FibonacciH
#define FibonacciH

class Fibonacci{
        int firstNumber,
            secondNumber;

        public:
        Fibonacci();
        int Get();
        int Set(int currentNumber);
};

int Fibonacci::Set(int currentNumber)
{
        if(currentNumber < 0)
        {
                return -1; // ne moje da zadelqme otricatelno chislo pamet
        }

        int newNumber;
        if(currentNumber <= firstNumber)
        {
                do{
                        newNumber = secondNumber - firstNumber;
                        secondNumber = firstNumber;
                        firstNumber = newNumber;
                } while(firstNumber > currentNumber);
        }

        while(Get() <= currentNumber){}

        //Get();
        return Get();
}
