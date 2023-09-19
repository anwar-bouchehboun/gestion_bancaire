/*gestion bancaire*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
	char cin[30];
	char nom[30];
	char prenom[30];
	float montant;
}client;
client c[100];
 int i,j;
int n,choix,k;
client t;

void affiche(){
	    
		for(i=0;i<k;i++){
		printf("client %d\n",i+1);
		printf("le cin : %s\n",c[i].cin);
		printf("le nom : %s\n",c[i].nom);
		printf("le prenom : %s\n",c[i].prenom);
		printf("le montant : %.2f\n",c[i].montant);	
	}
}
void ajouter() {
								    int n; // Declare n
								    int i; // Declare i
								    printf("Donnez le nombre de comptes clients à ajouter : ");
								    scanf("%d", &n);
								    n+=k;
								    for(i = k; i < n; i++) {
								        printf("Client %d\n", i + 1);
								
								        printf("CIN : ");
								        scanf("%s", c[i].cin);
								
								        printf("Nom : ");
								        scanf("%s", c[i].nom);
								
								        printf("Prénom : ");
								        scanf("%s", c[i].prenom);
								
								        printf("Montant : ");
								        scanf("%f", &c[i].montant);
								
								        if (c[i].montant < 0) {
								            c[i].montant = 0;
								        }
								       k++;
								    }
}
//modifier 
void Modifier(){
								 char modifier[30];
								 int chek=0;
								 printf("donner un compte modifier :");
								 scanf("%s",&modifier);
								 for(i=0;i<k;i++){
								 	if(strcmp(c[i].cin,modifier)==0){
								 		printf("Client %d\n", i + 1);
								        printf("Nom : ");
								        scanf("%s", c[i].nom);
								        printf("Prénom : ");
								        scanf("%s", c[i].prenom);
								        printf("Montant : ");
								        scanf("%f", &c[i].montant);
								        chek=1;
									 }
								 }
								 if(chek==0){
								 	printf("aucun compte modifier");
								 }
}
void  supprimer(){
								 char supprimer[30];
								 int chek=0;
								 printf("donner un compte supprimer :");
								 scanf("%s",&supprimer);
								 for(i=0;i<k;i++){
								 if(strcmp(c[i].cin,supprimer)==0){
								 	printf("\n\tSupprimer un produit position %d\n",i);
								 	for(j=i;j<k-1;j++){
							     	   c[j]=c[j+1];
							     	   
								    } k--;
								    chek=1;
								 }   
							}
							if(chek==0){
								 printf("Non suppression\n");
							}
	
}
void op(int r){

	                         	//retrait
		if(r==1){
		                     	char retrait[30];
								float m;
								printf("donner un compte retrait :");
								scanf("%s",&retrait);
		                        for(i=0;i<k;i++){
						   	    if(strcmp(c[i].cin,retrait)==0){
						   		printf(" donner un montant retrait :");
						   		scanf("%f",&m);
						   		   if(m==c[i].montant){
						   			c[i].montant-=m;
						   		
							   }
							   else if(m<c[i].montant)
							   {	c[i].montant-=m; }
							   else  { printf("valide le montant de compte \n"); }
							   	
							     }}}      	 
	  else {
	  
						//	   depot
							   	char depot[30];
						    	float d;
							    int chek=0;
						    	printf("donner un compte depot :");
						    	scanf("%s",&depot);
							    for(i=0;i<k;i++){
							   	if(strcmp(c[i].cin,depot)==0){
							   		printf(" donner un montant depot :");
							   		scanf("%f",&d);
							   		   c[i].montant+=d;
									   chek=1;
								   }
							   }
							   if(chek==0)printf("AUCUN DEPOT \n");
							   }
			}

				  void triasc() {
				    printf("--------------ASC--------------\n");
				    //tri Asc
				    for(i = 0; i < k; i++) {
				        for(j = i + 1; j < k; j++) {
				            if(strcmp(c[i].cin, c[j].cin) > 0) {
				            	//client t;
				                t = c[i];
				                c[i] = c[j];
				                c[j] = t;
				            }
				        }
				    }
				}
					void ajouterBonus() {
					    // Étape 1 : Trier les comptes en fonction du montant en ordre décroissant
					    for (i = 0; i < k ; i++) {
					        for (j = i+1; j < k ; j++) {
					            if (c[i].montant < c[j].montant) {
					                // Échangez les comptes
					                //client t;
					                t = c[i];
					                c[i] = c[j];
					                c[j] = t;
					          				  }
					       				 }
					    			}

							    //  Ajouter 1.3% aux trois premiers comptes
							    for (i = 0; i < 3; i++) {
							        c[i].montant += c[i].montant * 0.013;
							    }
							
							    printf("Les 3 premiers comptes avec le bonus ajouté :\n");
							    for (i = 0; i < 3; i++) {
							        printf("Client %d\n", i + 1);
							        printf("le cin : %s\n", c[i].cin);
							        printf("le nom : %s\n", c[i].nom);
							        printf("le prenom : %s\n", c[i].prenom);
							        printf("le montant : %.2f\n", c[i].montant);
							    }
							}

						void menu(){
						    int ch; 
						    int i, j; 
						    
						    printf("                                      ----Affichage par ordre------                              \n");
						    printf("                                         1- par ordre ASC                                        \n");
						    printf("                                         2- par ordre DESC                                       \n");
						    printf("                                         3- par ordre ASC Ayant montant superieur                \n");
						    printf("                                         4- par ordre DESC Ayant montant superieur               \n");
						    printf("                                         5- Recherche par cin                                    \n");
						    printf("                                         0- Quitter                                              \n");
						    printf("donnez choix s'il vous plaît : =>   ");
						    scanf("%d", &ch);
						
						    if(ch==1){
						        triasc(); 
						        system("cls");
						         affiche();
						        menu();
						    }
						    else if(ch==2){
						    	
						        printf("-------------DSC----------------\n");
						        //tri DSC
						        for(i = 0; i < k; i++){
						            for(j = i + 1; j < k; j++){
						                if(strcmp(c[i].cin, c[j].cin) < 0){
						                    t = c[i];
						                    c[i] = c[j];
						                    c[j] = t;
						                }
						            }
						        }
						         system("cls");
						         affiche();
						        menu();
						    } 
						    else if(ch==3){
						    	system("cls");
						        printf("-------------ASC MONTANt----------------\n");
						        int m;
						        printf("donner un montant  :");
						        scanf("%d", &m);
						        for(i = 0; i < k; i++){
						            if(c[i].montant < m){
						                printf("client %d\n", i+1);
						                printf("le cin : %s\n", c[i].cin);
						                printf("le nom : %s\n", c[i].nom);
						                printf("le prenom : %s\n", c[i].prenom);
						                printf("le montant : %.2f\n", c[i].montant);
						            }
						        }
						         
						    
						        menu();
						    }
						    else if(ch==4){
						    	system("cls");
						        printf("-------------DSC MONTANt----------------\n");
						        int m;
						        printf("donner un montant  :");
						        scanf("%d", &m);
						        for(i = 0; i < k; i++){
						            if(c[i].montant > m){
						                printf("client %d\n", i+1);
						                printf("le cin : %s\n", c[i].cin);
						                printf("le nom : %s\n", c[i].nom);
						                printf("le prenom : %s\n", c[i].prenom);
						                printf("le montant : %.2f\n", c[i].montant);
						            }
						        }
						         
						        
						        menu();
						    }
						    else if(ch==5){
						    	system("cls");
						        //recherche cin 
						        int chek=0;
						        printf("-------------Recherche par cin ----------------\n");
						        char rech[30];
						        printf("donner un cin  :");
						        scanf("%s", rech);
						        for(i = 0; i < k; i++){
						            if(strcmp(c[i].cin, rech) == 0){
						                printf("client %d\n", i+1);
						                printf("le cin : %s\n", c[i].cin);
						                printf("le nom : %s\n", c[i].nom);
						                printf("le prenom : %s\n", c[i].prenom);
						                printf("le montant : %.2f\n", c[i].montant);
						                
						            }
						        }
						         if(chek==0)
						        {
						        	printf("Aucun idee \n");
								}
						        menu();
						    }
						    else {
						    	system("cls");
						        Menuprincipal(); 
						    }
						}


 Menuprincipal(){
 	  do{
	   		printf(" ------------------------------------------- Menu Principale -------------------------------------------\n");
            printf(" *                                    Entre votre choix de list suivant :                              *\n");
            printf(" *                                       1- Ajouter Plussieur produit                                  *\n");
            printf(" *                                       2 - Afficher                                                  *\n");
            printf(" *                                       3- operation Retrait ou Depot                                 *\n");
            printf(" *                                       4- Menu petite                                                *\n");
            printf(" *                                       5-Ajouter 1.3% 3 superieur                                       *\n");
            printf(" *                                       6 - Modifier sur compte                                       *\n");
            printf(" *                                       7 - Supprimer sur le compte                                   *\n");
			printf(" *                                             0 - Quitter                                             *\n");
			printf(" *-----------------------------------------------------------------------------------------------------*\n");
    
								   	printf("donner un choix :");
								   	scanf("%d",&choix);
								   	switch(choix){
									   	case 1 :     ajouter();
									   		         system("cls");
											         break;
										         
									   	case 2 :     system("cls");
											         affiche(); 
													 break;
								   		case 3 :     printf(" trduire on operation  Retrait ou Depot \n");
								   		             int r;
								   		             printf("donner les choix R ou D :  ");
								   		             scanf("%d",&r);
								   		             op(r);
													 break;
								   		case 4 :     system("cls");
										             menu();
										             break;
								   		case 5:      system("cls");
										             ajouterBonus(); 
										             break;
								   		case 6:      system("cls");
										             Modifier(); 
										             break;
										case 7:      system("cls");
										             supprimer(); 
										             break;            
										case 0 :     system("cls");
										             printf("Quitter");
										             break;
									   }
								   }while(choix!=0);
 }
 int main(){
	 Menuprincipal();
	return 0;
}
