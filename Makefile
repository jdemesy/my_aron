### Makefile --- 
## 
## Filename: Makefile
## Description: 
## Author: Julien DEMESY
## Maintainer: 
## Created: Thu May 23 16:17:21 2013 (+0200)
## Version: 
## Last-Updated: Thu May 23 16:31:17 2013 (+0200)
##           By: Julien DEMESY
##     Update #: 8
## URL: 
## Doc URL: 
## Keywords: 
## Compatibility: 
## 
######################################################################
## 
### Commentary: 
## 
## Aron Makefile
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

CC=gcc
CFLAGS=-I./include -lSDL -lm
DEPS = *.h
OBJ = main.o init.o input.o draw.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

aron: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o *~

fclean:	clean
	rm -rf aron
######################################################################
### Makefile ends here
