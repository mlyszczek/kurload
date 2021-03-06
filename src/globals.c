/* ==========================================================================
    Licensed under BSD 2clause license See LICENSE file for more information
    Author: Michał Łyszczek <michal.lyszczek@bofc.pl>
   ========================================================================== */


/* ==========================================================================
          _               __            __         ____ _  __
         (_)____   _____ / /__  __ ____/ /___     / __/(_)/ /___   _____
        / // __ \ / ___// // / / // __  // _ \   / /_ / // // _ \ / ___/
       / // / / // /__ / // /_/ // /_/ //  __/  / __// // //  __/(__  )
      /_//_/ /_/ \___//_/ \__,_/ \__,_/ \___/  /_/  /_//_/ \___//____/

   ========================================================================== */


#include "feature.h"

#include "config.h"
#include <embedlog.h>


/* ==========================================================================
                             __        __            __
                     ____ _ / /____   / /_   ____ _ / /_____
                    / __ `// // __ \ / __ \ / __ `// // ___/
                   / /_/ // // /_/ // /_/ // /_/ // /(__  )
                   \__, //_/ \____//_.___/ \__,_//_//____/
                  /____/
   ========================================================================== */


struct config  g_config;    /* program configuration */
struct el      g_qlog;      /* options for embedlog to print query logs */
int            g_shutdown;  /* flag indicating that program should die */
int            g_stfu;      /* someone relly want to kill us FAST */
int            g_sigalrm;   /* sigalrm has been received */
