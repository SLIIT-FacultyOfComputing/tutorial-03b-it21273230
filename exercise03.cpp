#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length
struct box{
int Height, Width, Length;
};

// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
  struct box1;
  struct box2;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int HeightofBox1, WidthofBox1, LengthofBox1;
    int HeightofBox2, WidthofBox2, LengthofBox2;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> HeightofBox1;
    cout << "Enter Box 1 Width : ";
    cin >> WidthofBox1;
    cout << "Enter Box 1 Length : ";
    cin >> LengthofBox1;
    
    cout << "Enter Box 2 Height : ";
    cin >> HeightofBox2;
    cout << "Enter Box 2 Width : ";
    cin >> WidthofBox2;
    cout << "Enter Box 2 Length : ";
    cin >> LengthofBox2;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(HeightofBox1, WidthofBox1, LengthofBox1 )
             + volume(HeightofBox2, WidthofBox2, LengthofBox2);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume(int height, int width, int length)
{
  return height*width*length;
}