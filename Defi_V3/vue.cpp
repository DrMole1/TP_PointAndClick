#include "vue.h"



//Implémentation de la fonction
//BUT : Créer un fond d'écran pour le menu
//ENTREE : Le rendu
//SORTIES : La fenêtre avec son rendu
extern void renduMenu(SDL_Renderer **renderer)
{

    // Déclaration des variables
    //===============================
    SDL_Surface *srfTexte = NULL;
    TTF_Font *police = NULL;
    SDL_Rect position;
    SDL_Texture *txTexte;
    SDL_Color couleur = {RGBMAX, RGBMAX, RGBMAX};
    police = TTF_OpenFont("angelina.ttf", TAILLETEXT);  // Ouverture d'une police mise dans le dossier du jeu
    SDL_Surface *Image = NULL;
    SDL_Texture *txImage;
    //===============================

    // Pour l'image de fond, une image Bitmap, que l'on va mettre dans une surface puis dans une texture
    /* !!! Ne pas oublier de dimensionner la position et les dimensions de l'image !!! */
    position.x=ZERO;
    position.y=ZERO;
    position.w=LONGECRAN;
    position.h=LARGECRAN;
    //Chargement de l'image depuis le dossier du projet, c'est une surface
    Image = SDL_LoadBMP("fond.bmp");
    //On créée une texture avec la surface
    txImage = SDL_CreateTextureFromSurface(*renderer,Image);
    //On libère la surface, on n'en a plus besoin
    SDL_FreeSurface(Image);
    //On copie la texture sur le rendu
    SDL_RenderCopy(*renderer,txImage,NULL,&position);

    /* Pour le titre */
    // On créée une surface du texte avec la police, le message, et la couleur
    srfTexte = TTF_RenderText_Blended(police, "L'étrange collection de M.Strikovic", couleur);
    //On définit la position et la dimension du texte
    position.x = LONGTITRE;
    position.y = LARGTITRE;
    position.w = PROFONDEURTEXT;
    position.h = HAUTEURTEXT;
    //On créée une texture de la surface
    txTexte = SDL_CreateTextureFromSurface(*renderer, srfTexte);
    //Ne pas oublier de libérer la surface, on n'en a plus besoin
    SDL_FreeSurface(srfTexte);
    //On copie sur le rendu
    SDL_RenderCopy(*renderer,txTexte,NULL,&position);

    /* Pour l'indication */
    // On créée une surface du texte avec la police, le message, et la couleur
    srfTexte = TTF_RenderText_Blended(police, "press space", couleur);
    //On définit la position et la dimension du texte
    position.x = LONGINDICATION;
    position.y = LARGINDICATION;
    position.w = PROFONDEURINDICATION;
    position.h = HAUTEURTEXT;
    //On créée une texture de la surface
    txTexte = SDL_CreateTextureFromSurface(*renderer, srfTexte);
    //Ne pas oublier de libérer la surface, on n'en a plus besoin
    SDL_FreeSurface(srfTexte);
    //On copie sur le rendu
    SDL_RenderCopy(*renderer,txTexte,NULL,&position);


    SDL_DestroyTexture(txTexte);
    TTF_CloseFont(police);
    //=============================================================================================
}


//Implémentation de la fonction
//BUT : Créer un rendu pour la scène 1
//ENTREE : Le rendu
//SORTIES : La fenêtre avec son rendu
extern void renduScene1(SDL_Renderer **renderer)
{
    // Déclaration des variables
    //==========================
    SDL_Surface *Image = NULL;
    SDL_Rect position;
    SDL_Texture *txImage;
    //==========================


    // Pour l'image de fond, une image Bitmap, que l'on va mettre dans une surface puis dans une texture
    /* !!! Ne pas oublier de dimensionner la position et les dimensions de l'image !!! */
    position.x=ZERO;
    position.y=ZERO;
    position.w=LONGECRAN;
    position.h=LARGECRAN;
    //Chargement de l'image depuis le dossier du projet, c'est une surface
    Image = SDL_LoadBMP("Corridor.bmp");
    //On créée une texture avec la surface
    txImage = SDL_CreateTextureFromSurface(*renderer,Image);
    //On libère la surface, on n'en a plus besoin
    SDL_FreeSurface(Image);
    //On copie la texture sur le rendu
    SDL_RenderCopy(*renderer,txImage,NULL,&position);

    //=============================================================================================
}

//Implémentation de la fonction
//BUT : Créer un rendu pour la scène de la salle des cordes
//ENTREE : Le rendu
//SORTIES : La fenêtre avec son rendu
extern void renduSalleCorde(SDL_Renderer **renderer)
{
    // Déclaration des variables
    //==========================
    SDL_Surface *Image = NULL;
    SDL_Rect position;
    SDL_Texture *txImage;
    //==========================


    // Pour l'image de fond, une image Bitmap, que l'on va mettre dans une surface puis dans une texture
    /* !!! Ne pas oublier de dimensionner la position et les dimensions de l'image !!! */
    position.x=ZERO;
    position.y=ZERO;
    position.w=LONGECRAN;
    position.h=LARGECRAN;
    //Chargement de l'image depuis le dossier du projet, c'est une surface
    Image = SDL_LoadBMP("Salle_corde.bmp");
    //On créée une texture avec la surface
    txImage = SDL_CreateTextureFromSurface(*renderer,Image);
    //On libère la surface, on n'en a plus besoin
    SDL_FreeSurface(Image);
    //On copie la texture sur le rendu
    SDL_RenderCopy(*renderer,txImage,NULL,&position);

    //=============================================================================================
}

