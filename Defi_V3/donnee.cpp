
#include "donnee.h"

//Implémentation de la fonction
//BUT : Méthode qui permet de rediriger le joueur vers une autre scène selon la scène actuelle et le clic de la souris
//ENTREE : Le clic et la scène
//SORTIES : Le clic et la scène
extern void redirectScene(position *clic, int *nScene, int *nSeq)
{

    //Selon la salle actuelle du joueur
    switch (*nScene)
    {
        case CORRIDOR:
            //Si le joueur clique sur la porte de la salle du vent
            if ((clic->nX > PORTEVENTXMIN) && (clic->nX < PORTEVENTXMAX) && (clic->nY > PORTEVENTYMIN) && (clic->nY < PORTEVENTYMAX))
            {
                *nScene = VENT;    //Le joueur se rend à la salle du vent
                //Reset du clic
                clic->nX = ZERO;
                clic->nY = ZERO;
                *nSeq = ZERO;
            }
            //Si le joueur clique sur la porte de la salle des cordes
            else if ((clic->nX > PORTECORDEXMIN) && (clic->nX < PORTECORDEXMAX) && (clic->nY > PORTECORDEYMIN) && (clic->nY < PORTECORDEYMAX))
            {
                *nScene = CORDE;    //Le joueur se rend à la salle des cordes
                //Reset du clic
                clic->nX = ZERO;
                clic->nY = ZERO;
                *nSeq = ZERO;
            }
            //Si le joueur clique sur la porte du salon
            else if ((clic->nX > PORTESALONXMIN) && (clic->nX < PORTESALONXMAX) && (clic->nY > PORTESALONYMIN) && (clic->nY < PORTESALONYMAX))
            {
                *nScene = SALON;    //Le joueur se rend au salon
                //Reset du clic
                clic->nX = ZERO;
                clic->nY = ZERO;
                *nSeq = ZERO;
            }
            //Si le joueur clique sur la porte des percus
            else if ((clic->nX > PORTEPERCUXMIN) && (clic->nX < PORTEPERCUXMAX) && (clic->nY > PORTEPERCUYMIN) && (clic->nY < PORTEPERCUYMAX))
            {
                *nScene = PERCU;    //Le joueur se rend à la salle des percus
                //Reset du clic
                clic->nX = ZERO;
                clic->nY = ZERO;
                *nSeq = ZERO;
            }
            break;

        case CORDE:
            //Si le joueur clique sur le cadenas rouge, après avoir réussi l'énigme de la salle des cordes
            if ((clic->nX > CADXMIN) && (clic->nX < CADXMAX) && (clic->nY > CADYMIN) && (clic->nY < CADYMAX))
            {
                *nScene = CORDE2;    //Le joueur se rend à la salle des corde 2
                //Reset du clic
                clic->nX = ZERO;
                clic->nY = ZERO;
                *nSeq = ZERO;
            }
            break;

        case CORDE2:
            //Si le joueur clique sur l'écran à la fin de l'énigme de cette salle
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nScene = CORRIDOR;    //Le joueur se rend dans le corridor
                //Reset du clic
                clic->nX = ZERO;
                clic->nY = ZERO;
                *nSeq = ZERO;
            }
            break;

        case PERCU:
            //Si le joueur clique sur l'armoire du fond dans la salle des percus
            {
            if ((clic->nX > ARMOIREXMIN) && (clic->nX < ARMOIREXMAX) && (clic->nY > ARMOIREYMIN) && (clic->nY < ARMOIREYMAX))
                *nScene = PERCU2;    //Le joueur se rend à la salle des percus 2
                //Reset du clic
                clic->nX = ZERO;
                clic->nY = ZERO;
                *nSeq = ZERO;
            }
            break;

        case PERCU2:
            //Si le joueur clique sur l'écran à la fin de l'énigme de cette salle
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nScene = CORRIDOR;    //Le joueur se rend dans le corridor
                //Reset du clic
                clic->nX = ZERO;
                clic->nY = ZERO;
                *nSeq = ZERO;
            }
            break;

        case VENT:
            //Si le joueur clique derrière le paravent dans la salle des vents
            if ((clic->nX > ZERO) && (clic->nX < PARAVENTXMAX) && (clic->nY > PARAVENTYMIN) && (clic->nY < PARAVENTYMAX))
            {
                *nScene = VENT2;    //Le joueur se rend à la salle des vents 2
                //Reset du clic
                clic->nX = ZERO;
                clic->nY = ZERO;
                *nSeq = ZERO;
            }
            break;

        case VENT2:
            //Si le joueur clique sur l'écran à la fin de l'énigme de cette salle
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nScene = CORRIDOR;    //Le joueur se rend dans le corridor
                //Reset du clic
                clic->nX = ZERO;
                clic->nY = ZERO;
                *nSeq = ZERO;
            }
            break;

        case SALON:
            //Si le joueur clique en bas de l'écran dans le salon
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > BASSALONYMIN) && (clic->nY < HAUTEURECRAN))
            {
                *nScene = CORRIDOR;    //Le joueur se rend dans le corridor
                //Reset du clic
                clic->nX = ZERO;
                clic->nY = ZERO;
                *nSeq = ZERO;
            }
            break;

    }
}


