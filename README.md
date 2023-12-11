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

## Test unitaires