//Implémentation de la fonction
//BUT : Créer un rendu pour la scène de la 2eme salle des cordes
//ENTREE : Le rendu
//SORTIES : La fenêtre avec son rendu
extern void renduSalleCordeDeux(SDL_Renderer **renderer)
{
    // Déclaration des variables
    //==========================
    SDL_Surface *Image = NULL;
    SDL_Rect position;
    SDL_Texture *txImage;
    //==========================


    // Pour l'image de fond, une image Bitmap, que l'on va mettre dans une surface puis dans une texture
    /* !!! Ne pas oublier de dimensionner la position et les dimensions de l'image !!! */
    position.x=ZERO;
    position.y=ZERO;
    position.w=LONGECRAN;
    position.h=LARGECRAN;
    //Chargement de l'image depuis le dossier du projet, c'est une surface
    Image = SDL_LoadBMP("Salle_corde2.bmp");
    //On créée une texture avec la surface
    txImage = SDL_CreateTextureFromSurface(*renderer,Image);
    //On libère la surface, on n'en a plus besoin
    SDL_FreeSurface(Image);
    //On copie la texture sur le rendu
    SDL_RenderCopy(*renderer,txImage,NULL,&position);

    //=============================================================================================
}

//Implémentation de la fonction
//BUT : Créer un rendu pour la scène de la salle des percussions
//ENTREE : Le rendu
//SORTIES : La fenêtre avec son rendu
extern void renduSallePercu(SDL_Renderer **renderer)
{
    // Déclaration des variables
    //==========================
    SDL_Surface *Image = NULL;
    SDL_Rect position;
    SDL_Texture *txImage;
    //==========================


    // Pour l'image de fond, une image Bitmap, que l'on va mettre dans une surface puis dans une texture
    /* !!! Ne pas oublier de dimensionner la position et les dimensions de l'image !!! */
    position.x=ZERO;
    position.y=ZERO;
    position.w=LONGECRAN;
    position.h=LARGECRAN;
    //Chargement de l'image depuis le dossier du projet, c'est une surface
    Image = SDL_LoadBMP("Salle_percu.bmp");
    //On créée une texture avec la surface
    txImage = SDL_CreateTextureFromSurface(*renderer,Image);
    //On libère la surface, on n'en a plus besoin
    SDL_FreeSurface(Image);
    //On copie la texture sur le rendu
    SDL_RenderCopy(*renderer,txImage,NULL,&position);

    //=============================================================================================
}

//Implémentation de la fonction
//BUT : Créer un rendu pour la scène de la 2eme salle des percussions
//ENTREE : Le rendu
//SORTIES : La fenêtre avec son rendu
extern void renduSallePercuDeux(SDL_Renderer **renderer)
{
    // Déclaration des variables
    //==========================
    SDL_Surface *Image = NULL;
    SDL_Rect position;
    SDL_Texture *txImage;
    //==========================


    // Pour l'image de fond, une image Bitmap, que l'on va mettre dans une surface puis dans une texture
    /* !!! Ne pas oublier de dimensionner la position et les dimensions de l'image !!! */
    position.x=ZERO;
    position.y=ZERO;
    position.w=LONGECRAN;
    position.h=LARGECRAN;
    //Chargement de l'image depuis le dossier du projet, c'est une surface
    Image = SDL_LoadBMP("Salle_percu2.bmp");
    //On créée une texture avec la surface
    txImage = SDL_CreateTextureFromSurface(*renderer,Image);
    //On libère la surface, on n'en a plus besoin
    SDL_FreeSurface(Image);
    //On copie la texture sur le rendu
    SDL_RenderCopy(*renderer,txImage,NULL,&position);

    //=============================================================================================
}

//Implémentation de la fonction
//BUT : Créer un rendu pour la scène de la salle des instruments à vent
//ENTREE : Le rendu
//SORTIES : La fenêtre avec son rendu
extern void renduSalleVent(SDL_Renderer **renderer)
{
    // Déclaration des variables
    //==========================
    SDL_Surface *Image = NULL;
    SDL_Rect position;
    SDL_Texture *txImage;
    //==========================


    // Pour l'image de fond, une image Bitmap, que l'on va mettre dans une surface puis dans une texture
    /* !!! Ne pas oublier de dimensionner la position et les dimensions de l'image !!! */
    position.x=ZERO;
    position.y=ZERO;
    position.w=LONGECRAN;
    position.h=LARGECRAN;
    //Chargement de l'image depuis le dossier du projet, c'est une surface
    Image = SDL_LoadBMP("Salle_vent.bmp");
    //On créée une texture avec la surface
    txImage = SDL_CreateTextureFromSurface(*renderer,Image);
    //On libère la surface, on n'en a plus besoin
    SDL_FreeSurface(Image);
    //On copie la texture sur le rendu
    SDL_RenderCopy(*renderer,txImage,NULL,&position);

    //=============================================================================================
}

