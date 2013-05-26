### Makefile --- 
## 
## Filename: Makefile
## Description: 
## Author: Julien DEMESY
## Maintainer: 
## Created: Fri May 24 14:49:04 2013 (+0200)
## Version: 
## Last-Updated: 
##           By: 
##     Update #: 0
## URL: 
## Doc URL: 
## Keywords: 
## Compatibility: 
## 
######################################################################
## 
### Commentary: 
## 
## 
## 
######################################################################
## 
### Change Log:
## 
## 
######################################################################
## 
## This program is free software; you can redistribute it and/or
## modify it under the terms of the GNU General Public License as
## published by the Free Software Foundation; either version 3, or
## (at your option) any later version.
## 
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
## General Public License for more details.
## 
## You should have received a copy of the GNU General Public License
## along with this program; see the file COPYING.  If not, write to
## the Free Software Foundation, Inc., 51 Franklin Street, Fifth
## Floor, Boston, MA 02110-1301, USA.
## 
######################################################################
## 
### Code:

NAME	=	my_aron

CC	=	gcc
CFLAGS	=	`sdl-config --cflags` -I./include -Wall -Werror --ansi --pedantic -O2 -march=native
LIBS	=	`sdl-config --libs` -lSDL_image

RM	=	rm -rf

OBJ	=	main.o draw.o init.o input.o

$(NAME):	$(OBJ)
		$(CC) $(LIBS) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
		@$(RM) $(OBJ) *~

fclean:		clean
		@$(RM) $(NAME)

re:		fclean all

######################################################################
### Makefile ends here
