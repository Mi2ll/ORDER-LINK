#include "CL_CAD.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_Composants {
	CL_CAD::CL_CAD() {
		this->request = "RIEN";
		this->connect = "Data Source=LAPTOP-4FAP8S0J\MSSQL_NATHAN;" +
			"Initial Catalog=Corbeille6;" + // Remplacez YourDatabaseName par le nom de votre base de données
			"Integrated Security=True";
		this->connection = gcnew SqlConnection(this->connect);
		this->commande = gcnew SqlCommand(this->request, this->connection);
		this->commande->CommandType = CommandType::Text;
	}
	int CL_CAD::actionRowsID(String^ request) {
		int id;
		this->setSQL(request);
		this->commande->CommandText = this->request;
		this->connection->Open();
		id = Convert::ToInt32(this->commande->ExecuteScalar());
		this->connection->Close();
		return id;
	}
	void CL_CAD::actionRows(String^ request) {
		this->setSQL(request);
		this->commande->CommandText = this->request;
		this->connection->Open();
		this->commande->ExecuteNonQuery();
		this->connection->Close();
	}
	void CL_CAD::setSQL(String^ request) {
		if (request == "" || request == "RIEN") {
			this->request = "RIEN";
		}
		else {
			this->request = request;	
		}
	}
}