//Implémentation de la fonction
//BUT : Créer un rendu pour la scène de la 2eme salle des instruments à vent
//ENTREE : Le rendu
//SORTIES : La fenêtre avec son rendu
extern void renduSalleVentDeux(SDL_Renderer **renderer)
{
    // Déclaration des variables
    //==========================
    SDL_Surface *Image = NULL;
    SDL_Rect position;
    SDL_Texture *txImage;
    //==========================


    // Pour l'image de fond, une image Bitmap, que l'on va mettre dans une surface puis dans une texture
    /* !!! Ne pas oublier de dimensionner la position et les dimensions de l'image !!! */
    position.x=ZERO;
    position.y=ZERO;
    position.w=LONGECRAN;
    position.h=LARGECRAN;
    //Chargement de l'image depuis le dossier du projet, c'est une surface
    Image = SDL_LoadBMP("Salle_vent2.bmp");
    //On créée une texture avec la surface
    txImage = SDL_CreateTextureFromSurface(*renderer,Image);
    //On libère la surface, on n'en a plus besoin
    SDL_FreeSurface(Image);
    //On copie la texture sur le rendu
    SDL_RenderCopy(*renderer,txImage,NULL,&position);

    //=============================================================================================
}

//Implémentation de la fonction
//BUT : Créer un rendu pour la scène du salon
//ENTREE : Le rendu
//SORTIES : La fenêtre avec son rendu
extern void renduSalon(SDL_Renderer **renderer)
{
    // Déclaration des variables
    //==========================
    SDL_Surface *Image = NULL;
    SDL_Rect position;
    SDL_Texture *txImage;
    //==========================


    // Pour l'image de fond, une image Bitmap, que l'on va mettre dans une surface puis dans une texture
    /* !!! Ne pas oublier de dimensionner la position et les dimensions de l'image !!! */
    position.x=ZERO;
    position.y=ZERO;
    position.w=LONGECRAN;
    position.h=LARGECRAN;
    //Chargement de l'image depuis le dossier du projet, c'est une surface
    Image = SDL_LoadBMP("Salon.bmp");
    //On créée une texture avec la surface
    txImage = SDL_CreateTextureFromSurface(*renderer,Image);
    //On libère la surface, on n'en a plus besoin
    SDL_FreeSurface(Image);
    //On copie la texture sur le rendu
    SDL_RenderCopy(*renderer,txImage,NULL,&position);

    //=============================================================================================
}

