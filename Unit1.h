//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TTrackBar *Dof;
	TTrackBar *Sera;
	TTrackBar *Endr;
	TTrackBar *Okst;
	TTrackBar *Nora;
	TTrackBar *Adre;
	TTrackBar *Estr;
	TTrackBar *Testos;
	TTrackBar *Feni;
	TTrackBar *Mela;
	TTrackBar *Vazo;
	TTrackBar *Proges;
	TTrackBar *Prola;
	TTrackBar *Acet;
	TTrackBar *Tiro;
	TComboBox *ComboBox1;
	TProgressBar *ProgressBar1;
	TProgressBar *ProgressBar2;
	TProgressBar *ProgressBar3;
	TProgressBar *ProgressBar4;
	TProgressBar *ProgressBar5;
	TProgressBar *ProgressBar6;
	TProgressBar *ProgressBar7;
	TProgressBar *ProgressBar8;
	TProgressBar *ProgressBar9;
	TProgressBar *ProgressBar10;
	TProgressBar *ProgressBar11;
	TProgressBar *ProgressBar12;
	TProgressBar *ProgressBar13;
	TProgressBar *ProgressBar14;
	TProgressBar *ProgressBar15;
	TProgressBar *ProgressBar16;
	TButton *Button1;
	TImage *Image1;
	TImage *Image2;
	void __fastcall DofChange(TObject *Sender);
	void __fastcall SeraChange(TObject *Sender);
	void __fastcall EndrChange(TObject *Sender);
	void __fastcall OkstChange(TObject *Sender);
	void __fastcall NoraChange(TObject *Sender);
	void __fastcall AdreChange(TObject *Sender);
	void __fastcall EstrChange(TObject *Sender);
	void __fastcall TestosChange(TObject *Sender);
	void __fastcall FeniChange(TObject *Sender);
	void __fastcall MelaChange(TObject *Sender);
	void __fastcall VazoChange(TObject *Sender);
	void __fastcall ProgesChange(TObject *Sender);
	void __fastcall ProlaChange(TObject *Sender);
	void __fastcall AcetChange(TObject *Sender);
	void __fastcall TiroChange(TObject *Sender);
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
