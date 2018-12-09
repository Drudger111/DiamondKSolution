#include "DkForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace DkTest;



DkForm::DkForm(void)
{
	InitializeComponent();
	
	dkProc = new CDiamondKProc();
	if (!dkProc)
		Close();


}


System::Void DkForm::btnSCAV_Click(System::Object^  sender, System::EventArgs^  e) {


	//try {
		lblReturnVal->Text = Convert::ToString(dkProc->searchContinuityAboveValue(
			Convert::ToDouble(txtData->Text),
			Convert::ToInt32(txtIDXB->Text),
			Convert::ToInt32(txtIDXE->Text),
			Convert::ToDouble(txtThresh1->Text),
			Convert::ToInt32(txtWinLen->Text))
		);
	//}
	//catch (...) {
	//	MessageBox::Show("Error");
	//}
		lblExecTime->Text = Convert::ToString(dkProc->GetLastExecTime());
}

System::Void DkForm::btnSCWR_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		dkProc->searchMultiContinuityWithinRange(
			Convert::ToDouble(txtData->Text),
			Convert::ToInt32(txtIDXB->Text),
			Convert::ToInt32(txtIDXE->Text),
			Convert::ToDouble(txtThresh1->Text),
			Convert::ToDouble(txtThresh2->Text),
			Convert::ToInt32(txtWinLen->Text)
		);
	}
	catch (...) {
		MessageBox::Show("Error");
	}
}

System::Void DkForm::btnSCAVTS_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		dkProc->searchContinuityAboveValueTwoSignals(
			Convert::ToDouble(txtData->Text),
			Convert::ToDouble(txtData->Text),
			Convert::ToInt32(txtIDXB->Text),
			Convert::ToInt32(txtIDXE->Text),
			Convert::ToDouble(txtThresh1->Text),
			Convert::ToDouble(txtThresh2->Text),
			Convert::ToInt32(txtWinLen->Text)
		);
	}
	catch (...) {
		MessageBox::Show("Error");
	}
}

System::Void DkForm::btnSMCWR_Click(System::Object^  sender, System::EventArgs^  e) {
	dkProc->searchMultiContinuityWithinRange(
		Convert::ToDouble(txtData->Text),
		Convert::ToInt32(txtIDXB->Text),
		Convert::ToInt32(txtIDXE->Text),
		Convert::ToDouble(txtThresh1->Text),
		Convert::ToDouble(txtThresh2->Text),
		Convert::ToInt32(txtWinLen->Text)
	);
}

System::Void DkForm::btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}


