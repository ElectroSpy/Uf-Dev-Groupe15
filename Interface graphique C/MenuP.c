void MenuP() {
    system("cls");
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

void PlantesPossedees() {
    system("cls");
    printf("\n");
    printf("         0: Menu Principal       \n");
    printf("\n");
    printf("         Plantes possedees        \n");
    printf("                                  \n");
    printf("     Chosir une plante pour la    \n");
    printf("            controler             \n");
    printf("                                  \n");
    printf("        1: Nom de plante          \n");
    printf("        2: Nom de plante          \n");
    printf("        3: Nom de plante          \n");
    printf("               ...                \n");
    //A terminer grâce a la base de données
    int decision = ChoixUser(0,0);
    if (decision==0){
        MenuP();
    }
    //ChoixPossede(decision);
}

void Recherche()
{
    system("cls");
    printf("\n");
    printf("         0: Menu Principal        \n");
    printf("                                  \n");
    printf("        Rechercher une plante     \n");
    printf("                                  \n");
    printf("                                  \n");
    printf("        1: Nom de plante          \n");
    printf("        2: Nom de plante          \n");
    printf("        3: Nom de plante          \n");
    printf("        4: Nom de plante          \n");
    printf("        5: Nom de plante          \n");
    printf("        6: Nom de plante          \n");
    printf("        7: Nom de plante          \n");
    printf("        8: Nom de plante          \n");
    printf("        9: Nom de plante          \n");
    printf("       10: Nom de plante          \n");
    printf("       11: Nom de plante          \n");
    printf("       12: Nom de plante          \n");
    printf("       13: Nom de plante          \n");
    printf("       14: Nom de plante          \n");
    printf("       15: Nom de plante          \n");
    printf("       16: Nom de plante          \n");
    printf("       17: Nom de plante          \n");
    printf("       18: Nom de plante          \n");
    printf("       19: Nom de plante          \n");
    printf("       20: Nom de plante          \n");
    printf("       21: Nom de plante          \n");
    printf("       22: Nom de plante          \n");
    printf("       23: Nom de plante          \n");
    printf("       24: Nom de plante          \n");
    printf("       25: Nom de plante          \n");
    printf("       26: Nom de plante          \n");
    printf("       27: Nom de plante          \n");
    printf("       28: Nom de plante          \n");
    printf("       29: Nom de plante          \n");
    printf("       30: Nom de plante          \n");
    int decision = ChoixUser(0,30);
    ChoixPlante(decision);
    //A terminer grâce a la base de données

}

void NewPlante()
{
    system("cls");
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

void Plante(int Reference)
{
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
