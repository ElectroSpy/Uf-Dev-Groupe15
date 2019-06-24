#include <stdio.h>
#include <stdlib.h>
#include <mysql.h>
#include "Fonction.h"
#include "Page.h"

int main()
{
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
        MenuP();
    }
    
}