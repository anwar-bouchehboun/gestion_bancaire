Cahier des charges pour l'application de gestion bancaire en C
1. Présentation Générale
L'application de gestion bancaire permet de gérer des comptes clients. Elle prend en charge les opérations de base, telles que l'ajout de nouveaux comptes, la modification, la suppression, l'affichage, les opérations de retrait et de dépôt, ainsi que la gestion de bonus pour les comptes ayant un solde élevé.

2. Objectifs
   ------------------------
Faciliter la gestion des comptes clients.
Permettre d'effectuer des opérations bancaires courantes (retraits, dépôts).
Assurer la possibilité de trier et de rechercher des comptes.
Ajouter un bonus pour les comptes les plus importants.
---------------------------------
4. Fonctionnalités
3.1 Ajout de comptes clients
L'utilisateur peut ajouter plusieurs comptes clients à la fois.
Chaque client possède les attributs suivants :
CIN (identifiant unique)
Nom
Prénom
Montant (solde du compte)
------------------------------
3.2 Affichage des comptes
L'utilisateur peut afficher la liste des comptes clients avec leurs détails.
Possibilité d'afficher les comptes par ordre croissant ou décroissant, en fonction de la CIN ou du montant.
3.3 Opérations sur les comptes
Retrait : Permet de retirer un montant spécifique d'un compte client si le montant est disponible.
Dépôt : Permet de déposer un montant sur un compte client.
3.4 Modification des comptes
Permet de modifier les informations d'un compte client (nom, prénom, montant).
3.5 Suppression de comptes
L'utilisateur peut supprimer un compte client de la liste.
3.6 Recherche de comptes
L'utilisateur peut rechercher un compte client en fonction de la CIN.
3.7 Bonus
L'application ajoute un bonus de 1,3% aux trois comptes ayant les soldes les plus élevés.
3.8 Tri des comptes
Tri des comptes par CIN en ordre croissant ou décroissant.
Tri des comptes par montant supérieur ou inférieur à un seuil spécifié.

