#ifndef VUE_H_INCLUDED
#define VUE_H_INCLUDED
#pragma once

#include "logique.h"

//Déclaration des constantes
#define UN 1
#define DEUX 2
#define TROIS 3
#define QUATRE 4
#define CINQ 5
#define SIX 6
#define SEPT 7
#define HUIT 8
#define LONGECRAN 640
#define LARGECRAN 480
#define LONGTEXT 120
#define PROFONDEURXYLO 300
#define HAUTEURXYLO 150
#define PROFONDEURGONG 300
#define HAUTEURGONG 150
#define PROFONDEURMARA 300
#define HAUTEURMARA 150
#define PROFONDEURGUIMB 300
#define HAUTEURGUIMB 150
#define PROFONDEURTAMB 300
#define HAUTEURTAMB 150
#define LARGTEXT 410
#define PROFONDEURVIOLON 300
#define HAUTEURVIOLON 150
#define PROFONDEURBANJO 300
#define HAUTEURBANJO 150
#define PROFONDEURELEC 300
#define HAUTEURELEC 150
#define PROFONDEURHARPE 300
#define HAUTEURHARPE 150
#define PROFONDEURACOUS 300
#define HAUTEURACOUS 150
#define PROFONDEURUKULELE 300
#define HAUTEURUKULELE 150
#define LONGCORDE 100
#define LARGCORDE 400
#define PROFONDEURCORDE 440
#define PROFONDEURTEXTURE 440
#define HAUTEURTEXTURE 60
#define HAUTEURCORDE 60
#define RGBMIN 0
#define RGBMAX 255
#define TAILLETEXT 64
#define LARGETEXT 600
#define HAUTEURTEXT 100
#define ZERO 0
#define PROFONDEURTEXT 500
#define LONGTITRE 43
#define LARGTITRE 120
#define LONGINDICATION 320
#define LARGINDICATION 240
#define PROFONDEURINDICATION 200
#define LONGEFOND 100
#define LARGEFOND 400
#define PROFONDEURFOND 440
#define HAUTEURFOND 60
#define LONGTEXTDEUX 120
#define LARGTEXTDEUX 410
#define PROFONDEURTEXTDEUX 400
#define HAUTEURTEXTDEUX 40
#define PROFONDEURCORN 300
#define HAUTEURCORN 150
#define PROFONDEURCLAR 300
#define HAUTEURCLAR 150
#define PROFONDEURPAN 300
#define HAUTEURPAN 150
#define PROFONDEURACC 300
#define HAUTEURACC 150
#define PROFONDEURTROMP 300
#define HAUTEURTROMP 150
#define PROFONDEURSAX 300
#define HAUTEURSAX 150
#define LONGSTROKO 50
#define LARGSTROKO 200
#define PROFONDEURSTROKO 189
#define HAUTEURSTROKO 280
//Prototype des méthodes
// Rendu des salles
//======================================================
extern void renduMenu(SDL_Renderer **renderer);
extern void renduScene1(SDL_Renderer **renderer);
extern void renduSalleCorde(SDL_Renderer **renderer);
extern void renduSalleCordeDeux(SDL_Renderer **renderer);
extern void renduSallePercu(SDL_Renderer **renderer);
extern void renduSallePercuDeux(SDL_Renderer **renderer);
extern void renduSalleVent(SDL_Renderer **renderer);
extern void renduSalleVentDeux(SDL_Renderer **renderer);
extern void renduSalon(SDL_Renderer **renderer);
//======================================================
//Rendu des séquences par salle
//======================================================
extern void renduSeqCorde(int nSeq, SDL_Renderer **renderer);
extern void renduSeqCordeDeux(int nSeq, SDL_Renderer **renderer);
extern void renduSeqPercu(int nSeq, SDL_Renderer **renderer);
extern void renduSeqPercuDeux(int nSeq, SDL_Renderer **renderer);
extern void renduSeqVent(int nSeq, SDL_Renderer **renderer);
extern void renduSeqVentDeux(int nSeq, SDL_Renderer **renderer);
extern void renduSeqSalon(int nSeq, SDL_Renderer **renderer);
extern void renduSeqCorridor(int nSeq, SDL_Renderer **renderer, int nPosX);
//======================================================

#endif // VUE_H_INCLUDED
