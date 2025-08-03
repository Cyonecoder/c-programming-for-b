//
// Created by NBJ on 7/30/2025.
//



#include <stdio.h>


enum Day{ Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
int main (){

  for (enum Day day =Monday; day<=Sunday;++day) {

  if (day ==Wednesday)
    continue;
  printf("%d is not Wedensday\n",day);

  }


}

