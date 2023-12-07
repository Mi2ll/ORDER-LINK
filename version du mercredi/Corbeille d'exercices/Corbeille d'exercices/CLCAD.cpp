#include "CLCAD.h"


NS_Comp_Data::CLcad::CLcad(void)
{
	this->sCnx = "Data Source=LNGROPU;Initial Catalog= Projet_POO; Integrated Security=True;";

	this->sSql = "Rien";

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->oDs = gcnew System::Data::DataSet();

	this->oCmd->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ NS_Comp_Data::CLcad::getRows(System::String^ sSql, System::String^ sDataTableName)
{
	this->oDs->Clear();
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oDA->Fill(this->oDs, sDataTableName);

	return this->oDs;
}
void NS_Comp_Data::CLcad::actionRows(System::String^ sSql)
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	this->oCmd->ExecuteNonQuery();
	this->oCnx->Close();
}
int NS_Comp_Data::CLcad::actionRowsID(System::String^ sSql)
{
	int id;
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	try {
		this->oCnx->Open();
		id = System::Convert::ToInt32(this->oCmd->ExecuteScalar());
	}
	catch (System::Exception^ ex) {
		this->oCnx->Close();
		throw;
	}
	
	this->oCnx->Close();
	return id;
}

System::String^ NS_Comp_Data::CLcad::actionRowsString(System::String^ sSql)
{
	System::String^ retour;
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	try {
		this->oCnx->Open();
		retour += this->oCmd->ExecuteScalar();
	}
	catch (System::Exception^ ex) {
		this->oCnx->Close();
	}

	this->oCnx->Close();
	return retour;
}
