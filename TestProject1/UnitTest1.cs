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


