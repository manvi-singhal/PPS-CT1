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
