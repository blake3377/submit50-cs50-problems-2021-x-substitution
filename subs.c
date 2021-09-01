#import <stdlib.h>
#import <cs50.h>
#import <string.h>
#import <ctype.h>
#import <math.h>
#import <stdio.h>

int main(int argc, string argv[]){
    
    //getting key again for argv !=2
    if (argc<2 || argc>2){
        
      printf("%s key\n", argv[0]);
    }
    
    int length = strlen(argv [1]);

      
    //if key is not 26 characters
    
    if(length != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
   
    //getting key again if it is not a number
    
    for(int i=0; i<length; i++){
        
        if(isdigit(argv[1][i]) !=0){
            printf("./substitution key\n");
            return 1;
        }
        
    //checking lowercase or uppercase key and equalizing them
    for(int j=0; j<length; j++){
        
        char c = argv[1][j];
        
        if(islower(c)){
            c = isupper(c);
        }
         if(isupper(c)){
            c = islower(c);
        }
    }    
        
        
    //checking for repeated chars in key
    
    for(int k=0; k<length; k++){
        
        char c = argv[1][k];
        
        for(int l=1; l<k; l++){
        
        char ch = argv[1][l];
        
        if(c == ch ){
    
            return 1;
        }
    }   }
    
        
      
    }
      
    //getting plaintext from user
    
      string plaintext =get_string("Plaintext:");
      
      printf("Ciphertext:");
      
      int len = strlen (plaintext);
      
     
      
      char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
      char Alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
     
   
   //cyphertext
   
      for(int z=0; z<len; z++){
          
        char a = plaintext[z];
        if(islower(plaintext[z])){
         for(int s=0; s<26; s++){
             if(a == alphabet[s]){
             printf("%c", tolower(argv[1][s]));
          }
        }
        }
        else if(isupper(plaintext[z])){
         for(int s=0; s<26; s++){
             if(a == Alphabet[s]){
             printf("%c", toupper(argv[1][s]));
             }
          } 
        }
       else
        {
            printf("%c",plaintext[z]);
        }
        
    }
       printf("\n");
}
