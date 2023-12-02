#include "CAD.h"


NS_Comp_Data::CLcad::CLcad(void)
{
    this->sCnx = "Data Source=MAELA\\MI2L;Initial Catalog=testf;Integrated Security=True";

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

void NS_Comp_Data::CLcad::actionRowsForId(System::String^ sSql, int id)
{
    // Modifiez le SQL en fonction de votre besoin, en utilisant le paramètre d'ID
    this->sSql = System::String::Format(sSql, id);

    this->oCmd->CommandText = this->sSql;

    this->oCnx->Open();
    this->oCmd->ExecuteNonQuery();
    this->oCnx->Close();
}