//Implémentation de la fonction
//BUT : Créer un rendu pour la scène des cordes selon chaque séquence
//ENTREE : Le rendu et la séquence
//SORTIES : La fenêtre avec son rendu
extern void renduSeqCorde(int nSeq, SDL_Renderer **renderer)
{
    if (nSeq >= UN)
    {
        //Mise en place d'un fond pour l'affichage du texte
        //=====================================================================
        //Création de la texture et du rectangle
        SDL_Texture *txFond;
        SDL_Rect Fond;
        //Position et dimension
        Fond.x = LONGCORDE;
        Fond.y = LARGCORDE;
        Fond.w = PROFONDEURCORDE;
        Fond.h = HAUTEURCORDE;
        //On sélectionne une couleur et on colorie le fond
        SDL_SetRenderDrawColor(*renderer, RGBMIN, RGBMIN, RGBMIN, RGBMAX);
        SDL_RenderFillRect(*renderer, &Fond);
        //Création de la texture et sa mise en place sur le rendu
        txFond = SDL_CreateTexture(*renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, PROFONDEURTEXTURE, HAUTEURTEXTURE);
        SDL_RenderCopy(*renderer,txFond,NULL,&Fond);
        //=====================================================================

        //Déclaration des variables pour l'affichage du texte
        //=====================================================================
        SDL_Surface *srfTexte = NULL;
        TTF_Font *police = NULL;
        SDL_Texture *txTexte;
        SDL_Color couleur = {RGBMAX, RGBMAX, RGBMAX};
        police = TTF_OpenFont("angelina.ttf", TAILLETEXT);  // Ouverture d'une police mise dans le dossier du jeu
        //=====================================================================

        // Déclaration des variables
        //==========================
        SDL_Surface *Image = NULL;
        SDL_Texture *txImage;
        SDL_Rect position;
        //==========================



        //Selon la séquence, on affiche un texte différent
        if (nSeq== UN)
        {
            srfTexte = TTF_RenderText_Blended(police, "Bienvenue dans la salle des cordes.", couleur);
        }
        else if (nSeq== DEUX)
        {
            srfTexte = TTF_RenderText_Blended(police, "Cherche la guitare accoustique !", couleur);
        }
        else if (nSeq== TROIS)
        {
            srfTexte = TTF_RenderText_Blended(police, "Maintenant le ukulele !", couleur);
            // Pour l'image de la guitare accoustique
            //====================================================================================
            position.x=ZERO;
            position.y=ZERO;
            position.w=PROFONDEURACOUS;
            position.h=HAUTEURACOUS;
            //Chargement de l'image depuis le dossier du projet, c'est une surface
            Image = SDL_LoadBMP("Fiche_guitare_acoustique.bmp");
            //On créée une texture avec la surface
            txImage = SDL_CreateTextureFromSurface(*renderer,Image);
            //On libère la surface, on n'en a plus besoin
            SDL_FreeSurface(Image);
            //On copie la texture sur le rendu
            SDL_RenderCopy(*renderer,txImage,NULL,&position);
            //====================================================================================
        }
        else if (nSeq==QUATRE)
        {
            srfTexte = TTF_RenderText_Blended(police, "Puis la harpe !", couleur);
            // Pour l'image du ukulélé
            //====================================================================================
            position.x=ZERO;
            position.y=ZERO;
            position.w=PROFONDEURUKULELE;
            position.h=HAUTEURUKULELE;
            //Chargement de l'image depuis le dossier du projet, c'est une surface
            Image = SDL_LoadBMP("Fiche_ukulele.bmp");
            //On créée une texture avec la surface
            txImage = SDL_CreateTextureFromSurface(*renderer,Image);
            //On libère la surface, on n'en a plus besoin
            SDL_FreeSurface(Image);
            //On copie la texture sur le rendu
            SDL_RenderCopy(*renderer,txImage,NULL,&position);
            //====================================================================================
        }
        else if (nSeq==CINQ)
        {
            srfTexte = TTF_RenderText_Blended(police, "Et la guitare electrique !", couleur);
            // Pour l'image de la harpe
            //====================================================================================
            position.x=ZERO;
            position.y=ZERO;
            position.w=PROFONDEURHARPE;
            position.h=HAUTEURHARPE;
            //Chargement de l'image depuis le dossier du projet, c'est une surface
            Image = SDL_LoadBMP("Fiche_harpe.bmp");
            //On créée une texture avec la surface
            txImage = SDL_CreateTextureFromSurface(*renderer,Image);
            //On libère la surface, on n'en a plus besoin
            SDL_FreeSurface(Image);
            //On copie la texture sur le rendu
            SDL_RenderCopy(*renderer,txImage,NULL,&position);
            //====================================================================================
        }
        else if (nSeq==SIX)
        {
            srfTexte = TTF_RenderText_Blended(police, "Puis le banjo !", couleur);
            // Pour l'image de la guitare électrique
            //====================================================================================
            position.x=ZERO;
            position.y=ZERO;
            position.w=PROFONDEURELEC;
            position.h=HAUTEURELEC;
            //Chargement de l'image depuis le dossier du projet, c'est une surface
            Image = SDL_LoadBMP("Fiche_guitare_electrique.bmp");
            //On créée une texture avec la surface
            txImage = SDL_CreateTextureFromSurface(*renderer,Image);
            //On libère la surface, on n'en a plus besoin
            SDL_FreeSurface(Image);
            //On copie la texture sur le rendu
            SDL_RenderCopy(*renderer,txImage,NULL,&position);
            //====================================================================================
        }
        else if (nSeq==SEPT)
        {
            srfTexte = TTF_RenderText_Blended(police, "Enfin le violon !", couleur);
            // Pour l'image du banjo
            //====================================================================================
            position.x=ZERO;
            position.y=ZERO;
            position.w=PROFONDEURBANJO;
            position.h=HAUTEURBANJO;
            //Chargement de l'image depuis le dossier du projet, c'est une surface
            Image = SDL_LoadBMP("Fiche_banjo.bmp");
            //On créée une texture avec la surface
            txImage = SDL_CreateTextureFromSurface(*renderer,Image);
            //On libère la surface, on n'en a plus besoin
            SDL_FreeSurface(Image);
            //On copie la texture sur le rendu
            SDL_RenderCopy(*renderer,txImage,NULL,&position);
            //====================================================================================
        }
        else if (nSeq==HUIT)
        {
            srfTexte = TTF_RenderText_Blended(police, "Ce cadenas rouge semble bloquer une entree ... !", couleur);
            // Pour l'image du violon
            //====================================================================================
            position.x=ZERO;
            position.y=ZERO;
            position.w=PROFONDEURVIOLON;
            position.h=HAUTEURVIOLON;
            //Chargement de l'image depuis le dossier du projet, c'est une surface
            Image = SDL_LoadBMP("Fiche_violon.bmp");
            //On créée une texture avec la surface
            txImage = SDL_CreateTextureFromSurface(*renderer,Image);
            //On libère la surface, on n'en a plus besoin
            SDL_FreeSurface(Image);
            //On copie la texture sur le rendu
            SDL_RenderCopy(*renderer,txImage,NULL,&position);
            //====================================================================================
        }


        //On définit la position et la dimension du texte
        position.x = LONGTEXT;
        position.y = LARGTEXT;
        position.w = PROFONDEURTEXT;
        position.h = HAUTEURTEXT;
        //On créée une texture de la surface
        txTexte = SDL_CreateTextureFromSurface(*renderer, srfTexte);
        //Ne pas oublier de libérer la surface, on n'en a plus besoin
        SDL_FreeSurface(srfTexte);
        //On copie sur le rendu
        SDL_RenderCopy(*renderer,txTexte,NULL,&position);
    }
}

