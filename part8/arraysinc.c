//
// Created by NBJ on 7/31/2025.
//

#include <stdio.h>

int main () {

long long numbers[10];
    numbers[0] = 109;
    printf("size is %zu\n",sizeof(numbers));
  for (int i=0;i<10;i++){
    printf("%d\n",numbers[i]);
}
///// initialisation /////
    long initArr[5]={[3]=100,[2]=200};
    int sizear = sizeof(initArr)/sizeof(initArr[0]);
    printf("size is init  is %d\n",sizear);
    for (int b=0;b<sizear;b++)
        printf("init is %d\n",initArr[b]);
}