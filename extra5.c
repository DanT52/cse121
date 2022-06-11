#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
int encrypt_data(FILE *); 
int main (void) 
{ 
   FILE  *file_ptr; 
   int   return_code;  
  char file_name[100];

  printf("File for encrypting: \n");
  scanf("%s", file_name);

  file_ptr = fopen(file_name, "r+");
   
   //get file name from user, then do fopen( ...) for reading & writing 
   
   return_code = encrypt_data( file_ptr ); 
   
   fclose(file_ptr); 
   return 0; 
} 
int encrypt_data(FILE *disk_file_ptr) 
{ 
   
   int i;                       // Used to index through file_buffer 
   unsigned long int file_size; // Holds number of bytes in the file 
   int key_length;              // Holds length of encryption key 
   char *file_buffer = NULL; 
   char key[] = "ABC";  //default encryption key, you can change to 
                           //something else if you  
                           //want ( e.g. key[] = “12Ygh9sss”; ) 
   key_length  = strlen(key); 
     
        
   fseek(disk_file_ptr, 0, SEEK_END); // Move file_pointer to end of file. 
   file_size = ftell(disk_file_ptr);  // Get current file pointer location 
                                      // (which will be the size of the file 
                                      // in bytes) 
    
   rewind(disk_file_ptr); //Move file_pointer back to beginning of file 
  
   //Next step is to allocate RAM memory to hold all the bytes that are 
   //currently stored on the HardDisk 
   file_buffer = malloc(file_size); 
 
         
   //Read file bytes into RAM file_buffer (which is just an array of chars) 
   if( fread(file_buffer, file_size, 1, disk_file_ptr) != 1) 
   { 
     printf("Error in reading file\n"); 
     return -1; //returning error code 
   } 
     
   for( i=0; i<file_size; i++) //Loop through each byte of file_buffer 
   { 
     //XOR encryption step 
     file_buffer[i] = file_buffer[i] ^ key[i%key_length]; 
   } 
   rewind(disk_file_ptr); //Move file_pointer back to beginning of file 
              
     
   // Write encrypted bytes (in file_buffer) back to Disk File 
   if ( fwrite(file_buffer, file_size, 1, disk_file_ptr) != 1 ) 
   { 
       printf("Error in writing encrypted data to file\n"); 
       return -1; //returning error code 
   } 
     
   free(file_buffer); //returning RAM memory back to the system 
   
     
   return 0; //returning success code 
}