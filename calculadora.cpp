//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "calculadora.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::SomaClick(TObject *Sender)
{
	Valor->Text = StrToInt(Edit1->Text) + StrToInt(Edit2->Text);
	Edit1->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::SubtracaoClick(TObject *Sender)
{
	Valor->Text = StrToInt(Edit1->Text) - StrToInt(Edit2->Text);
	Edit1->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::MultiplicacaoClick(TObject *Sender)
{
	Valor->Text = StrToInt(Edit1->Text) * StrToInt(Edit2->Text);
	Edit1->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::DivisaoClick(TObject *Sender)
{
	Valor->Text = StrToInt(Edit1->Text) / StrToInt(Edit2->Text);
	Edit1->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender)
{
    Edit1->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::LimparClick(TObject *Sender)
{
	Edit1->Text = "";
	Edit2->Text = "";
    Edit1->SetFocus();
}
//---------------------------------------------------------------------------
