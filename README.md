# ORDER-LINK

Réalisation d'une architecture de type client-serveur composée d’une application et d’une base de données.  
Application de gestion de vente en ligne de composants électroniques.

## Interface graphique 

![](https://media.discordapp.net/attachments/429783640361140225/1183768396320473180/image.png?ex=6589893b&is=6577143b&hm=9595558c42ffa214b5b277a1a8c743c6622882a884d35291e9ef014715ba3cb8&=&format=webp&quality=lossless&width=1136&height=623)

## Les processus visés par notre application sont :

o	La gestion du personnel  
o	La gestion des clients  
o	La gestion des commandes  
o	La gestion du stock  
o	La gestion des statistiques  

## Gestion du personnel 
![](https://media.discordapp.net/attachments/429783640361140225/1183768396320473180/image.png?ex=6589893b&is=6577143b&hm=9595558c42ffa214b5b277a1a8c743c6622882a884d35291e9ef014715ba3cb8&=&format=webp&quality=lossless&width=1136&height=623)
o	Créer un personnel  
o	Modifier un personnel  
o	Supprimer un personnel  
o	Afficher un personnel  


## Gestion des clients
![](https://media.discordapp.net/attachments/429783640361140225/1183771222501232761/image.png?ex=65898bdc&is=657716dc&hm=3c7cd46518ff25b58138f92d90857b343a30eab254afcde003a607ca832a6a0e&=&format=webp&quality=lossless&width=1142&height=622)
o	Créer un client  
o	Modifier un client  
o	Supprimer un client  
o	Afficher un client  

## Gestion des commandes
![](https://media.discordapp.net/attachments/429783640361140225/1183771988397916190/image.png?ex=65898c93&is=65771793&hm=648e1eec8c220ff7d95eccc163a0e92fda94e72d87b748c23424afd9b1e4ca1b&=&format=webp&quality=lossless&width=1130&height=623)
o	Créer une commande  
o	Modifier une commande  
o	Supprimer une commande  
o	Afficher une commande  

## Gestion du stock
![](https://media.discordapp.net/attachments/429783640361140225/1183772296603770910/image.png?ex=65898cdc&is=657717dc&hm=77668b99b9a7bdce66b00e06d6dc9a6bb3cf251b8de2e463a676c42720e13b3b&=&format=webp&quality=lossless&width=1141&height=623)
o	Créer un article  
o	Modifier un article  
o	Supprimer un article  
o	Afficher un article  

## Gestion des statistiques  
![](https://media.discordapp.net/attachments/429783640361140225/1183775566453800970/image.png?ex=65898fe8&is=65771ae8&hm=1640c31dfcd3e3158ac33509a3d7cf239d6f3baba2a60cb35d810591a793daf4&=&format=webp&quality=lossless&width=1138&height=623)

o	Calculer le panier moyen (après remise)  
o	Calculer le chiffre d’affaire sur un mois en particulier  
o	Identifier les produits sous le seuil de réapprovisionnement  
o	Calculer le montant total des achats pour un client  
o	Identifier les 10 articles les plus vendus  
o	Identifier les 10 articles les moins vendus  
o	Calculer la valeur commerciale du stock  
o	Calculer la valeur d’achat du stock  
o	Simuler des variations de valeurs commerciales pour en déduire la valeur du stock  
	Actions possibles : [TVA 1] [TVA 2] [TVA 3] || [margeCommerciale*5%] [margeCommerciale *10%] [margeCommerciale *15%]  || [remiseCommerciale*5%] [remiseCommerciale*6%] || [démarqueInconnue* 2%] [démarqueInconnue* 3%] [démarqueInconnue* 5%]  
	Possibilité pour l’utilisateur de mettre en place une infinité de combinaisons  


## BDD sur SQL Server Management Studio
![image](https://github.com/Mi2ll/ORDER-LINK/assets/119260964/09a696fb-89d1-461a-a78d-57f2b727173e)

Les requêtes SQL sont directement implementées dans notre code. 

## Création de la BDD 

```sql
CREATE TABLE Adresse(
   Id_Adresse INT IDENTITY(1,1) PRIMARY KEY,
   numero VARCHAR(50),
   rue VARCHAR(50),
   code_postal VARCHAR(50),
   ville VARCHAR(50)
);

CREATE TABLE Article(
   Id_Article INT IDENTITY(1,1) PRIMARY KEY,
   nom_article VARCHAR(50),
   qte_stock INT,
   seuil_reappro INT,
   prix_ht DECIMAL(15,2),
   tva DECIMAL(15,2),
   nature VARCHAR(50),
   couleur VARCHAR(50)
);

CREATE TABLE Paiement(
   Id_paiement INT IDENTITY(1,1) PRIMARY KEY,
   date_paiement DATE,
   montant_paye DECIMAL(15,2),
   montant_ht DECIMAL(15,2),
   tva DECIMAL(15,2)
);

CREATE TABLE Personnel(
   Id_Personnel INT IDENTITY(1,1) PRIMARY KEY,
   nom_personnel VARCHAR(50),
   prenom_personnel VARCHAR(50),
   date_embauche DATE,
   id_superieur INT,
   Id_Adresse INT NOT NULL,
   FOREIGN KEY(Id_Adresse) REFERENCES Adresse(Id_Adresse)
);

CREATE TABLE Client(
   Id_Client INT IDENTITY(1,1) PRIMARY KEY,
   nom_client VARCHAR(50),
   prenom_client VARCHAR(50),
   date_naissance DATE,
   Id_Adresse_facture INT NOT NULL,
   Id_Adresse_livre INT NOT NULL,
   FOREIGN KEY(Id_Adresse_facture) REFERENCES Adresse(Id_Adresse),
   FOREIGN KEY(Id_Adresse_livre) REFERENCES Adresse(Id_Adresse)
);

CREATE TABLE Commande(
   Id_Commande INT IDENTITY(1,1) PRIMARY KEY,
   reference VARCHAR(50),
   date_cmd DATE,
   date_livraison DATE,
   Id_paiement INT NOT NULL,
   Id_Client INT NOT NULL,
   reduction INT,
   FOREIGN KEY(Id_paiement) REFERENCES paiement(Id_paiement),
   FOREIGN KEY(Id_Client) REFERENCES Client(Id_Client)
);

CREATE TABLE Ligne_commande(
   Id_ligne_commande INT IDENTITY(1,1) PRIMARY KEY,
   qte_commandee INT,
   Id_Article INT NOT NULL,
   Id_Commande INT NOT NULL,
   FOREIGN KEY(Id_Article) REFERENCES Article(Id_Article),
   FOREIGN KEY(Id_Commande) REFERENCES Commande(Id_Commande)
);

CREATE TABLE Historique(
    id_historique INT IDENTITY(1,1) PRIMARY KEY,
    id_article    INT NULL,
    [date]         DATE NULL,
    prix_ht      FLOAT NULL
);

```
  
## Test unitaires