//Implémentation de la fonction
//BUT : Créer un rendu pour la scène des percus selon chaque séquence
//ENTREE : Le rendu et la séquence
//SORTIES : La fenêtre avec son rendu
extern void renduSeqPercu(int nSeq, SDL_Renderer **renderer)
{
    if (nSeq >= UN)
    {
        //Mise en place d'un fond pour l'affichage du texte
        //=====================================================================
        //Création de la texture et du rectangle
        SDL_Texture *txFond;
        SDL_Rect Fond;
        //Position et dimension
        Fond.x = LONGEFOND;
        Fond.y = LARGEFOND;
        Fond.w = PROFONDEURFOND;
        Fond.h = HAUTEURFOND;
        //On sélectionne une couleur et on colorie le fond
        SDL_SetRenderDrawColor(*renderer, RGBMIN, RGBMIN, RGBMIN, RGBMAX);
        SDL_RenderFillRect(*renderer, &Fond);
        //Création de la texture et sa mise en place sur le rendu
        txFond = SDL_CreateTexture(*renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, PROFONDEURTEXTURE, HAUTEURTEXTURE);
        SDL_RenderCopy(*renderer,txFond,NULL,&Fond);
        //=====================================================================

        //Déclaration des variables pour l'affichage du texte
        //=====================================================================
        SDL_Surface *srfTexte = NULL;
        TTF_Font *police = NULL;
        SDL_Texture *txTexte;
        SDL_Color couleur = {RGBMAX, RGBMAX, RGBMAX};
        police = TTF_OpenFont("angelina.ttf", TAILLETEXT);  // Ouverture d'une police mise dans le dossier du jeu
        //=====================================================================

        // Déclaration des variables
        //==========================
        SDL_Surface *Image = NULL;
        SDL_Texture *txImage;
        SDL_Rect position;
        //==========================


        //Selon la séquence, on affiche un texte différent
        if (nSeq==UN)
        {
            srfTexte = TTF_RenderText_Blended(police, "Bienvenue dans la salle des percussions.", couleur);
        }
        else if (nSeq==DEUX)
        {
            srfTexte = TTF_RenderText_Blended(police, "Cherche le bongo !", couleur);
        }
        else if (nSeq==TROIS)
        {
            srfTexte = TTF_RenderText_Blended(police, "Maintenant le xylophone !", couleur);
            // Pour l'image du bongo
            //====================================================================================
            position.x=ZERO;
            position.y=ZERO;
            position.w=PROFONDEURBANJO;
            position.h=HAUTEURBANJO;
            //Chargement de l'image depuis le dossier du projet, c'est une surface
            Image = SDL_LoadBMP("Fiche_bongo.bmp");
            //On créée une texture avec la surface
            txImage = SDL_CreateTextureFromSurface(*renderer,Image);
            //On libère la surface, on n'en a plus besoin
            SDL_FreeSurface(Image);
            //On copie la texture sur le rendu
            SDL_RenderCopy(*renderer,txImage,NULL,&position);
            //====================================================================================
        }
        else if (nSeq==QUATRE)
        {
            srfTexte = TTF_RenderText_Blended(police, "Puis le tambour !", couleur);
            // Pour l'image du xylophone
            //====================================================================================
            position.x=ZERO;
            position.y=ZERO;
            position.w=PROFONDEURXYLO;
            position.h=HAUTEURXYLO;
            //Chargement de l'image depuis le dossier du projet, c'est une surface
            Image = SDL_LoadBMP("Fiche_xylophone.bmp");
            //On créée une texture avec la surface
            txImage = SDL_CreateTextureFromSurface(*renderer,Image);
            //On libère la surface, on n'en a plus besoin
            SDL_FreeSurface(Image);
            //On copie la texture sur le rendu
            SDL_RenderCopy(*renderer,txImage,NULL,&position);
            //====================================================================================
        }
        else if (nSeq==CINQ)
        {
            srfTexte = TTF_RenderText_Blended(police, "Ensuite le gong !", couleur);
            // Pour l'image du tambour
            //====================================================================================
            position.x=ZERO;
            position.y=ZERO;
            position.w=PROFONDEURTAMB;
            position.h=HAUTEURTAMB;
            //Chargement de l'image depuis le dossier du projet, c'est une surface
            Image = SDL_LoadBMP("Fiche_tambour.bmp");
            //On créée une texture avec la surface
            txImage = SDL_CreateTextureFromSurface(*renderer,Image);
            //On libère la surface, on n'en a plus besoin
            SDL_FreeSurface(Image);
            //On copie la texture sur le rendu
            SDL_RenderCopy(*renderer,txImage,NULL,&position);
            //====================================================================================
        }
        else if (nSeq==SIX)
        {
            srfTexte = TTF_RenderText_Blended(police, "Ensuite les maracas !", couleur);
            // Pour l'image du gong
            //====================================================================================
            position.x=ZERO;
            position.y=ZERO;
            position.w=PROFONDEURGONG;
            position.h=HAUTEURGONG;
            //Chargement de l'image depuis le dossier du projet, c'est une surface
            Image = SDL_LoadBMP("Fiche_gong.bmp");
            //On créée une texture avec la surface
            txImage = SDL_CreateTextureFromSurface(*renderer,Image);
            //On libère la surface, on n'en a plus besoin
            SDL_FreeSurface(Image);
            //On copie la texture sur le rendu
            SDL_RenderCopy(*renderer,txImage,NULL,&position);
            //====================================================================================
        }
        else if (nSeq==SEPT)
        {
            srfTexte = TTF_RenderText_Blended(police, "Ensuite la guimbarde !", couleur);
            // Pour l'image des maracas
            //====================================================================================
            position.x=ZERO;
            position.y=ZERO;
            position.w=PROFONDEURMARA;
            position.h=HAUTEURMARA;
            //Chargement de l'image depuis le dossier du projet, c'est une surface
            Image = SDL_LoadBMP("Fiche_maracas.bmp");
            //On créée une texture avec la surface
            txImage = SDL_CreateTextureFromSurface(*renderer,Image);
            //On libère la surface, on n'en a plus besoin
            SDL_FreeSurface(Image);
            //On copie la texture sur le rendu
            SDL_RenderCopy(*renderer,txImage,NULL,&position);
            //====================================================================================
        }
        else if (nSeq==HUIT)
        {
            srfTexte = TTF_RenderText_Blended(police, "Hey ! Cette armoire semble bloquer une entree !", couleur);
            // Pour l'image de la guimbarde
            //====================================================================================
            position.x=ZERO;
            position.y=ZERO;
            position.w=PROFONDEURGUIMB;
            position.h=HAUTEURGUIMB;
            //Chargement de l'image depuis le dossier du projet, c'est une surface
            Image = SDL_LoadBMP("Fiche_guimbarde.bmp");
            //On créée une texture avec la surface
            txImage = SDL_CreateTextureFromSurface(*renderer,Image);
            //On libère la surface, on n'en a plus besoin
            SDL_FreeSurface(Image);
            //On copie la texture sur le rendu
            SDL_RenderCopy(*renderer,txImage,NULL,&position);
            //====================================================================================
        }


        //On définit la position et la dimension du texte
        position.x = LONGTEXTDEUX;
        position.y = LARGTEXTDEUX;
        position.w = PROFONDEURTEXTDEUX;
        position.h = HAUTEURTEXTDEUX;
        //On créée une texture de la surface
        txTexte = SDL_CreateTextureFromSurface(*renderer, srfTexte);
        //Ne pas oublier de libérer la surface, on n'en a plus besoin
        SDL_FreeSurface(srfTexte);
        //On copie sur le rendu
        SDL_RenderCopy(*renderer,txTexte,NULL,&position);
    }
}


