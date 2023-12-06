#pragma once

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;


namespace NS_Composants
{
	ref class CL_CAD {
	private:
		String^ connect;
		String^ request;
		SqlConnection^ connection;
		SqlCommand^ commande;
		SqlDataAdapter^ dataAdapter;
		DataSet^ dataSet;
		void setSQL(String^);
	public:
		CL_CAD();
		int actionRowsID(String^);
		void actionRows(String^);
		DataSet^ getRows(String^, String^);
	}; 
}