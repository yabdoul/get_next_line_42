#include  "get_next_line_utils.h"
char *  get_next_line(char * line)
{ 
    static char *reminder ; 
    char *new_line; 
    int  i = 0; 
  if(ft_strchr(line,'\n'))
  { 
    int i = 0 ;
    while(line)
    { 
        new_line[i] = line[i] ; 
          if(line[i]  == '\n') 
           {
           reminder  = line+i+1 ;
           printf("reminder : %s" ,reminder); 
           printf("getted  line : %s " , new_line) ; 
           return new_line; 
           }
           i++;
    }
  }
}
char * read_from_file(int fd )
{ 
    char * tmp ; 
    tmp =  malloc((size_t)BUFFER_SIZE +  1); 
    int check ; 
    while( check > 0)
    { 
        check = read(fd,tmp ,BUFFER_SIZE);
        if(check == -1 )
        {
            free(tmp); 
            return NULL ; 
        }
     return get_next_line(tmp); 
    }
}

int main()
 { 
int fd = open("example.txt",O_RDWR); 
read_from_file(fd) ;
return 0 ; 

 }