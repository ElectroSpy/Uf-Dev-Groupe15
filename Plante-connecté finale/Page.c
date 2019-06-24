#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <mysql.h>
#include "Fonction.h"
#include "Page.h"



void MenuP() {
    system ("clear");
    printf("                                  \n");
    printf("            Menu Principal         \n");
    printf("                                  \n");
    printf("\n ");
    printf("      1: Rechercher une plante     \n");
    printf("        2: Plantes possedees       \n");
    printf("   3: Ajout d'une nouvelle plante  \n");
    int decision = ChoixUser(1,3);
    if (decision==1)
    {
        Recherche();
    }
    else if (decision==2)
    {
        PlantesPossedees();
    }
    else if (decision==3)
    {
        NewPlante();
    }
}

void PlantesPossedees(){
    system("clear");

    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;

    char *server = "localhost";
    char *user = "root";
    char *mdp = "";
    char *database = "Connected_flower";

    conn=mysql_init(NULL);

    if(!mysql_real_connect(conn,server,user,mdp,database,0,NULL,0)){
        fprintf(stderr, "%s\n", mysql_error(conn));
        exit(1);
        printf("Erreur de connexion à la base de donnée");
    }
    else {
        mysql_query(conn, "Select Plante_possedee.ID_plante_possedee, Humidite_plante, Temperature_plante from Plante_possedee, Informations, Possede where Possede.ID_information=Informations.ID_information and Possede.ID_plante_possedee=Plante_possedee.ID_plante_possedee;");

        unsigned int i = 1;
        unsigned int num_champs = 0;

        res = mysql_use_result(conn);
        num_champs=mysql_num_fields(res);

        printf("\n");
        printf("         0: Menu Principal       \n");
        printf("\n");
        printf("         Plantes possedees        \n");
        printf("                                  \n");
        printf("                                  \n");
        while ((row=mysql_fetch_row(res)))
        {
            unsigned long *lengths;
            lengths=mysql_fetch_lengths(res);
            for (i = 0; i < num_champs; i++)
            {
                printf("[%.*s]",(int) lengths[i], row[i]?row[i] : "NULL");
            }
            printf("\n");
        }
        mysql_free_result(res);
        //A terminer grâce a la base de données
        int decision = ChoixUser(0,0);
        if (decision==0){
            MenuP();
        }
    }
    //ChoixPossede(decision);
}

void Recherche()
{
    system("clear");

    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;

    char *server = "localhost";
    char *user = "root";
    char *mdp = "";
    char *database = "Connected_flower";

    conn=mysql_init(NULL);

    if(!mysql_real_connect(conn,server,user,mdp,database,0,NULL,0)){
        fprintf(stderr, "%s\n", mysql_error(conn));
        exit(1);
        printf("Erreur de connexion à la base de donnée");
    }
    else {
    mysql_query(conn, "SELECT ID_plante, Nom_plante from Plante;");

    unsigned int i = 1;
    unsigned int num_champs = 0;

    res = mysql_use_result(conn);
    num_champs=mysql_num_fields(res);
     
    printf("\n");
    printf("         0: Menu Principal        \n");
    printf("                                  \n");
    printf("        Rechercher une plante     \n");
    printf("                                  \n");
    printf("                                  \n");
    while ((row=mysql_fetch_row(res)))
    {
        unsigned long *lengths;
        lengths=mysql_fetch_lengths(res);
        for (i = 0; i < num_champs; i++)
        {
            printf("[%.*s]",(int) lengths[i], row[i]?row[i] : "NULL");
        }
        printf("\n");
    }
    mysql_free_result(res);
    int decision = ChoixUser(0,30);
    ChoixPlante(decision);
    }
}

void NewPlante()
{
    system("clear");
    printf("Le Nom de la plante  : \n");
    printf("Une Categorisation de la plante  : \n");
    printf("La Description  : \n");
    printf("Une ou plusieurs Photos  : \n");
    printf("L humidite optimale du sol : \n");
    printf("La temperature atmospherique optimale : \n");
    printf("La luminosite optimale : \n");
    printf("La periode de floraison : \n");

        //A terminer grâce a la base de données
}

void Plante(int reference)
{
    system("clear");

    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;

    char *server = "localhost";
    char *user = "root";
    char *mdp = "";
    char *database = "Connected_flower";

    conn=mysql_init(NULL);

    if(!mysql_real_connect(conn,server,user,mdp,database,0,NULL,0)){
        fprintf(stderr, "%s\n", mysql_error(conn));
        exit(1);
        printf("Erreur de connexion à la base de donnée");
    }
    else {
        mysql_query(conn, "SELECT Nom_plante, Nom_famille, Description_plante, Plantation_plante, Floraison_Plante, Temperature_plante, Humidite_plante, Luminosite_plante from Plante, Famille where Plante.ID_famille=Famille.ID_Famille and ID_Plante =1;");

        unsigned int i = 1;
        unsigned int num_champs = 0;

        res = mysql_use_result(conn);
        num_champs=mysql_num_fields(res);
        
        printf("\n");
        printf("         0: Menu Principal        \n");
        printf("       1: Ajouter la plante       \n");
        printf("           à vos plantes          \n");
        printf("                                  \n");
        printf("      Information de la plante    \n");
        printf("                                  \n");
        printf("                                  \n");
        while ((row=mysql_fetch_row(res)))
        {
            unsigned long *lengths;
            lengths=mysql_fetch_lengths(res);
            int i=reference;
            for (i = 0; i < num_champs; i++)
            {
                printf("[%.*s]",(int) lengths[i], row[i]?row[i] : "NULL");
            }
            printf("\n");
        }
        mysql_free_result(res);
        int decision = ChoixUser(0,1);
        if (decision==0){
            MenuP();
        }
        else if (decision==1){
            //mysql_query(conn, "INSERT INTO Plante_possedee VALUES(, 'valeur 2', 'etc')");
        }
    }
}