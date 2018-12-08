#pragma once

#include "CDiamondKProc.h"

using namespace System;
using namespace System::Windows::Forms;



namespace DkTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DkForm
	/// </summary>
	public ref class DkForm : public System::Windows::Forms::Form
	{
	public:

		CDiamondKProc* dkProc;

		DkForm(void);//
		//{
		//	InitializeComponent();
		//	//
		//	//TODO: Add the constructor code here
		//	//
		//}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DkForm(){
			if (components)
			{
				delete components;
			}
			try {
				if (NULL != dkProc) {
					delete(dkProc);
					dkProc = NULL;
				}
			}catch(...){}
		}
	private: System::Windows::Forms::TextBox^  txtData;
	protected:
	private: System::Windows::Forms::TextBox^  txtIDXB;
	private: System::Windows::Forms::TextBox^  txtIDXE;
	private: System::Windows::Forms::TextBox^  txtThresh1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  txtThresh2;
	private: System::Windows::Forms::TextBox^  txtWinLen;
	private: System::Windows::Forms::Button^  btnSCWR;

	private: System::Windows::Forms::Button^  btnSCAV;
	private: System::Windows::Forms::Button^  btnSMCWR;


	private: System::Windows::Forms::Button^  btnSCAVTS;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lblReturnVal;
	private: System::Windows::Forms::Button^  btnClose;



	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  lblExecTime;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DkForm::typeid));
			this->txtData = (gcnew System::Windows::Forms::TextBox());
			this->txtIDXB = (gcnew System::Windows::Forms::TextBox());
			this->txtIDXE = (gcnew System::Windows::Forms::TextBox());
			this->txtThresh1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtThresh2 = (gcnew System::Windows::Forms::TextBox());
			this->txtWinLen = (gcnew System::Windows::Forms::TextBox());
			this->btnSCWR = (gcnew System::Windows::Forms::Button());
			this->btnSCAV = (gcnew System::Windows::Forms::Button());
			this->btnSMCWR = (gcnew System::Windows::Forms::Button());
			this->btnSCAVTS = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lblExecTime = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblReturnVal = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtData
			// 
			this->txtData->Location = System::Drawing::Point(237, 160);
			this->txtData->Name = L"txtData";
			this->txtData->Size = System::Drawing::Size(68, 31);
			this->txtData->TabIndex = 3;
			this->txtData->Text = L"0";
			// 
			// txtIDXB
			// 
			this->txtIDXB->Location = System::Drawing::Point(237, 197);
			this->txtIDXB->Name = L"txtIDXB";
			this->txtIDXB->Size = System::Drawing::Size(68, 31);
			this->txtIDXB->TabIndex = 4;
			this->txtIDXB->Text = L"0";
			// 
			// txtIDXE
			// 
			this->txtIDXE->Location = System::Drawing::Point(237, 234);
			this->txtIDXE->Name = L"txtIDXE";
			this->txtIDXE->Size = System::Drawing::Size(68, 31);
			this->txtIDXE->TabIndex = 5;
			this->txtIDXE->Text = L"0";
			// 
			// txtThresh1
			// 
			this->txtThresh1->Location = System::Drawing::Point(237, 271);
			this->txtThresh1->Name = L"txtThresh1";
			this->txtThresh1->Size = System::Drawing::Size(68, 31);
			this->txtThresh1->TabIndex = 6;
			this->txtThresh1->Text = L"0";
			// 
			// label3
			// 
			this->label3->AccessibleDescription = L"txtSCAVIDXE";
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 7.875F));
			this->label3->Location = System::Drawing::Point(56, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 26);
			this->label3->TabIndex = 8;
			this->label3->Text = L"data:";
			// 
			// label4
			// 
			this->label4->AccessibleDescription = L"txtSCAVIDXE";
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 7.875F));
			this->label4->Location = System::Drawing::Point(56, 203);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 26);
			this->label4->TabIndex = 9;
			this->label4->Text = L"indexBegin:";
			// 
			// label5
			// 
			this->label5->AccessibleDescription = L"txtSCAVIDXE";
			this->label5->AutoSize = true;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 7.875F));
			this->label5->Location = System::Drawing::Point(56, 240);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 26);
			this->label5->TabIndex = 10;
			this->label5->Text = L"indexEnd:";
			// 
			// label6
			// 
			this->label6->AccessibleDescription = L"txtSCAVIDXE";
			this->label6->AutoSize = true;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 7.875F));
			this->label6->Location = System::Drawing::Point(56, 274);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(152, 26);
			this->label6->TabIndex = 11;
			this->label6->Text = L"threshold 1 (Lo):";
			// 
			// label7
			// 
			this->label7->AccessibleDescription = L"txtSCAVIDXE";
			this->label7->AutoSize = true;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 7.875F));
			this->label7->Location = System::Drawing::Point(56, 314);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 26);
			this->label7->TabIndex = 12;
			this->label7->Text = L"threshold 2 (Hi):";
			// 
			// label8
			// 
			this->label8->AccessibleDescription = L"txtSCAVIDXE";
			this->label8->AutoSize = true;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 7.875F));
			this->label8->Location = System::Drawing::Point(56, 348);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(107, 26);
			this->label8->TabIndex = 13;
			this->label8->Text = L"winLength:";
			// 
			// txtThresh2
			// 
			this->txtThresh2->Location = System::Drawing::Point(237, 308);
			this->txtThresh2->Name = L"txtThresh2";
			this->txtThresh2->Size = System::Drawing::Size(68, 31);
			this->txtThresh2->TabIndex = 14;
			this->txtThresh2->Text = L"0";
			// 
			// txtWinLen
			// 
			this->txtWinLen->Location = System::Drawing::Point(237, 345);
			this->txtWinLen->Name = L"txtWinLen";
			this->txtWinLen->Size = System::Drawing::Size(68, 31);
			this->txtWinLen->TabIndex = 15;
			this->txtWinLen->Text = L"0";
			// 
			// btnSCWR
			// 
			this->btnSCWR->Font = (gcnew System::Drawing::Font(L"Calibri", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSCWR->Location = System::Drawing::Point(61, 465);
			this->btnSCWR->Name = L"btnSCWR";
			this->btnSCWR->Size = System::Drawing::Size(977, 36);
			this->btnSCWR->TabIndex = 17;
			this->btnSCWR->Text = L"backSearchContinuityWithinRange(data, indexBegin, indexEnd, thresholdLo, threshol"
				L"dHi, winLength)";
			this->btnSCWR->UseVisualStyleBackColor = true;
			this->btnSCWR->Click += gcnew System::EventHandler(this, &DkForm::btnSCWR_Click);
			// 
			// btnSCAV
			// 
			this->btnSCAV->Font = (gcnew System::Drawing::Font(L"Calibri", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSCAV->Location = System::Drawing::Point(61, 423);
			this->btnSCAV->Name = L"btnSCAV";
			this->btnSCAV->Size = System::Drawing::Size(977, 36);
			this->btnSCAV->TabIndex = 18;
			this->btnSCAV->Text = L"searchContinuityAboveValue(data, indexBegin, indexEnd, threshold, winLength)";
			this->btnSCAV->UseVisualStyleBackColor = true;
			this->btnSCAV->Click += gcnew System::EventHandler(this, &DkForm::btnSCAV_Click);
			// 
			// btnSMCWR
			// 
			this->btnSMCWR->Font = (gcnew System::Drawing::Font(L"Calibri", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSMCWR->Location = System::Drawing::Point(61, 549);
			this->btnSMCWR->Name = L"btnSMCWR";
			this->btnSMCWR->Size = System::Drawing::Size(977, 36);
			this->btnSMCWR->TabIndex = 20;
			this->btnSMCWR->Text = L"searchMultiContinuityWithinRange(data, indexBegin, indexEnd, thresholdLo, thresho"
				L"ldHi, winLength)";
			this->btnSMCWR->UseVisualStyleBackColor = true;
			this->btnSMCWR->Click += gcnew System::EventHandler(this, &DkForm::btnSMCWR_Click);
			// 
			// btnSCAVTS
			// 
			this->btnSCAVTS->Font = (gcnew System::Drawing::Font(L"Calibri", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSCAVTS->Location = System::Drawing::Point(61, 507);
			this->btnSCAVTS->Name = L"btnSCAVTS";
			this->btnSCAVTS->Size = System::Drawing::Size(977, 36);
			this->btnSCAVTS->TabIndex = 19;
			this->btnSCAVTS->Text = L"searchContinuityAboveValueTwoSignals(data1, data2, indexBegin, indexEnd, threshol"
				L"d1, threshold2, winLength)";
			this->btnSCAVTS->UseVisualStyleBackColor = true;
			this->btnSCAVTS->Click += gcnew System::EventHandler(this, &DkForm::btnSCAVTS_Click);
			// 
			// label1
			// 
			this->label1->AccessibleDescription = L"txtSCAVIDXE";
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Location = System::Drawing::Point(56, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(982, 111);
			this->label1->TabIndex = 21;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->lblExecTime);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->lblReturnVal);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 7.875F));
			this->groupBox1->Location = System::Drawing::Point(371, 154);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(666, 235);
			this->groupBox1->TabIndex = 22;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Return Data";
			// 
			// label11
			// 
			this->label11->AccessibleDescription = L"txtSCAVIDXE";
			this->label11->AutoSize = true;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label11->Location = System::Drawing::Point(418, 88);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(124, 26);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Milliseconds:";
			// 
			// label9
			// 
			this->label9->AccessibleDescription = L"txtSCAVIDXE";
			this->label9->AutoSize = true;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Location = System::Drawing::Point(28, 86);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(147, 26);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Execution Time:";
			// 
			// lblExecTime
			// 
			this->lblExecTime->AccessibleDescription = L"";
			this->lblExecTime->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblExecTime->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblExecTime->Location = System::Drawing::Point(241, 86);
			this->lblExecTime->Name = L"lblExecTime";
			this->lblExecTime->Size = System::Drawing::Size(171, 28);
			this->lblExecTime->TabIndex = 10;
			this->lblExecTime->Text = L"-1";
			// 
			// label2
			// 
			this->label2->AccessibleDescription = L"txtSCAVIDXE";
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Location = System::Drawing::Point(28, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(207, 26);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Function Return Value:";
			// 
			// lblReturnVal
			// 
			this->lblReturnVal->AccessibleDescription = L"";
			this->lblReturnVal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblReturnVal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblReturnVal->Location = System::Drawing::Point(241, 49);
			this->lblReturnVal->Name = L"lblReturnVal";
			this->lblReturnVal->Size = System::Drawing::Size(77, 28);
			this->lblReturnVal->TabIndex = 8;
			this->lblReturnVal->Text = L"-1";
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(864, 627);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(174, 33);
			this->btnClose->TabIndex = 23;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &DkForm::btnClose_Click);
			// 
			// DkForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1088, 685);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnSMCWR);
			this->Controls->Add(this->btnSCAVTS);
			this->Controls->Add(this->btnSCAV);
			this->Controls->Add(this->btnSCWR);
			this->Controls->Add(this->txtWinLen);
			this->Controls->Add(this->txtThresh2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtThresh1);
			this->Controls->Add(this->txtIDXE);
			this->Controls->Add(this->txtIDXB);
			this->Controls->Add(this->txtData);
			this->Name = L"DkForm";
			this->Text = L"Diamond Kinetics - Test App";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSCAV_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnSCWR_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnSCAVTS_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnSMCWR_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e);
};

}

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DkTest::DkForm form;
	Application::Run(%form);
}

