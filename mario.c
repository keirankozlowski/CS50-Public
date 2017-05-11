#include <stdio.h>
#include <cs50.h>

int main(void) 
{
	int height = 0;
	int spaces;
	int hashes;
	
	do 
	{
		printf("Height: ");
		height = get_int();
        if (height == 0)
        {
            printf("");
        }
	    
	} 
	while (height < 0 || height > 23);

	for(int i = 0; i < height; i++) 
	{
        for(spaces = 0; spaces < height-i-1; spaces++)
        {
            printf("%s", " ");
        }
        
		for(hashes = 0; hashes < i + 2; hashes++)
		{
			printf("#");
		}
		printf("\n");
	}	
}