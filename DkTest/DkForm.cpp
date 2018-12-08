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
	
	try {
		dkProc->searchContinuityAboveValue(
			Convert::ToDouble(txtData),
			Convert::ToInt32(txtIDXB),
			Convert::ToInt32(txtIDXE),
			Convert::ToDouble(txtThresh1),
			Convert::ToInt32(txtWinLen)
		);
	}
	catch (...) {
		MessageBox::Show("Error");
	}

}

System::Void DkForm::btnSCWR_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		dkProc->searchMultiContinuityWithinRange(
			Convert::ToDouble(txtData),
			Convert::ToInt32(txtIDXB),
			Convert::ToInt32(txtIDXE),
			Convert::ToDouble(txtThresh1),
			Convert::ToDouble(txtThresh2),
			Convert::ToInt32(txtWinLen)
		);
	}
	catch (...) {
		MessageBox::Show("Error");
	}
}

System::Void DkForm::btnSCAVTS_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		dkProc->searchContinuityAboveValueTwoSignals(
			Convert::ToDouble(txtData),
			Convert::ToDouble(txtData),
			Convert::ToInt32(txtIDXB),
			Convert::ToInt32(txtIDXE),
			Convert::ToDouble(txtThresh1),
			Convert::ToDouble(txtThresh2),
			Convert::ToInt32(txtWinLen)
		);
	}
	catch (...) {
		MessageBox::Show("Error");
	}
}

System::Void DkForm::btnSMCWR_Click(System::Object^  sender, System::EventArgs^  e) {
	dkProc->searchMultiContinuityWithinRange(
		Convert::ToDouble(txtData),
		Convert::ToInt32(txtIDXB),
		Convert::ToInt32(txtIDXE),
		Convert::ToDouble(txtThresh1),
		Convert::ToDouble(txtThresh2),
		Convert::ToInt32(txtWinLen)
	);
}

System::Void DkForm::btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}


