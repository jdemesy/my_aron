/* init.c --- 
 * 
 * Filename: init.c
 * Description: 
 * Author: Julien DEMESY
 * Maintainer: 
 * Created: Thu May 23 16:10:44 2013 (+0200)
 * Version: 
 * Last-Updated: Thu May 23 16:11:56 2013 (+0200)
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
 * Initialisation functions
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

#include "init.h"

/* Fonction qui initialise le jeu */

void init(char *title)
{
  
  /* Initialise SDL Video. Si la valeur de retour est inférieure à zéro, la SDL n'a pas pu
     s'initialiser et on quite */

  if (SDL_Init(SDL_INIT_VIDEO ) < 0)
    {
      printf("Could not initialize SDL: %s\n", SDL_GetError());
      exit(1);
    }


  /* On crée la fenêtre, représentée par le pointeur jeu.screen en utilisant la largeur et la
     hauteur définies dans les defines (defs.h). On utilise aussi la mémoire vidéo
     (SDL_HWPALETTE) et le double buffer pour éviter que ça scintille
     (SDL_DOUBLEBUF) */

  jeu.screen = SDL_SetVideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, 0,
				SDL_HWPALETTE|SDL_DOUBLEBUF);

  /* Si on y arrive pas, on quitte */

  if (jeu.screen == NULL)
    {
      printf("Couldn't set screen mode to %d x %d: %s\n", SCREEN_WIDTH,  
	     SCREEN_HEIGHT, SDL_GetError());
      exit(1);
    }


  /* On entre le titre de la fenêtre */

  SDL_WM_SetCaption(title, NULL);


  /* On cache le curseur de la souris */

  SDL_ShowCursor(SDL_DISABLE);

}



/* Fonction qui quitte le jeu proprement */

void cleanup()
{

  /* Quitte la SDL */
  SDL_Quit();

}

/* init.c ends here */
