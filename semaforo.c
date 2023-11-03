#include <stdio.h>
#include <unistd.h>
void setSemV(){
  printf("semaforo veicoli verde\n");
  sleep(2);
  printf("semaforo veicoli arancione\n");
  sleep(2);
  printf("semaforo veicoli rosso\n\n");
  sleep(2);
}

void setSemP(){
  printf("semaforo pedoni rosso\n");
  sleep(2);
  printf("semaforo pedoni verde\n");
  sleep(2);
  printf("semaforo pedoni arancione\n");
  sleep(2);
  printf("semaforo pedoni rosso\n\n");
  sleep(2);
}

int main(void) {
  for(;;){
    char c = getchar();
    if(c == 'x'){
      return  0;
    }
  setSemV();
  setSemP();
  }
  return 0;
}
