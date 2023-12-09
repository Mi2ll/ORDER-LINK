using System.Data.SqlClient;
using NS_Comp_Svc;
using NS_Comp_Mappage;

namespace TestProject1
{
    public class Tests
    {
        private CLserviceStatistique svcStats;

        [SetUp]
        public void Setup()
        {
            svcStats = new CLserviceStatistique();
        }

        [Test]
        public void TestAffichageChiffreAffaire()
        {
            string date = "2023-11-01";
            int chiffre_affaire = svcStats.afficherChiffreAffMois(date);
            Assert.That(chiffre_affaire, Is.EqualTo(180));
        }
    }
}