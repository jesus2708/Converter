#include "stdafx.h"  //________________________________________ Converte.cpp
#include "Converte.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Converte app;
	return app.BeginDialog(IDI_Converte, hInstance);
}
int opcion = 0;
void Converte::Window_Open(Win::Event& e)
{
	radioPulgadas.Checked = true;
	radioCentrimetros.Checked = false;
}

void Converte::btConvertir_Click(Win::Event& e)
{
	if (opcion==1)
	{
		double resultado = 0.39370 * tbxCm.DoubleValue;
		this->tbxIn.DoubleValue = resultado;
	}
	else
	{
		double resultado = 2.54 * tbxCm.DoubleValue;
		this->tbxIn.DoubleValue = resultado;
	}
}

void Converte::radioCentrimetros_Click(Win::Event& e)
{
	lb1.Text = L"cm";
	lb2.Text = L"in";
	opcion = 1;
}

void Converte::radioPulgadas_Click(Win::Event& e)
{
	lb1.Text = L"in";
	lb2.Text = L"cm";
	opcion = 2;

}

