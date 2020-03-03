#include <stdio.h>
#include <stdlib.h>

int main() {
  //Limpiar Bufer
  setbuf(stdout, NULL);

  //Pide por host
  printf("Ingrese un numero de host: \n");
  int host = 0;
  scanf("%d", &host);

  //Inicializar variables del subred
  int ipa = 200;
  int ipb = 5;
  int ipc = 35;

  //Corrimiento de Bits
  int num1 = 16;
  int num2 = 16<<1; //32
  int num3 = num2<<1; //64
  int num4 = 96; //96
  int num5 = num3<<1; //128
  int num6 = 160; //160
  int num7 = 192; //192
  int num8 = 224; //224

  /////SUBRED 1/////
  //Pertenece al subred 1 :)
  if (host>0 && host<num2) {
    printf("La dirección IP del host es %d.%d.%d.%d y pertenece al subred 1.\n", ipa, ipb, ipc, host);
  }

  //error ID de subred 1
  if (host==0) {
    printf("La dirección IP no puede ser asignada a un host debido a que es la dirección que identifica a la subred 1");
  }

  //error broadcast de subred 1
  if (host==31) {
    printf("La dirección no puede ser asignada a un host debido a que es la dirección de broadcast de la subred 1");
  }

  /////SUBRED 2/////
  //Pertenece al subred 2 :)
  if (host>num2 && host<num3) {
    printf("La dirección IP del host es %d.%d.%d.%d y pertenece al subred 2.\n", ipa, ipb, ipc, host);
  }

  //error ID de subred 2
  if (host==32) {
    printf("La dirección IP no puede ser asignada a un host debido a que es la dirección que identifica a la subred 2");
  }

  //error broadcast de subred 2
  if (host==63) {
    printf("La dirección no puede ser asignada a un host debido a que es la dirección de broadcast de la subred 2");
  }

  /////SUBRED 3///// //Pertenece al subred 3 :)
  if (host>num3 && host<num4) {
    printf("La dirección IP del host es %d.%d.%d.%d y pertenece al subred 3.\n", ipa, ipb, ipc, host);
  }

//error ID de subred 3
if (host==64) {
  printf("La dirección IP no puede ser asignada a un host debido a que es la dirección que identifica a la subred 3");
}

//error broadcast de subred 3
if (host==95) {
  printf("La dirección no puede ser asignada a un host debido a que es la dirección de broadcast de la subred 3");
}

/////SUBRED 4/////
//Pertenece al subred 4 :)
if (host>num4 && host<num5) {
  printf("La dirección IP del host es %d.%d.%d.%d y pertenece al subred 4.\n", ipa, ipb, ipc, host);
}

//error ID de subred 4
if (host==96) {
  printf("La dirección IP no puede ser asignada a un host debido a que es la dirección que identifica a la subred 4");
}

//error broadcast de subred 4
if (host==127) { 
  printf("La dirección no puede ser asignada a un host debido a que es la dirección de broadcast de la subred 4");
}

/////SUBRED 5/////
//Pertenece al subred 5 :)
if (host>num5 && host<num6) {
  printf("La dirección IP del host es %d.%d.%d.%d y pertenece al subred 5.\n", ipa, ipb, ipc, host);
}

//error ID de subred 5
if (host==128) {
  printf("La dirección IP no puede ser asignada a un host debido a que es la dirección que identifica a la subred 5");
}

//error broadcast de subred 5
if (host==159) {
  printf("La dirección no puede ser asignada a un host debido a que es la dirección de broadcast de la subred 5");
}

/////SUBRED 6/////
//Pertenece al subred 6 :)
if (host>num6 && host<num7) {
  printf("La dirección IP del host es %d.%d.%d.%d y pertenece al subred 6.\n", ipa, ipb, ipc, host);
}

//error ID de subred 6
if (host==160) {
  printf("La dirección IP no puede ser asignada a un host debido a que es la dirección que identifica a la subred 6");
}

//error broadcast de subred 6
if (host==191) {
  printf("La dirección no puede ser asignada a un host debido a que es la dirección de broadcast de la subred 6");
}

/////SUBRED 7/////
//Pertenece al subred 7 :)
if (host>num7 && host<222) {
  printf("La dirección IP del host es %d.%d.%d.%d y pertenece al subred 7.\n", ipa, ipb, ipc, host);
}

//error ID de subred 7
if (host==192) {
  printf("La dirección IP no puede ser asignada a un host debido a que es la dirección que identifica a la subred 7");
}

//error broadcast de subred 7
if (host==223) {
  printf("La dirección no puede ser asignada a un host debido a que es la dirección de broadcast de la subred 7");
}


  return 0;
}