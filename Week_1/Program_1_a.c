// Set of all strings over binary alphabet containing even number of 0’s and even number of 1’s.
#include<stdio.h>
void
main ()
{
  
int state = 0, i = 0;
  

char current, input[20];
  
printf ("Enter input:");
  
scanf ("%s", input);
  
while ((current = input[i++]) != '\0')
    {
      
switch (state)
	
	{
	
case 0:
	  if (current == 'a')
	    
state = 1;
	  
	  else if (current == 'b')
	    
state = 2;
	  
	  else
	    
	    {
	      
printf ("Invalid token");
	      
exit (0);
	    
}
	  
break;
	
case 1:
	  if (current == 'a')
	    
state = 0;
	  
	  else if (current == 'b')
	    
state = 3;
	  
	  else
	    
	    {
	      
printf ("Invalid token");
	      
exit (0);
	    
}
	  
break;
	
case 2:
	  if (current == 'a')
	    
state = 3;
	  
	  else if (current == 'b')
	    
state = 0;
	  
	  else
	    
	    {
	      
printf ("Invalid token");
	      
exit (0);
	    
}
	  
break;
	
case 3:
	  if (current == 'a')
	    
state = 2;
	  
	  else if (current == 'b')
	    
state = 1;
	  
	  else
	    
	    {
	      
printf ("Invalid token");
	      
exit (0);
	    
}
	  
break;
	
}
    
}
  
if (state == 0)
    
printf ("String accepted\n");
  
  else
    
printf ("String not accepted\n\n");

}
