# PPS-CT1

## Problem Description:
Laasya bought a new volleyball in the sports shop. It looks like a medium size. She somehow found the radius of the sphere. But she would like to know the volume of that ball. Can you help him in finding the Volume of the ball?


## Functional Description:


Volume = (4.0/3.0) × π × r^3
π = 3.14

## Constraint:
1.00 ≤ r ≤ 5.00

## Input Format :
The only line of input has a single value of type float representing the radius of the ball.

## Output Format:
Print the volume of the ball in a single line.

## Code:

      #include <stdio.h>
      #include <math.h>
      int main()
      {
        // Code by Manvi Singhal-RA2111003010711
        float radiusofball, volumeofball;
        scanf("%f", &radiusofball);  
        volumeofball = (4.0/3.0) * 3.14 * pow(radiusofball,3);
        printf("%f",volumeofball);
        return 0;
      }
##  TestCase 1:
 <img width="927" alt="Test Case 1" src="https://user-images.githubusercontent.com/91384699/166156722-d856cd68-53c3-4a8d-8072-c770dbc0f4ce.png">

## TestCase 2:
  <img width="927" alt="Test Case 2" src="https://user-images.githubusercontent.com/91384699/166156964-aa6388a3-5765-4828-82c6-29761cbb9149.png">
