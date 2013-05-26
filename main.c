/* main.c --- 
 * 
 * Filename: main.c
 * Description: 
 * Author: Julien DEMESY
 * Maintainer: 
 * Created: Thu May 23 16:05:15 2013 (+0200)
 * Version: 
 * Last-Updated: Thu May 23 16:29:47 2013 (+0200)
 *           By: Julien DEMESY
 *     Update #: 3
 * URL: 
 * Doc URL: 
 * Keywords: 
 * Compatibility: 
 * 
 */

/* Commentary: 
 * 
 * Game Main file
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

#include "main.h"

int main( int argc, char *argv[ ] )
{
  unsigned int frameLimit = SDL_GetTicks() + 16;
  int go;

  /* Initialisation de la SDL dans une fonction séparée (voir après) */
  init("Aron");

  /*Chargement des ressources graphiques */
  loadGame();

  /* Appelle la fonction cleanup à la fin du programme */
  atexit(cleanup);

  go = 1;


  /* Boucle infinie, principale, du jeu */

  while (go == 1)
    {

      /* On vérifie l'état des entrées (clavier puis plus tard joystick */
      getInput();

      /* On affiche tout */
      draw();

      /* Gestion des 60 fps ( 60 images pas seconde : soit 1s ->1000ms/60 = 16.6 -> 16
	 On doit donc attendre 16 ms entre chaque image (frame) */
      delay(frameLimit);
      frameLimit = SDL_GetTicks() + 16;

    }

  /* Exit */
  exit(0);

}

/* main.c ends here */
