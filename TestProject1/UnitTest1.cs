using System.Data.SqlClient;
using NS_Comp_Svc;
using NS_Comp_Mappage;
using Microsoft.VisualStudio.TestPlatform.Common.Telemetry;
using System.Transactions;

namespace TestProject1
{
    public class Tests
    {
        private CLservicesPersonnel svcPers;

        private string nom;
        private string prenom;
        private int id_superieur;
        private string date_embauche;
        private string numero_rue;
        private string nom_rue;
        private string code_postal;
        private string ville;

        [SetUp]
        public void Setup()
        {
           svcPers = new CLservicesPersonnel();

            nom = "ZUILIII";
            prenom = "Robiiin";
            id_superieur = 0;
            date_embauche = "2022-05-05";
            numero_rue = "151";
            nom_rue = "Rue Ouafa";
            code_postal = "76666";
            ville = "RouenCity";
        }

        [Test]
        public void IsDataEnteredCorrect()
        {
            svcPers.ajouterUnPersonnel(nom, prenom, id_superieur, date_embauche, numero_rue, nom_rue, code_postal, ville);
        }
    }
}