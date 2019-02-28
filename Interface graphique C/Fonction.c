int ChoixUser(int min, int max)
{
    int NbChoisi;
    scanf("%d",&NbChoisi);
    while (NbChoisi>max || NbChoisi<min)
    {
        printf("Vous n'avez pas entre un numero valable. Veuillez recommencer");
        scanf("%d",&NbChoisi);
    }
    return NbChoisi;

}

int ChoixPlante(Choix)
{
    if (Choix==0){
        MenuP();
    }
    else if (Choix>0 && Choix<=30){
        Plante(Choix);
    }
    else {
        Recherche();
    }
}
