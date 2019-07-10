/***************************************************************************
 *   librownie.h                              Version 20190327.182737      *
 *                                                                         *
 *   Biblioteca de funcoes minha, bem da mulesta                           *
 *   Copyright (C) 2019         by Lucas Lira de Oliveira                  *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License.        *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 *   To contact the author, please write to:                               *
 *   Lucas Lira de Oliveira                                                *
 *   Email: lucas.oliveira845@gmail.com                                    *
 *   Webpage: www.upe.br                                                   *
 *   Phone: +55 (71) 98335-3466                                            *
 ***************************************************************************/

/* ---------------------------------------------------------------------- */
/**
 * \file librownie.h
 * \ingroup GroupUnique
 * \brief Biblioteca de funcoes minha, bem da mulesta
 * \details This program really do a nice job as a template, and template only!
 * \version 20190327.182737
 * \date 2019-03-27
 * \author Lucas Lira de Oliveira <<lucas.oliveira845@gmail.com>>
 * \par Webpage
 * <<a href="www.upe.br">www.upe.br</a>>
 * \copyright (c) 2019 GNU GPL v2
 * \note This program is free software: you can redistribute it
 * and/or modify it under the terms of the
 * GNU General Public License as published by
 * the Free Software Foundation version 2 of the License.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program.
 * If not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place - Suite 330, Boston, MA. 02111-1307, USA.
 * Or read it online at <<http://www.gnu.org/licenses/>>.
 *
 *
 * \todo Now that you have the template, hands on! Programme!
 * \warning Be carefull not to lose your mind in small things.
 * \bug This file right now does nothing usefull
 *
 */

#ifndef _LIBROWNIE_H
#define _LIBROWNIE_H

/* ---------------------------------------------------------------------- */
/* includes */

 #include <stdio.h>  /* Standard I/O functions */
 #include <stdlib.h>  /* Miscellaneous functions (rand, malloc, srand)*/
/* #include <getopt.h> */ /* get options from system argc/argv */

 #include <time.h>  /* Time and date functions */
/* #include <math.h> */ /* Mathematics functions */
/* #include <string.h> */ /* Strings functions definitions */
/* #include <malloc.h> */ /* Dynamic memory allocation */
/* #include <errno.h> */ /* Error number codes errno */
/* #include <ncurses.h> */ /* Screen handling and optimisation functions */
/* #include <allegro.h> */ /* A game library for graphics, sounds, etc. */
/* #include "libeco.h" */ /* I/O, Math, Sound, Color, Portable Linux/Windows */
/* #include "librownie.h" */ /* To be created for this template if needed */

/* ---------------------------------------------------------------------- */
/* definitions */

#ifndef VERSION /* gcc -DVERSION="0.1.160612.142628" */
#define VERSION "20190327.182737" /**< Version Number (string) */
#endif

#define MAXstr 50

/* ---------------------------------------------------------------------- */
/* prototypes */

//void help(void); /**< Prints help information and exit */
//void copyr(void); /**< Prints copyright information and exit */
void librownie_init(void);  /**< Initializes some operations before start */
void librownie_update(void); /**< Updates values during program cycle */

float conversao(float r1i, float r1f, float r2i, float r2f, float primeiro);

/* sobre strings */
int tamanhoString(char string[]);
_Bool prefixo(char palavra[], char subP[], int num1, int num2);
_Bool sufixo(char palavra[], char subP[], int num1, int num2);
void concatenarStrings(char string1[], int tamanho1, char string2[], int tamanho2, char string3[]);
void inverter(char *string, char *nString, int quantidade);

#endif /* NOT def _LIBROWNIE_H */