//Implémentation de la fonction
//BUT : Créer un rendu pour la scène des vents selon chaque séquence
//ENTREE : Le rendu et la séquence
//SORTIES : La fenêtre avec son rendu
extern void renduSeqVent(int nSeq, SDL_Renderer **renderer)
{
    if (nSeq >= UN)
    {
        //Mise en place d'un fond pour l'affichage du texte
        //=====================================================================
        //Création de la texture et du rectangle
        SDL_Texture *txFond;
        SDL_Rect Fond;
        //Position et dimension
        Fond.x = LONGEFOND;
        Fond.y = LARGEFOND;
        Fond.w = PROFONDEURFOND;
        Fond.h = HAUTEURFOND;
        //On sélectionne une couleur et on colorie le fond
        SDL_SetRenderDrawColor(*renderer, RGBMIN, RGBMIN, RGBMIN, RGBMAX);
        SDL_RenderFillRect(*renderer, &Fond);
        //Création de la texture et sa mise en place sur le rendu
        txFond = SDL_CreateTexture(*renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, PROFONDEURTEXTURE, HAUTEURTEXTURE);
        SDL_RenderCopy(*renderer,txFond,NULL,&Fond);
        //=====================================================================

        //Déclaration des variables pour l'affichage du texte
        //=====================================================================
        SDL_Surface *srfTexte = NULL;
        TTF_Font *police = NULL;
        SDL_Texture *txTexte;
        SDL_Color couleur = {RGBMAX, RGBMAX, RGBMAX};
        police = TTF_OpenFont("angelina.ttf", TAILLETEXT);  // Ouverture d'une police mise dans le dossier du jeu
        //=====================================================================

        // Déclaration des variables
        //==========================
        SDL_Surface *Image = NULL;
        SDL_Texture *txImage;
        SDL_Rect position;
        //==========================


        //Selon la séquence, on affiche un texte différent
        if (nSeq==UN)
        {
            srfTexte = TTF_RenderText_Blended(police, "Bienvenue dans la salle des vents.", couleur);
        }
        else if (nSeq==DEUX)
        {
            srfTexte = TTF_RenderText_Blended(police, "Cherche la cornemuse !", couleur);
        }
        else if (nSeq==TROIS)
        {
            srfTexte = TTF_RenderText_Blended(police, "Maintenant la clarinette !", couleur);
            // Pour l'image de la cornemuse
            //====================================================================================
            position.x=ZERO;
            position.y=ZERO;
            position.w=PROFONDEURCORN;
            position.h=HAUTEURCORN;
            //Chargement de l'image depuis le dossier du projet, c'est une surface
            Image = SDL_LoadBMP("Fiche_cornemuse.bmp");
            //On créée une texture avec la surface
            txImage = SDL_CreateTextureFromSurface(*renderer,Image);
            //On libère la surface, on n'en a plus besoin
            SDL_FreeSurface(Image);
            //On copie la texture sur le rendu
            SDL_RenderCopy(*renderer,txImage,NULL,&position);
            //====================================================================================
        }
        else if (nSeq==QUATRE)
        {
            srfTexte = TTF_RenderText_Blended(police, "Et la flute de pan !", couleur);
            // Pour l'image de la clarinette
            //====================================================================================
            position.x=ZERO;
            position.y=ZERO;
            position.w=PROFONDEURCLAR;
            position.h=HAUTEURCLAR;
            //Chargement de l'image depuis le dossier du projet, c'est une surface
            Image = SDL_LoadBMP("Fiche_clarinette.bmp");
            //On créée une texture avec la surface
            txImage = SDL_CreateTextureFromSurface(*renderer,Image);
            //On libère la surface, on n'en a plus besoin
            SDL_FreeSurface(Image);
            //On copie la texture sur le rendu
            SDL_RenderCopy(*renderer,txImage,NULL,&position);
            //====================================================================================
        }
        else if (nSeq==CINQ)
        {
            srfTexte = TTF_RenderText_Blended(police, "Puis notre ami l'accordeon", couleur);
            // Pour l'image de la flute de pan
            //====================================================================================
            position.x=ZERO;
            position.y=ZERO;
            position.w=PROFONDEURPAN;
            position.h=HAUTEURPAN;
            //Chargement de l'image depuis le dossier du projet, c'est une surface
            Image = SDL_LoadBMP("Fiche_flute_de_pan.bmp");
            //On créée une texture avec la surface
            txImage = SDL_CreateTextureFromSurface(*renderer,Image);
            //On libère la surface, on n'en a plus besoin
            SDL_FreeSurface(Image);
            //On copie la texture sur le rendu
            SDL_RenderCopy(*renderer,txImage,NULL,&position);
            //====================================================================================
        }
        else if (nSeq==SIX)
        {
            srfTexte = TTF_RenderText_Blended(police, "Ensuite la trompette !", couleur);
            // Pour l'image de l'accordéon
            //====================================================================================
            position.x=ZERO;
            position.y=ZERO;
            position.w=PROFONDEURACC;
            position.h=HAUTEURACC;
            //Chargement de l'image depuis le dossier du projet, c'est une surface
            Image = SDL_LoadBMP("Fiche_accordeon.bmp");
            //On créée une texture avec la surface
            txImage = SDL_CreateTextureFromSurface(*renderer,Image);
            //On libère la surface, on n'en a plus besoin
            SDL_FreeSurface(Image);
            //On copie la texture sur le rendu
            SDL_RenderCopy(*renderer,txImage,NULL,&position);
            //====================================================================================
        }
        else if (nSeq==SEPT)
        {
            srfTexte = TTF_RenderText_Blended(police, "Et pour finir le saxophone !", couleur);
            // Pour l'image de la trompette
            //====================================================================================
            position.x=ZERO;
            position.y=ZERO;
            position.w=PROFONDEURTROMP;
            position.h=HAUTEURTROMP;
            //Chargement de l'image depuis le dossier du projet, c'est une surface
            Image = SDL_LoadBMP("Fiche_trompette.bmp");
            //On créée une texture avec la surface
            txImage = SDL_CreateTextureFromSurface(*renderer,Image);
            //On libère la surface, on n'en a plus besoin
            SDL_FreeSurface(Image);
            //On copie la texture sur le rendu
            SDL_RenderCopy(*renderer,txImage,NULL,&position);
            //====================================================================================
        }
        else if (nSeq==HUIT)
        {
            srfTexte = TTF_RenderText_Blended(police, "Regarde le paravent ! Il est suspect !", couleur);
            // Pour l'image du sax
            //====================================================================================
            position.x=ZERO;
            position.y=ZERO;
            position.w=PROFONDEURSAX;
            position.h=HAUTEURSAX;
            //Chargement de l'image depuis le dossier du projet, c'est une surface
            Image = SDL_LoadBMP("Fiche_saxophone.bmp");
            //On créée une texture avec la surface
            txImage = SDL_CreateTextureFromSurface(*renderer,Image);
            //On libère la surface, on n'en a plus besoin
            SDL_FreeSurface(Image);
            //On copie la texture sur le rendu
            SDL_RenderCopy(*renderer,txImage,NULL,&position);
            //====================================================================================
        }

        //On définit la position et la dimension du texte
        position.x = LONGTEXTDEUX;
        position.y = LARGTEXTDEUX;
        position.w = PROFONDEURTEXTDEUX;
        position.h = HAUTEURTEXTDEUX;
        //On créée une texture de la surface
        txTexte = SDL_CreateTextureFromSurface(*renderer, srfTexte);
        //Ne pas oublier de libérer la surface, on n'en a plus besoin
        SDL_FreeSurface(srfTexte);
        //On copie sur le rendu
        SDL_RenderCopy(*renderer,txTexte,NULL,&position);
    }
}

