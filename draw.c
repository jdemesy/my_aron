/* draw.c --- 
 * 
 * Filename: draw.c
 * Description: 
 * Author: Julien DEMESY
 * Maintainer: 
 * Created: Thu May 23 16:15:45 2013 (+0200)
 * Version: 
 * Last-Updated: Thu May 23 16:16:03 2013 (+0200)
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
 * Drawing functions
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

#include "draw.h"


void draw(void)
{

  /* Affiche l'écran */

  SDL_Flip(jeu.screen);


  /* Delai */

  SDL_Delay(1);

}



void delay(unsigned int frameLimit)
{

  /* Gestion des 60 fps (images/stories/seconde) */

  unsigned int ticks = SDL_GetTicks();

  if (frameLimit < ticks)
    {
      return;
    }

  if (frameLimit > ticks + 16)
    {
      SDL_Delay(16);
    }

  else
    {
      SDL_Delay(frameLimit - ticks);
    }
}

/* draw.c ends here */
