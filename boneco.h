#include <stdio.h>
#include <stdlib.h>

#ifndef BONECO_H
#define BONECO_H

void mostrar_forca(int boneco) {
	switch(boneco) {
	case 0:
		system("cls");
		printf("\n\t %c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 187);
		printf("\n\t %c     | ",186);
		printf("\n\t %c    \\%c/",186, 1);
		printf("\n\t %c     | ",186);
		printf("\n\t %c    / \\",186);
		printf("\n\t %c       ",186);
		printf("\n\t%c%c%c     ",205,202,205);
		break;
	case 1:
		system("cls");
		printf("\n\t %c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 187);
		printf("\n\t %c     | ",186);
		printf("\n\t %c    \\%c/",186, 1);
		printf("\n\t %c     | ",186);
		printf("\n\t %c    /  ",186);
		printf("\n\t %c       ",186);
		printf("\n\t%c%c%c     ",205,202,205);
		break;
	case 2:
		system("cls");
		printf("\n\t %c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 187);
		printf("\n\t %c     | ",186);
		printf("\n\t %c    \\%c/",186, 1);
		printf("\n\t %c     | ",186);
		printf("\n\t %c       ",186);
		printf("\n\t %c       ",186);
		printf("\n\t%c%c%c     ",205,202,205);
		break;
	case 3:
		system("cls");
		printf("\n\t %c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 187);
		printf("\n\t %c     | ",186);
		printf("\n\t %c     %c/",186, 1);
		printf("\n\t %c     | ",186);
		printf("\n\t %c       ",186);
		printf("\n\t %c       ",186);
		printf("\n\t%c%c%c     ",205,202,205);
		break;
	case 4:
		system("cls");
		printf("\n\t %c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 187);
		printf("\n\t %c     | ",186);
		printf("\n\t %c     %c ",186, 1);
		printf("\n\t %c     | ",186);
		printf("\n\t %c       ",186);
		printf("\n\t %c       ",186);
		printf("\n\t%c%c%c     ",205,202,205);
		break;
	case 5:
		system("cls");
		printf("\n\t %c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 187);
		printf("\n\t %c     | ",186);
		printf("\n\t %c     %c ",186, 1);
		printf("\n\t %c       ",186);
		printf("\n\t %c       ",186);
		printf("\n\t %c       ",186);
		printf("\n\t%c%c%c     ",205,202,205);
		break;
	}
}
#endif