/*
    Bit Manipulation Demo

    This program demonstrates basic bit manipulation operations on an integer.
    It shows how to:
      - Display a number in decimal, hexadecimal, and binary formats
      - Get (read) the value of the nth bit
      - Set the nth bit to 1
      - Clear the nth bit to 0
      - Toggle (invert) the nth bit

    Each operation is printed with the result in all three formats.
*/

#include <iostream>
#include <vector>
#include <string>
#include <bitset>

using namespace std;

int main()
{
     int number = 12345;
     int n = 2; // bit number to manipulate

     // Display the original number in decimal, hex, and binary
     cout << "original number is " << number;
     cout << ", hex: 0x" << hex << number << dec;
     cout << ", binary: 0b" << bitset<16>(number) << endl
          << endl;

     // Get the nth bit (read the value at position n)
     // (number >> n) & 1 shifts the nth bit to the least significant position and masks it.
     int bit = (number >> n) & 1;

     // Alternative way to test the nth bit
     // (number & (1 << n)) >> n masks all bits except the nth, then shifts it to the least significant position.
     int t1 = (number & (1 << n)) >> n;

     cout << "get bit at " << n << "th bit, the value is: " << bit << endl;
     cout << "test bit at " << n << "th bit, the number is: " << t1 << endl
          << endl;

     // Set the nth bit to 1
     // (number | (1 << n)) sets the nth bit to 1.
     number |= (1 << n);
     cout << "set bit at " << n << "th bit, the number is: " << number;
     cout << ", hex: 0x" << hex << number << dec;
     cout << ", binary: 0b" << bitset<16>(number) << endl
          << endl;

     // Clear the nth bit to 0
     // (number & ~(1 << n)) clears the nth bit to 0.
     number &= ~(1 << n);
     cout << "clear bit at " << n << "th bit, the number is: " << number;
     cout << ", hex: 0x" << hex << number << dec;
     cout << ", binary: 0b" << bitset<16>(number) << endl
          << endl;

     // Toggle (invert) the nth bit
     // (number ^ (1 << n)) toggles the nth bit.
     number ^= (1 << n);
     cout << "togggle bit at " << n << "th bit, the number is: " << number;
     cout << ", hex: 0x" << hex << number << dec;
     cout << ", binary: 0b" << bitset<16>(number) << endl
          << endl;

     int GPIO_PORTF_DATA_R = 0x08; // Example: write to bit (not used further)
     cout << GPIO_PORTF_DATA_R << endl;
}