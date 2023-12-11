# ORDER-LINK

Réalisation d'une architecture de type client-serveur composée d’une application et d’une base de données.  
Application de gestion de vente en ligne de composants électroniques.  

o Interface graphique  
o BDD  
o Tests Unitaire  

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
![image](https://github.com/Mi2ll/ORDER-LINK/assets/120178295/f3b52192-95de-4f40-9306-ccfa7257f7e3)

Pour le personnel, nous avons fait des tests unitaires afin de vérifier si tout marche correctement.  
```cs
using System.Data.SqlClient;
using NS_Comp_Svc;
using NS_Comp_Mappage;
using NS_Comp_Data;
using Microsoft.VisualStudio.TestPlatform.Common.Telemetry;
using System.Transactions;
using System.Data;
using NUnit.Framework.Internal;

namespace TestProject1
{
    public class Tests
    {
        private CLservicesPersonnel svcPers;
        private CLmapPersonnel mapPers;
        private CLcad oCad;

        private string nom;
        private string prenom;
        private int id_superieur;
        private string date_embauche;
        private string numero_rue;
        private string nom_rue;
        private string code_postal;
        private string ville;

        private void AssertDataRowMatchesExpValues(DataRow dataRow, string expectedNom, string expectedPrenom, int expectedIdSuperieur,
        string expectedNumero, string expectedRue, string expectedCodePostal, string expectedVille, string expectedDateEmbauche)
        {
            Assert.That(dataRow["nom_personnel"].ToString(), Is.EqualTo(expectedNom));
            Assert.That(dataRow["prenom_personnel"].ToString(), Is.EqualTo(expectedPrenom));
            Assert.That((int)dataRow["id_superieur"], Is.EqualTo(expectedIdSuperieur));
            Assert.That(dataRow["numero"].ToString(), Is.EqualTo(expectedNumero));
            Assert.That(dataRow["rue"].ToString(), Is.EqualTo(expectedRue));
            Assert.That(dataRow["code_postal"].ToString(), Is.EqualTo(expectedCodePostal));
            Assert.That(dataRow["ville"].ToString(), Is.EqualTo(expectedVille));

            // Conversion DateTime -> String
            DateTime? dateEmbaucheValue = dataRow["date_embauche"] as DateTime?;
            Assert.That(dateEmbaucheValue?.ToString("yyyy-MM-dd"), Is.EqualTo(expectedDateEmbauche));
        }

        [SetUp]
        public void Setup()
        {
            svcPers = new CLservicesPersonnel();
            mapPers = new CLmapPersonnel();
            oCad = new CLcad();

            nom = "";
            prenom = "";
            id_superieur = 0;
            date_embauche = "";
            numero_rue = "";
            nom_rue = "";
            code_postal = "";
            ville = "";
        }

        [Test]
        public void DoesSettersWorks()
        {
            using (var transaction = new TransactionScope())
            {
                nom = "CROCHE";
                prenom = "Sarah";
                id_superieur = 0;
                date_embauche = "2019-05-16";

                mapPers.setNomPersonnel(nom);
                mapPers.setPrenomPersonnel(prenom);
                mapPers.setIdSuperieur(id_superieur);
                mapPers.setDateEmbauche(date_embauche);

                string nom2 = this.nom;
                string prenom2 = this.prenom;
                int id_superieur2 = this.id_superieur;
                string date_embauche2 = this.date_embauche;

                Assert.That(nom2, Is.EqualTo(nom));
                Assert.That(prenom2, Is.EqualTo(prenom));
                Assert.That(id_superieur2, Is.EqualTo(id_superieur));
                Assert.That(date_embauche2, Is.EqualTo(date_embauche));
            }
        }

        [Test]
        public void DoesGettersWorks()
        {
            using (var transaction = new TransactionScope())
            {
                nom = "CROCHE";
                prenom = "Sarah";
                id_superieur = 0;
                date_embauche = "2019-05-16";

                mapPers.setNomPersonnel(nom);
                mapPers.setPrenomPersonnel(prenom);
                mapPers.setIdSuperieur(id_superieur);
                mapPers.setDateEmbauche(date_embauche);

                Assert.That(mapPers.getNomPersonnel(), Is.EqualTo("CROCHE"));
                Assert.That(mapPers.getPrenomPersonnel(), Is.EqualTo("Sarah"));
                Assert.That(mapPers.getIdSuperieur(), Is.EqualTo(0));
                Assert.That(mapPers.getDateEmbauche(), Is.EqualTo("2019-05-16"));
            }
        }

        [Test]
        public void AddStaff_ValidValues()
        {
            using (var transaction = new TransactionScope())
            {
                nom = "Fitzpatrick";
                prenom = "Seraphina";
                id_superieur = 0;
                date_embauche = "2015-10-01";
                numero_rue = "55";
                nom_rue = "Chemin des Lucioles";
                code_postal = "12345";
                ville = "Narnia";

                int ajouterValue = svcPers.ajouterUnPersonnel(nom, prenom, id_superieur, date_embauche, numero_rue, nom_rue, code_postal, ville);
                Assert.That(ajouterValue, Is.Not.EqualTo(0));
            }
        }

        [Test]
        public void AddStaff_InvalidValues()
        {
            using (var transaction = new TransactionScope())
            {
                nom = "Fitzpatrick";
                prenom = "Seraphina";
                id_superieur = 0;
                date_embauche = "2015-99-100";
                numero_rue = "55";
                nom_rue = "Chemin des Lucioles";
                code_postal = "12345";
                ville = "Narnia";

                int ajouterValue = svcPers.ajouterUnPersonnel(nom, prenom, id_superieur, date_embauche, numero_rue, nom_rue, code_postal, ville);
            }
        }

        [Test]
        public void AddStaff_NoValues()
        {
            using (var transaction = new TransactionScope())
            {
                nom = "Fitzpatrick";
                prenom = "";
                id_superieur = 0;
                date_embauche = "2015-10-01";
                numero_rue = "";
                nom_rue = "Chemin des Lucioles";
                code_postal = "12345";
                ville = "";

                try
                {
                    int ajouterValue = svcPers.ajouterUnPersonnel(nom, prenom, id_superieur, date_embauche, numero_rue, nom_rue, code_postal, ville);
                }
                catch (InvalidOperationException ex)
                {
                    if (ex.Message.Equals("Certaines valeurs obligatoires sont manquantes."))
                    {
                        Assert.Fail("Certains champs ne sont pas remplis.");
                    }
                }
            }
        }

        [Test]
        public void RemoveStaff()
        {
            string SqlQuery = "";

            using (var transaction = new TransactionScope())
            {
                int id_personnel = 1;
                svcPers.supprimerUnPersonnel(id_personnel);

                nom = "ZUILI";
                prenom = "Robin";
                mapPers.setNomPersonnel(nom);
                mapPers.setPrenomPersonnel(prenom);

                
                try
                {
                    SqlQuery = mapPers.Select();
                } 
                catch (InvalidOperationException ex)
                {
                    Assert.Fail("La suppression a echouée.");
                }
                
                string dataTableName = "Rsl";
                
                DataSet resultDataSet = oCad.getRows(SqlQuery, dataTableName);
                Assert.That(resultDataSet.Tables[dataTableName]?.Rows.Count, Is.EqualTo(0));
            }
        }
    

        [Test]
        public void EditStaff_ValidValues_RightID()
        {
            string SqlQuery = "";

            using (var transaction = new TransactionScope())
            {
                int id_personnel = 1;
                nom = "ZUILI";
                prenom = "Robin";
                id_superieur = 0;
                date_embauche = "2015-10-01";
                numero_rue = "55";
                nom_rue = "Chemin des Lucioles";
                code_postal = "12345";
                ville = "Narnia";
                
                svcPers.modifierUnPersonnel(id_personnel, nom, prenom, id_superieur, date_embauche, numero_rue, nom_rue, code_postal, ville);

                string dataTableName = "Rsl";
                SqlQuery = "SELECT * FROM Personnel LEFT JOIN Adresse ON [Personnel].id_adresse = [Adresse].id_adresse WHERE id_personnel = " + id_personnel + ";";
                DataSet resultDataSet = oCad.getRows(SqlQuery, dataTableName);

                AssertDataRowMatchesExpValues(resultDataSet.Tables[dataTableName]?.Rows[0], nom, prenom, id_superieur, numero_rue, nom_rue, code_postal, ville, date_embauche);
            }
        }

        [Test]
        public void EditStaff_ValidValues_WrongID()
        {
            string SqlQuery = "";

            using (var transaction = new TransactionScope())
            {
                int id_personnel = 100;
                nom = "ZUILI";
                prenom = "Robin";
                id_superieur = 0;
                date_embauche = "2015-10-01";
                numero_rue = "55";
                nom_rue = "Chemin des Lucioles";
                code_postal = "12345";
                ville = "Narnia";

                svcPers.modifierUnPersonnel(id_personnel, nom, prenom, id_superieur, date_embauche, numero_rue, nom_rue, code_postal, ville);

                string dataTableName = "Rsl";
                SqlQuery = "SELECT * FROM Personnel LEFT JOIN Adresse ON [Personnel].id_adresse = [Adresse].id_adresse WHERE id_personnel = " + id_personnel + ";";
                DataSet resultDataSet = oCad.getRows(SqlQuery, dataTableName);

                AssertDataRowMatchesExpValues(resultDataSet.Tables[dataTableName]?.Rows[0], nom, prenom, id_superieur, numero_rue, nom_rue, code_postal, ville, date_embauche);
            }
        }

        [Test]
        public void EditStaff_EmptyValues_RightID()
        {
            string SqlQuery = "";

            using (var transaction = new TransactionScope())
            {
                int id_personnel = 1;
                nom = "ZUILI";
                prenom = "Noa";
                id_superieur = 0;
                date_embauche = "2015-10-01";
                numero_rue = "55";
                nom_rue = "Chemin des Lucioles";
                code_postal = "";
                ville = "";

                svcPers.modifierUnPersonnel(id_personnel, nom, prenom, id_superieur, date_embauche, numero_rue, nom_rue, code_postal, ville);

                string dataTableName = "Rsl";
                SqlQuery = "SELECT * FROM Personnel LEFT JOIN Adresse ON [Personnel].id_adresse = [Adresse].id_adresse WHERE id_personnel = " + id_personnel + ";";
                int id_row = 0;
                DataSet resultDataSet = oCad.getRows(SqlQuery, dataTableName);

            }
        }

        [Test]
        public void EditStaff_InvalidValues_RightID()
        {
            string SqlQuery = "";

            using (var transaction = new TransactionScope())
            {
                int id_personnel = 1;
                nom = "ZUILI";
                prenom = "Robin";
                id_superieur = 0;
                date_embauche = "2015-99-01";
                numero_rue = "55";
                nom_rue = "Chemin des Lucioles";
                code_postal = "12345";
                ville = "Narnia";

                svcPers.modifierUnPersonnel(id_personnel, nom, prenom, id_superieur, date_embauche, numero_rue, nom_rue, code_postal, ville);

                string dataTableName = "Rsl";
                SqlQuery = "SELECT * FROM Personnel LEFT JOIN Adresse ON [Personnel].id_adresse = [Adresse].id_adresse WHERE id_personnel = " + id_personnel + ";";
                DataSet resultDataSet = oCad.getRows(SqlQuery, dataTableName);

                AssertDataRowMatchesExpValues(resultDataSet.Tables[dataTableName]?.Rows[0], nom, prenom, id_superieur, numero_rue, nom_rue, code_postal, ville, date_embauche);
            }
        }

        [Test]
        public void DisplayStaff()
        {
            string SqlQuery = "";

            using (var transaction = new TransactionScope())
            {
                // rechercher un personnel sans nom indiqué revient à afficher le personnel en entier
                string dataTableName = "Rsl";
                DataSet resultDataSet = svcPers.rechercherUnPersonnel(dataTableName, nom, prenom);

                AssertDataRowMatchesExpValues(resultDataSet.Tables[dataTableName]?.Rows[0], "ZUILI", "Robin", 0, "153", "Rue Beauvoisine", "76000", "Rouen", "2023-12-08");
                AssertDataRowMatchesExpValues(resultDataSet.Tables[dataTableName]?.Rows[1], "ROULLAND", "Nathan", 0, "55", "Rue du carefour du lin", "76560", "Doudeville", "2023-07-04");
                AssertDataRowMatchesExpValues(resultDataSet.Tables[dataTableName]?.Rows[2], "ARON", "Noa", 0, "98", "Rue du langage", "12588", "Crypté", "2023-07-04");
                AssertDataRowMatchesExpValues(resultDataSet.Tables[dataTableName]?.Rows[3], "AJROUCHE", "Maël", 0, "98", "Rue des avatars", "12588", "BozoCity", "2023-07-04");
            }
        }
    }
}
```

