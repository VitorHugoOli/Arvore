int main()
{
    int num;
    tno* bst;

    ///
    criaArvore(&bst);
    ///
    if(bst==NULL)
        printf("ok\n");

    printf("Digite um numero ");
    scanf("%d",&num);
    while(num !=999){
        if (preencheArvore(num,&bst)==2)
            printf("Digite um novo diferente de %d num",num);
        else
            printf("Digite um numero ");
        scanf("%d",&num);
    }

    ///
    printf("Ordem:");
    ordArvore(bst);
    printf("\n");
    ///
    printf("Pos-Ordem:");
    posordArvore(bst);
    printf("\n");
    ///
    printf("Pre-Ordem:");
    preordArvore(bst);
    printf("\n");
    ///


    return 0;
}
