/*------------------------------------------------------------------------------
 *                      HTBLA-Leonding / Class: 3ACIF
 *------------------------------------------------------------------------------
 *                      Jan Ritt
 *------------------------------------------------------------------------------
 *  Description:   Eingelesen wird ein Betrag, das Program errechnet die
					 Steuern
 *----------------------------------------------------------------------------*/

#include <stdio.h>	// input/output library    -  printf, scanf, ..
#include <string.h> // string handling library -  strlen, strcpy, strcmp, ..

int main(void)
{
  float gewicht;
  float groesse;
  float bmi;
  printf("Bitte geben Sie ihr Gewicht in Kg ein: ");
  scanf(" %f", &gewicht);
  printf("Bitte geben Sie ihre Groesse in m ein (zB 1.85): ");
  scanf(" %f", &groesse);
  bmi = gewicht / (groesse * groesse);
  if (bmi < 17.5)
    printf("Sie haben erhebliches Untergewicht !\n");
  else if (bmi < 18.5)
    printf("Sie haben leichtes Untergewicht !\n");
  else if (bmi < 25)
    printf("Sie haben normales Gewicht !\n");
  else if (bmi < 30)
    printf("Sie haben leichtes Uebergewicht !\n");
  else if (bmi < 40)
    printf("Sie haben starkes Uebergewicht !\n");
  else
    printf("Sie haben extremes Uebergewicht !\n");

  //  END PROGRAM  //
  printf("\nEingabetaste zum Beenden druecken.");
  while (getchar() != '\n')
    ; //  wait for [Enter]-Key
  getchar();
  return 0;
}