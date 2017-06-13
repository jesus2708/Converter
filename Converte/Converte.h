#pragma once  //______________________________________ Converte.h  
#include "Resource.h"
class Converte: public Win::Dialog
{
public:
	Converte()
	{
	}
	~Converte()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxCm;
	Win::Label lb1;
	Win::Button btConvertir;
	Win::Textbox tbxIn;
	Win::Label lb2;
	Win::Button gbox1;
	Win::Button radioCentrimetros;
	Win::Button radioPulgadas;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(15.02833);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(5.52979);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Converte";
		tbxCm.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 0.87313, 0.58208, 2.77812, 0.60854, hWnd, 1000);
		lb1.CreateX(NULL, L"Cm", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 3.91583, 0.63500, 2.06375, 0.60854, hWnd, 1001);
		btConvertir.CreateX(NULL, L"Convertir", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 6.42938, 0.55563, 2.46062, 0.68792, hWnd, 1002);
		tbxIn.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 9.36625, 0.50271, 2.72521, 0.60854, hWnd, 1003);
		lb2.CreateX(NULL, L"in", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 12.51479, 0.44979, 2.32833, 0.60854, hWnd, 1004);
		gbox1.CreateX(WS_EX_TRANSPARENT, L"Convertir a", WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 2.67229, 2.75167, 5.74146, 2.59292, hWnd, 1005);
		radioCentrimetros.CreateX(NULL, L"Centrimetros", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTORADIOBUTTON | BS_LEFT | BS_VCENTER, 3.33375, 3.46604, 3.41313, 0.63500, hWnd, 1006);
		radioPulgadas.CreateX(NULL, L"Pulgadas", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTORADIOBUTTON | BS_LEFT | BS_VCENTER, 3.33375, 4.36563, 3.41313, 0.63500, hWnd, 1007);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tbxCm.Font = fontArial009A;
		lb1.Font = fontArial009A;
		btConvertir.Font = fontArial009A;
		tbxIn.Font = fontArial009A;
		lb2.Font = fontArial009A;
		gbox1.Font = fontArial009A;
		radioCentrimetros.Font = fontArial009A;
		radioPulgadas.Font = fontArial009A;
	}
	//_________________________________________________
	void btConvertir_Click(Win::Event& e);
	void radioCentrimetros_Click(Win::Event& e);
	void radioPulgadas_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btConvertir.IsEvent(e, BN_CLICKED)) {btConvertir_Click(e); return true;}
		if (radioCentrimetros.IsEvent(e, BN_CLICKED)) {radioCentrimetros_Click(e); return true;}
		if (radioPulgadas.IsEvent(e, BN_CLICKED)) {radioPulgadas_Click(e); return true;}
		return false;
	}
};
