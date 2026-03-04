/*
	Name: STRLEN.C
	
	Copyright: (C) 2026 E. Gaiworonski
	This program is free software: you can redistribute it and/or modify
 	it under the terms of the GNU General Public License as published 
	by the Free Software Foundation, either version 3 of the License, 
	or (at your option) any later version.
 
  	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty 
	of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
	See the GNU General Public License for more details.
  	You should have received a copy of the GNU General Public License
 	along with this program.  If not, see <https://www.gnu.org/licenses/>.
 
	Author: E. Gaiworonski
	Date: 04.03.26 11:33
	Description: A recursive function to count the number of characters in a string
*/

#include <stdio.h>
#include <string.h>

long length(char* st) {
	if (*st == '\0') return 0;
	else return 1 + length(st + 1);
}	
    
int main() {
	char st[1000];
	
	printf(">"); fgets(st, sizeof(st), stdin);
	st[strcspn(st, "\n")] = '\0';
	printf("\n%ld\n", length(st));	
	getchar();
	return 0;
}
