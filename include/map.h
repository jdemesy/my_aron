/* map.h --- 
 * 
 * Filename: map.h
 * Description: 
 * Author: Julien DEMESY
 * Maintainer: 
 * Created: Mon May 27 17:35:36 2013 (+0200)
 * Version: 
 * Last-Updated: 
 *           By: 
 *     Update #: 0
 * URL: 
 * Doc URL: 
 * Keywords: 
 * Compatibility: 
 * 
 */

/* Commentary: 
 * 
 * 
 * 
 */

/* Change Log:
 * 
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

#ifndef		MAP_H_
#define		MAP_H_

#include	"structs.h"

extern void drawImage(SDL_Surface*, int, int);
extern void drawTile(SDL_Surface *image, int destx, int desty, int srcx, int srcy);

extern Gestion jeu;
extern Map map;

#endif		/*MAP_H_*/

/* map.h ends here */
