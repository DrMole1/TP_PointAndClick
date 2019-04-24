#ifndef DONNEE_H_INCLUDED
#define DONNEE_H_INCLUDED
#pragma once

#include "logique.h"


//Déclaration des constantes
/* Chaque salle porte un numéro */
//==========================
#define MENU 0
#define CORRIDOR 1
#define CORDE 2
#define CORDE2 3
#define PERCU 4
#define PERCU2 5
#define VENT 6
#define VENT2 7
#define SALON 8
//==========================
/*Coordonnées des instruments et des portes*/
//==========================
#define ZERO 0
#define UN 1
#define LARGEURECRAN 640
#define HAUTEURECRAN 480
#define ACCOUSXMIN 95
#define ACCOUSXMAX 275
#define ACCOUSYMIN 315
#define ACCOUSYMAX 440
#define PORTEVENTXMIN 135
#define PORTEVENTXMAX 215
#define PORTEVENTYMIN 50
#define PORTEVENTYMAX 480
#define PORTECORDEXMIN 270
#define PORTECORDEXMAX 300
#define PORTECORDEYMIN 145
#define PORTECORDEYMAX 420
#define PORTESALONXMIN 390
#define PORTESALONXMAX 420
#define PORTESALONYMAX 215
#define PORTESALONYMIN 275
#define PORTEPERCUXMIN 510
#define PORTEPERCUXMAX 550
#define PORTEPERCUYMIN 110
#define PORTEPERCUYMAX 460
#define CADXMIN 270
#define CADXMAX 283
#define CADYMIN 173
#define CADYMAX 186
#define ARMOIREXMIN 485
#define ARMOIREXMAX 545
#define ARMOIREYMIN 80
#define ARMOIREYMAX 215
#define PARAVENTXMAX 135
#define PARAVENTYMIN 85
#define PARAVENTYMAX 265
#define BASSALONYMIN 430
#define UKULELEXMIN 390
#define UKULELEXMAX 605
#define UKULELEYMIN 310
#define UKULELEYMAX 395
#define HARPEXMIN 275
#define HARPEXMAX 440
#define HARPEYMIN 215
#define HARPEYMAX 305
#define ELECXMAX 100
#define ELECYMIN 65
#define ELECYMAX 245
#define BANJOXMIN 395
#define BANJOXMAX 450
#define BANJOYMIN 50
#define BANJOYMAX 220
#define VIOLONXMIN 200
#define VIOLONXMAX 250
#define VIOLONYMIN 100
#define VIOLONYMAX 240
#define VIOLONDEUXXMIN 150
#define VIOLONDEUXXMAX 250
#define VIOLONDEUXYMIN 255
#define VIOLONDEUXYMAX 300
#define VIOLONCELLEXMIN 250
#define VIOLONCELLEXMAX 325
#define VIOLONCELLEYMIN 460
#define VIOLONCELLEYMAX 270
#define CONTREBASSEXMIN 340
#define CONTREBASSEXMAX 430
#define CONTREBASSEYMIN 165
#define CONTREBASSEYMAX 365
#define XYLOXMIN 400
#define XYLOXMAX 545
#define XYLOYMIN 284
#define XYLOYMAX 372
#define GONGXMIN 35
#define GONGXMAX 165
#define GONGYMIN 120
#define GONGYMAX 185
#define MARACASXMIN 494
#define MARACASXMAX 628
#define MARACASYMIN 396
#define MARACASYMAX 479
#define GUIMBXMIN 228
#define GUIMBXMAX 330
#define GUIMBYMIN 31
#define GUIMBYMAX 135
#define BONGOXMIN 228
#define BONGOXMAX 321
#define BONGOYMIN 335
#define BONGOYMAX 387
#define TAMBXMIN 364
#define TAMBXMAX 399
#define TAMBYMIN 346
#define TAMBYMAX 380
#define BATTXMIN 209
#define BATTXMAX 479
#define BATTYMIN 211
#define BATTYMAX 432
#define CORNEXMIN 434
#define CORNEXMAX 596
#define CORNEYMIN 272
#define CORNEYMAX 472
#define CLARXMIN 260
#define CLARXMAX 290
#define CLARYMIN 40
#define CLARYMAX 227
#define PANXMIN 107
#define PANXMAX 254
#define PANYMIN 208
#define PANYMAX 269
#define ACCXMAX 88
#define ACCYMIN 270
#define ACCYMAX 353
#define TROMPXMIN 313
#define TROMPXMAX 445
#define TROMPYMIN 85
#define TROMPYMAX 124
#define SAXXMIN 388
#define SAXXMAX 475
#define SAXYMIN 152
#define SAXYMAX 290
#define FLTRAVXMAX 130
#define FLTRAVYMIN 357
#define FLTRAVYMAX 477
#define HAUTBOISXMIN 149
#define HAUTBOISXMAX 423
#define HAUTBOISYMIN 130
#define HAUTBOISYMAX 157
#define TROMBXMIN 170
#define TROMBXMAX 555
#define TROMBYMIN 327
#define TROMBYMAX 478
#define TUBAXMIN 523
#define TUBAXMAX 638
#define TUBAYMIN 156
#define TUBAYMAX 349
#define PIANOXMIN 187
#define PIANOXMAX 348
#define PIANOYMIN 226
#define PIANOYMAX 377
//==========================

//Prototype des méthodes
extern void redirectScene (position *clic, int *nScene, int *nSeq);
extern void SeqCorde (position *clic, int *nSeq);
extern void SeqCordeDeux (position *clic, int *nSeq);
extern void SeqPercu (position *clic, int *nSeq);
extern void SeqPercuDeux (position *clic, int *nSeq);
extern void SeqVent (position *clic, int *nSeq);
extern void SeqVentDeux (position *clic, int *nSeq);
extern void SeqSalon (position *clic, int *nSeq);
extern void SeqCorridor(position *clic, int *nSeq);

#endif // DONNEE_H_INCLUDED
