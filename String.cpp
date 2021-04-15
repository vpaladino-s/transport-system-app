#include "String.h"


String :: String(){
    cadena = new char[1];
    cadena[0] = '\0';
}

String :: String(char* s){
    int largo = strlen(s);
    cadena = new char[largo+1];
    strcpy(cadena,s);
}

String :: String(const String &otro){
    int largo = strlen(otro.cadena);
    cadena = new char[largo+1];
    strcpy(cadena,otro.cadena);
}

String :: ~String(){
    delete [] cadena;
}

String String :: operator=(const String &otro){
    if (this != &otro){
        delete [] cadena;
        int largo = strlen(otro.cadena);
        cadena = new char[largo+1];
        strcpy(cadena,otro.cadena);
    }
    return (*this);
}


bool String :: operator== (String otro){
    return (bool) (strcmp(cadena,otro.cadena) == 0);
}

bool String :: operator< (String otro){
    return (bool) (strcmp(cadena,otro.cadena) < 0);
}


void String :: scan(){
    char aux[MAX];
    cin.clear();
    char c = cin.get();
    int i=0;
    while (c!='\n' && i<MAX-1){
        aux[i] = c;
        i++;
        c = cin.get();
    }
    aux[i]='\0';
    cadena = new char[i+1];
    strcpy(cadena,aux);
}

void String :: print(){
    cout << cadena;
}

int String :: toNumero(){

    int i = 0;
    int suma = 0;
    while (cadena[i]!='\0'){
        suma = cadena[i];
        i++;
    }
    return suma;
}