//Implémentation de la fonction
//BUT : Créer un rendu pour le corridor selon chaque séquence
//ENTREE : Le rendu et la séquence
//SORTIES : La fenêtre avec son rendu
extern void renduSeqCorridor(int nSeq, SDL_Renderer **renderer, int nPosX)
{
    if ((nSeq == UN) || (nSeq == DEUX))
    {
        // Déclaration des variables
        //==========================
        SDL_Surface *Image = NULL;
        SDL_Texture *txImage;
        SDL_Rect position;
        //==========================


        // Pour l'image de M.Strikovic
        //====================================================================================
        /* !!! Ne pas oublier de dimensionner la position et les dimensions de l'image !!! */
        position.x=nPosX;
        position.y=LARGSTROKO;
        position.w=PROFONDEURSTROKO;
        position.h=HAUTEURSTROKO;
        //Chargement de l'image depuis le dossier du projet, c'est une surface
        Image = SDL_LoadBMP("Strikovic.bmp");
        //On créée une texture avec la surface
        txImage = SDL_CreateTextureFromSurface(*renderer,Image);
        //On libère la surface, on n'en a plus besoin
        SDL_FreeSurface(Image);
        //On copie la texture sur le rendu
        SDL_RenderCopy(*renderer,txImage,NULL,&position);
        //====================================================================================


        //Mise en place d'un fond pour l'affichage du texte
        //=====================================================================
        //Création de la texture et du rectangle
        SDL_Texture *txFond;
        SDL_Rect Fond;
        //Position et dimension
        Fond.x = LONGEFOND;
        Fond.y = LARGEFOND;
        Fond.w = PROFONDEURFOND;
        Fond.h = HAUTEURFOND;
        //On sélectionne une couleur et on colorie le fond
        SDL_SetRenderDrawColor(*renderer, RGBMIN, RGBMIN, RGBMIN, RGBMAX);
        SDL_RenderFillRect(*renderer, &Fond);
        //Création de la texture et sa mise en place sur le rendu
        txFond = SDL_CreateTexture(*renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, PROFONDEURTEXTURE, HAUTEURTEXTURE);
        SDL_RenderCopy(*renderer,txFond,NULL,&Fond);
        //=====================================================================

        //Déclaration des variables pour l'affichage du texte
        //=====================================================================
        SDL_Surface *srfTexte = NULL;
        TTF_Font *police = NULL;
        SDL_Texture *txTexte;
        SDL_Color couleur = {RGBMAX, RGBMAX, RGBMAX};
        police = TTF_OpenFont("angelina.ttf", TAILLETEXT);  // Ouverture d'une police mise dans le dossier du jeu
        //=====================================================================

        //On définit la position et la dimension du texte
        position.x = LONGTEXTDEUX;
        position.y = LARGTEXTDEUX;
        position.w = PROFONDEURTEXTDEUX;
        position.h = HAUTEURTEXTDEUX;


        //Selon la séquence, on affiche un texte différent
        if (nSeq==UN)
        {
            srfTexte = TTF_RenderText_Blended(police, "Bienvenue dans mon celebre manoir !", couleur);
        }
        else if (nSeq==DEUX)
        {
            srfTexte = TTF_RenderText_Blended(police, "Je vais vous laisser decouvrir ses secrets ...", couleur);
        }



        //On créée une texture de la surface
        txTexte = SDL_CreateTextureFromSurface(*renderer, srfTexte);
        //Ne pas oublier de libérer la surface, on n'en a plus besoin
        SDL_FreeSurface(srfTexte);
        //On copie sur le rendu
        SDL_RenderCopy(*renderer,txTexte,NULL,&position);

    }
}


/*extern void renduSeqCordeDeux(int nSeq, SDL_Renderer **renderer);
extern void renduSeqPercuDeux(int nSeq, SDL_Renderer **renderer);
extern void renduSeqVentDeux(int nSeq, SDL_Renderer **renderer);
extern void renduSeqSalon(int nSeq, SDL_Renderer **renderer);*/
