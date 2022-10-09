#include <stdio.h> 

int strlen(char *s); 
int strvowel(char *s); 
char *strcpy(char *dest, char *origin); 
char *strcat(char *dest, char *origin); 
char *strrev(char *s); 
int strcmp(char *s1,char *s2); 
int strnumb(char *s); 

int main()
{ 
  char name[]= "John Doe"; 
  char string[30] = "balbla"; 
  char hello[] = "Goku";
  
  printf("Size of the string name: %d\n", strlen(name)); 
  printf("How many vowels the name have? %d\n", strvowel("Jane")); 
  printf("Copy: %s\n", strcpy(string, "New Word")); 
  printf("Concat: %s\n", strcat(name, " Welcome")); 
  printf("Reverse: %s\n", strrev(hello));
  printf("Compare: %c\n", strcmp(hello,"Goku")); 
  printf("Digits: %d\n", strnumb("dkdfkd234dkf9kd")); 
  return 0; 
}

int strlen(char *s)
{ 
  register int i = 0; 
  while(s[i]!='\0')
    i++; 
  return i; 
}

int strvowel(char *s)
{ 
  register int i     = 0,
               vowel = 0; 

  while(s[i]!='\0')
  { 
    switch(s[i])
    { 
      case 'a':
      case 'A': 
      case 'e': 
      case 'E': 
      case 'i': 
      case 'I': 
      case 'o': 
      case 'O': 
      case 'u': 
      case 'U': vowel++; 
    }
    i++; 
  }
  return vowel; 
}

char *strcpy(char *dest, char *origin)
{ 
  register int i; 
  for(i=0;origin[i]!='\0';i++)
  { 
    dest[i] = origin[i]; 
  }
  dest[i] = '\0'; 
  return dest; 
}

char *strcat(char *dest, char *origin)
{ 
  register int i = 0, length = strlen(dest); 
  while(dest[i+length] = origin[i])
    i++; 
  return dest; 
}

char *strrev(char *s)
{ 
  register int i, length; 
  char aux; 
  for(i=0,length=strlen(s)-1;i<length;i++,length--)
  { 
    aux = s[i]; 
    s[i] = s[length]; 
    s[length] = aux; 
  }
  return s; 
}

int strcmp(char *s1, char *s2)
{
  register int i=0;    
  while(s1[i]==s2[i] && s1[i]!='\0')
    i++;

  return ((unsigned char)s1[i] - (unsigned char)s2[i]); 
}

int strnumb(char *s)
{ 
  register int i=0, number =0; 
  while(s[i]!='\0')
  { 
    i++; 
    if(isdigit(s[i])) number++; 
  }
  return number; 
}