// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <math.h>
#include "calculator.h"
#include "MainForm.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender) {
	Edit1->Text = Edit1->Text + "1";
	calculator.second_num = StrToFloat(Edit1->Text);
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender) {
	Edit1->Text = Edit1->Text + "2";
	calculator.second_num = StrToFloat(Edit1->Text);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender) {
	Edit1->Text = Edit1->Text + "3";
	calculator.second_num = StrToFloat(Edit1->Text);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender) {
	Edit1->Text = Edit1->Text + "4";
	calculator.second_num = StrToFloat(Edit1->Text);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender) {
	Edit1->Text = Edit1->Text + "5";
	calculator.second_num = StrToFloat(Edit1->Text);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender) {
	Edit1->Text = Edit1->Text + "6";
	calculator.second_num = StrToFloat(Edit1->Text);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender) {
	Edit1->Text = Edit1->Text + "7";
	calculator.second_num = StrToFloat(Edit1->Text);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender) {
	Edit1->Text = Edit1->Text + "8";
	calculator.second_num = StrToFloat(Edit1->Text);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender) {
	Edit1->Text = Edit1->Text + "9";
	calculator.second_num = StrToFloat(Edit1->Text);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender) {
	Edit1->Text = Edit1->Text + "0";
	calculator.second_num = StrToFloat(Edit1->Text);
}

// ---------------------------------------------------------------------------

void __fastcall TForm1::Button16Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	calculator.symbol = '+';
	Edit1->Text = "";
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button15Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	calculator.symbol = '-';
	Edit1->Text = "";
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button14Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	calculator.symbol = '*';
	Edit1->Text = "";
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button13Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	calculator.symbol = '/';
	Edit1->Text = "";
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button17Click(TObject *Sender) {
	Edit1->Text = Edit1->Text + ",";
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button18Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	Edit1->Text = FloatToStr(1 / StrToFloat(calculator.first_num));
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button19Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	Edit1->Text = FloatToStr(StrToFloat(calculator.first_num) * StrToFloat
		(calculator.first_num));
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button20Click(TObject *Sender) {
	calculator.first_num = StrToFloat(calculator.first_num);
	Edit1->Text = "";
	calculator.second_num = StrToFloat(calculator.second_num);
	Edit1->Text = FloatToStr(powl(calculator.first_num, calculator.second_num));
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button21Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	Edit1->Text = FloatToStr(sin(StrToFloat(calculator.first_num)));
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button22Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	Edit1->Text = FloatToStr(cos(StrToFloat(calculator.first_num)));
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button23Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	Edit1->Text = FloatToStr(tan(StrToFloat(calculator.first_num)));
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button24Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	Edit1->Text = FloatToStr(sqrt(StrToFloat(calculator.first_num)));
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button25Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	Edit1->Text = FloatToStr(asin(StrToFloat(calculator.first_num)));
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button26Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	Edit1->Text = FloatToStr(acos(StrToFloat(calculator.first_num)));
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button27Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	Edit1->Text = FloatToStr(atan(StrToFloat(calculator.first_num)));
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button28Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	Edit1->Text = FloatToStr(sinh(StrToFloat(calculator.first_num)));
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button29Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	Edit1->Text = FloatToStr(cosh(StrToFloat(calculator.first_num)));
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button30Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	Edit1->Text = FloatToStr(tanh(StrToFloat(calculator.first_num)));
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button31Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	Edit1->Text = FloatToStr(powl(10, StrToFloat(calculator.first_num)));
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button32Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	Edit1->Text = FloatToStr(log(StrToFloat(calculator.first_num)));
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button33Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	Edit1->Text = FloatToStr(log10(StrToFloat(calculator.first_num)));
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button34Click(TObject *Sender) {
	calculator.first_num = StrToFloat(Edit1->Text);
	Edit1->Text = FloatToStr(exp(StrToFloat(calculator.first_num)));
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button35Click(TObject *Sender) {
	Edit1->Text = "3,14159265";
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button36Click(TObject *Sender) {
	if (calculator.first_num < 0 || calculator.first_num > 0) {
		Edit1->Text = FloatToStr(-1 * (StrToFloat(calculator.first_num)));
	}
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender) {
	switch (calculator.symbol) {
	case '+':
		calculator.first_num = calculator.first_num + calculator.second_num;
		Edit1->Text = FloatToStr(StrToFloat(calculator.first_num));
		break;
	case '-':
		calculator.first_num = calculator.first_num - calculator.second_num;
		Edit1->Text = FloatToStr(StrToFloat(calculator.first_num));
		break;
	case '*':
		calculator.first_num = calculator.first_num * calculator.second_num;
		Edit1->Text = FloatToStr(StrToFloat(calculator.first_num));
		break;
	case '/':
		calculator.first_num = calculator.first_num / calculator.second_num;
		Edit1->Text = FloatToStr(StrToFloat(calculator.first_num));
		break;
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button12Click(TObject *Sender) {
	Edit1->Text = "";
}
// ---------------------------------------------------------------------------