//Implémentation de la fonction
//BUT : Méthode qui permet de rediriger le joueur vers une autre séquence selon le clic de la souris et s'il est dans la salle des cordes
//ENTREE : Le clic et la scène
//SORTIES : Le clic et la scène
extern void SeqCorde (position *clic, int *nSeq)
{
    switch (*nSeq)
    {
        case 0:  //Il faut que le joueur clique sur l'écran
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 1:  //Il faut que le joueur clique sur l'écran
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 2:  //Il faut que le joueur clique sur la guitare accoustique
            if ((clic->nX > ACCOUSXMIN) && (clic->nX < ACCOUSXMAX) && (clic->nY > ACCOUSYMIN) && (clic->nY < ACCOUSYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 3:  //Il faut que le joueur clique sur le ukulélé
            if ((clic->nX > UKULELEXMIN) && (clic->nX < UKULELEXMAX) && (clic->nY > UKULELEYMIN) && (clic->nY < UKULELEXMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 4:  //Il faut que le joueur clique sur la harpe
            if ((clic->nX > HARPEXMIN) && (clic->nX < HARPEXMAX) && (clic->nY > HARPEYMIN) && (clic->nY < HARPEYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 5:  //Il faut que le joueur clique sur la guitare électrique
            if ((clic->nX > ZERO) && (clic->nX < ELECXMAX) && (clic->nY > ELECYMIN) && (clic->nY < ELECYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 6:  //Il faut que le joueur clique sur le banjo
            if ((clic->nX > BANJOXMIN) && (clic->nX < BANJOXMAX) && (clic->nY > BANJOYMIN) && (clic->nY < BANJOYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 7:  //Il faut que le joueur clique sur le violon
            if ((clic->nX > VIOLONXMIN) && (clic->nX < VIOLONXMAX) && (clic->nY > VIOLONYMIN) && (clic->nY < VIOLONYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;
    }
}


//Implémentation de la fonction
//BUT : Méthode qui permet de rediriger le joueur vers une autre séquence selon le clic de la souris et s'il est dans la salle des cordes 2
//ENTREE : Le clic et la scène
//SORTIES : Le clic et la scène
extern void SeqCordeDeux (position *clic, int *nSeq)
{
    switch (*nSeq)
    {
        case 0:  //Il faut que le joueur clique sur l'écran
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 1:  //Il faut que le joueur clique sur l'écran
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 2:  //Il faut que le joueur clique sur le violon
            if ((clic->nX > VIOLONDEUXXMIN) && (clic->nX < VIOLONDEUXXMAX) && (clic->nY > VIOLONDEUXYMIN) && (clic->nY < VIOLONDEUXYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 3:  //Il faut que le joueur clique sur le violoncelle
            if ((clic->nX > VIOLONCELLEXMIN) && (clic->nX < VIOLONCELLEXMAX) && (clic->nY > VIOLONCELLEYMAX) && (clic->nY < VIOLONCELLEYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 4:  //Il faut que le joueur clique sur la contrebasse
            if ((clic->nX > CONTREBASSEXMIN) && (clic->nX < CONTREBASSEXMAX) && (clic->nY > CONTREBASSEYMIN) && (clic->nY < CONTREBASSEYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;
    }
}


//Implémentation de la fonction
//BUT : Méthode qui permet de rediriger le joueur vers une autre séquence selon le clic de la souris et s'il est dans la salle des percus
//ENTREE : Le clic et la scène
//SORTIES : Le clic et la scène
extern void SeqPercu (position *clic, int *nSeq)
{
    switch (*nSeq)
    {
        case 0:  //Il faut que le joueur clique sur l'écran
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 1:  //Il faut que le joueur clique sur l'écran
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 2:  //Il faut que le joueur clique sur le xylophone
            if ((clic->nX > XYLOXMIN) && (clic->nX < XYLOXMAX) && (clic->nY > XYLOXMIN) && (clic->nY < XYLOYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 3:  //Il faut que le joueur clique sur le gong
            if ((clic->nX > GONGXMIN) && (clic->nX < GONGXMAX) && (clic->nY > GONGYMIN) && (clic->nY < GONGYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 4:  //Il faut que le joueur clique sur les maracas
            if ((clic->nX > MARACASXMIN) && (clic->nX < MARACASXMAX) && (clic->nY > MARACASYMIN) && (clic->nY < MARACASYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 5:  //Il faut que le joueur clique sur la guimbarde
            if ((clic->nX > GUIMBXMIN) && (clic->nX < GUIMBXMAX) && (clic->nY > GUIMBYMIN) && (clic->nY < GUIMBYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 6:  //Il faut que le joueur clique sur les bongo
            if ((clic->nX > BONGOXMIN) && (clic->nX < BONGOXMAX) && (clic->nY > BONGOYMIN) && (clic->nY < BONGOYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 7:  //Il faut que le joueur clique sur le tambour
            if ((clic->nX > TAMBXMIN) && (clic->nX < TAMBXMAX) && (clic->nY > TAMBYMIN) && (clic->nY < TAMBYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;
    }
}


//Implémentation de la fonction
//BUT : Méthode qui permet de rediriger le joueur vers une autre séquence selon le clic de la souris et s'il est dans la salle des percus 2
//ENTREE : Le clic et la scène
//SORTIES : Le clic et la scène
extern void SeqPercuDeux (position *clic, int *nSeq)
{
    switch (*nSeq)
    {
        case 0:  //Il faut que le joueur clique sur l'écran
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 1:  //Il faut que le joueur clique sur l'écran
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 2:  //Il faut que le joueur clique sur la batterie
            if ((clic->nX > BATTXMIN) && (clic->nX < BATTXMAX) && (clic->nY > BATTYMIN) && (clic->nY < BATTYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;
    }
}


//Implémentation de la fonction
//BUT : Méthode qui permet de rediriger le joueur vers une autre séquence selon le clic de la souris et s'il est dans la salle des vents
//ENTREE : Le clic et la scène
//SORTIES : Le clic et la scène
extern void SeqVent (position *clic, int *nSeq)
{
    switch (*nSeq)
    {
        case 0:  //Il faut que le joueur clique sur l'écran
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 1:  //Il faut que le joueur clique sur l'écran
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 2:  //Il faut que le joueur clique sur la cornemuse
            if ((clic->nX > CORNEXMIN) && (clic->nX < CORNEXMAX) && (clic->nY > CORNEYMIN) && (clic->nY < CORNEYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 3:  //Il faut que le joueur clique sur la clarinette
            if ((clic->nX > CLARXMIN) && (clic->nX < CLARXMAX) && (clic->nY > CLARYMIN) && (clic->nY < CLARYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 4:  //Il faut que le joueur clique sur la flute de pan
            if  ((clic->nX > PANXMIN) && (clic->nX < PANXMAX) && (clic->nY > PANYMIN) && (clic->nY < PANYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 5:  //Il faut que le joueur clique sur l'accordéon
            if ((clic->nX > ZERO) && (clic->nX < ACCXMAX) && (clic->nY > ACCYMIN) && (clic->nY < ACCYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 6:  //Il faut que le joueur clique sur la trompette
            if ((clic->nX > TROMPXMIN) && (clic->nX < TROMPXMAX) && (clic->nY > TROMPYMIN) && (clic->nY < TROMPYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 7:  //Il faut que le joueur clique sur le sax
            if  ((clic->nX > SAXXMIN) && (clic->nX < SAXXMAX) && (clic->nY > SAXYMIN) && (clic->nY < SAXYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;
    }
}


//Implémentation de la fonction
//BUT : Méthode qui permet de rediriger le joueur vers une autre séquence selon le clic de la souris et s'il est dans la salle des vents 2
//ENTREE : Le clic et la scène
//SORTIES : Le clic et la scène
extern void SeqVentDeux (position *clic, int *nSeq)
{
    switch (*nSeq)
    {
        case 0:  //Il faut que le joueur clique sur l'écran
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 1:  //Il faut que le joueur clique sur l'écran
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 2:  //Il faut que le joueur clique sur le flute traversiere
            if ((clic->nX > ZERO) && (clic->nX < FLTRAVXMAX) && (clic->nY > FLTRAVYMIN) && (clic->nY < FLTRAVYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 3:  //Il faut que le joueur clique sur le hautbois
            if ((clic->nX > HAUTBOISXMIN) && (clic->nX < HAUTBOISXMAX) && (clic->nY > HAUTBOISYMIN) && (clic->nY < HAUTBOISYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 4:  //Il faut que le joueur clique sur le trombone
            if ((clic->nX > TROMBXMIN) && (clic->nX < TROMBXMAX) && (clic->nY > TROMBYMIN) && (clic->nY < TROMBYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 5:  //Il faut que le joueur clique sur le tuba
            if ((clic->nX > TUBAXMIN) && (clic->nX < TUBAXMAX) && (clic->nY > TUBAYMIN) && (clic->nY < TUBAYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;
    }
}


//Implémentation de la fonction
//BUT : Méthode qui permet de rediriger le joueur vers une autre séquence selon le clic de la souris et s'il est dans le salon
//ENTREE : Le clic et la scène
//SORTIES : Le clic et la scène
extern void SeqSalon (position *clic, int *nSeq)
{
    switch (*nSeq)
    {
        case 0:  //Il faut que le joueur clique sur l'écran
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 1:  //Il faut que le joueur clique sur l'écran
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 2:  //Il faut que le joueur clique sur le piano
            if ((clic->nX > PIANOXMIN) && (clic->nX < PIANOXMAX) && (clic->nY > PIANOYMIN) && (clic->nY < PIANOYMAX))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;
    }
}

//Implémentation de la fonction
//BUT : Méthode qui permet de rediriger le joueur vers une autre séquence selon le clic de la souris et s'il est dans le corridor
//ENTREE : Le clic et la scène
//SORTIES : Le clic et la scène
extern void SeqCorridor(position *clic, int *nSeq)
{
    switch (*nSeq)
    {
        case 0:  //Il faut que le joueur clique sur l'écran
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 1:  //Il faut que le joueur clique sur l'écran
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;

        case 2:  //Il faut que le joueur clique sur l'écran
            if ((clic->nX > ZERO) && (clic->nX < LARGEURECRAN) && (clic->nY > ZERO) && (clic->nY < HAUTEURECRAN))
            {
                *nSeq = *nSeq + UN;
                //reset du clic
                clic->nX=ZERO;
                clic->nY=ZERO;
            }
            break;
    }
}
