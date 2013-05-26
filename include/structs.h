/* structs.h --- 
 * 
 * Filename: structs.h
 * Description: 
 * Author: Julien DEMESY
 * Maintainer: 
 * Created: Thu May 23 16:02:57 2013 (+0200)
 * Version: 
 * Last-Updated: Thu May 23 16:04:43 2013 (+0200)
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
 * Game Engine Structures
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

#ifndef		STRUCTS_H_
#define		STRUCTS_H_


#include "defs.h"

/* Structures qui seront utilisées pour gérer le jeu */

/* Structure pour gérer l'input (clavier puis joystick) */

typedef struct Input
{

  int left, right, up, down, jump, attack, enter, erase, pause;

} Input;


/* Structure pour gérer le niveau (à compléter plus tard) */

typedef struct Gestion
{

  SDL_Surface *screen;

} Gestion;

/* Structure pour gérer la map à afficher */

typedef struct Map
{
  SDL_Surface *background;
} Map;

#endif		/*STRUCTS_H_*/

/* structs.h ends here */
