/* main.h --- 
 * 
 * Filename: main.h
 * Description: 
 * Author: Julien DEMESY
 * Maintainer: 
 * Created: Thu May 23 16:07:37 2013 (+0200)
 * Version: 
 * Last-Updated: Thu May 23 16:08:40 2013 (+0200)
 *           By: Julien DEMESY
 *     Update #: 1
 * URL: 
 * Doc URL: 
 * Keywords: 
 * Compatibility: 
 * 
 */

/* Commentary: 
 * 
 * Main Game Header
 * 
 */

/* Change Log:
 * Created and started file
 * 
 */

/* This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 3, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth
 * Floor, Boston, MA 02110-1301, USA.
 */

/* Code: */

#ifndef		MAIN_H_
#define		MAIN_H_

#include	"structs.h"

/* Prototypes des fonctions utilisées */

extern void init(char *);
extern void cleanup(void);
extern void getInput(void);
extern void draw(void);
extern void delay(unsigned int frameLimit);

/* Déclaration des structures globales utilisées par le jeu */

Input input;
Gestion jeu;

#endif		/*MAIN_H_*/
/* main.h ends here */
