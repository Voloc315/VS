#pragma once

namespace calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Button_Suma;
	protected:
	private: System::Windows::Forms::Button^  Button_0;
	private: System::Windows::Forms::Button^  Button_1;
	private: System::Windows::Forms::Button^  Button_2;
	private: System::Windows::Forms::Button^  Button_3;
	private: System::Windows::Forms::Button^  Button_4;
	private: System::Windows::Forms::Button^  Button_5;
	private: System::Windows::Forms::Button^  Button_6;
	private: System::Windows::Forms::Button^  Button_7;
	private: System::Windows::Forms::Button^  Button_8;
	private: System::Windows::Forms::Button^  Button_9;
	private: System::Windows::Forms::Button^  Button_Plus;
	private: System::Windows::Forms::Button^  Button_Razy;
	private: System::Windows::Forms::Button^  Button_Dziel;
	private: System::Windows::Forms::Button^  Button_Minus;


	private: System::Windows::Forms::Button^  Button_Clean;
	private: System::Windows::Forms::Button^  Button_Przecinek;

	private: System::Windows::Forms::TextBox^  TextBox_Suma;




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
			this->Button_Suma = (gcnew System::Windows::Forms::Button());
			this->Button_0 = (gcnew System::Windows::Forms::Button());
			this->Button_1 = (gcnew System::Windows::Forms::Button());
			this->Button_2 = (gcnew System::Windows::Forms::Button());
			this->Button_3 = (gcnew System::Windows::Forms::Button());
			this->Button_4 = (gcnew System::Windows::Forms::Button());
			this->Button_5 = (gcnew System::Windows::Forms::Button());
			this->Button_6 = (gcnew System::Windows::Forms::Button());
			this->Button_7 = (gcnew System::Windows::Forms::Button());
			this->Button_8 = (gcnew System::Windows::Forms::Button());
			this->Button_9 = (gcnew System::Windows::Forms::Button());
			this->Button_Plus = (gcnew System::Windows::Forms::Button());
			this->Button_Razy = (gcnew System::Windows::Forms::Button());
			this->Button_Dziel = (gcnew System::Windows::Forms::Button());
			this->Button_Minus = (gcnew System::Windows::Forms::Button());
			this->Button_Clean = (gcnew System::Windows::Forms::Button());
			this->Button_Przecinek = (gcnew System::Windows::Forms::Button());
			this->TextBox_Suma = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Button_Suma
			// 
			this->Button_Suma->Enabled = false;
			this->Button_Suma->Location = System::Drawing::Point(180, 189);
			this->Button_Suma->Name = L"Button_Suma";
			this->Button_Suma->Size = System::Drawing::Size(44, 79);
			this->Button_Suma->TabIndex = 0;
			this->Button_Suma->Text = L"=";
			this->Button_Suma->UseVisualStyleBackColor = true;
			this->Button_Suma->Click += gcnew System::EventHandler(this, &MyForm::Button_Suma_Click);
			// 
			// Button_0
			// 
			this->Button_0->Location = System::Drawing::Point(12, 235);
			this->Button_0->Name = L"Button_0";
			this->Button_0->Size = System::Drawing::Size(104, 33);
			this->Button_0->TabIndex = 1;
			this->Button_0->Text = L"0";
			this->Button_0->UseVisualStyleBackColor = true;
			this->Button_0->Click += gcnew System::EventHandler(this, &MyForm::Button_0_Click);
			// 
			// Button_1
			// 
			this->Button_1->Location = System::Drawing::Point(12, 189);
			this->Button_1->Name = L"Button_1";
			this->Button_1->Size = System::Drawing::Size(44, 40);
			this->Button_1->TabIndex = 2;
			this->Button_1->Text = L"1";
			this->Button_1->UseVisualStyleBackColor = true;
			this->Button_1->Click += gcnew System::EventHandler(this, &MyForm::Button_1_Click);
			// 
			// Button_2
			// 
			this->Button_2->Location = System::Drawing::Point(72, 189);
			this->Button_2->Name = L"Button_2";
			this->Button_2->Size = System::Drawing::Size(44, 40);
			this->Button_2->TabIndex = 3;
			this->Button_2->Text = L"2";
			this->Button_2->UseVisualStyleBackColor = true;
			this->Button_2->Click += gcnew System::EventHandler(this, &MyForm::Button_2_Click);
			// 
			// Button_3
			// 
			this->Button_3->Location = System::Drawing::Point(130, 189);
			this->Button_3->Name = L"Button_3";
			this->Button_3->Size = System::Drawing::Size(44, 40);
			this->Button_3->TabIndex = 4;
			this->Button_3->Text = L"3";
			this->Button_3->UseVisualStyleBackColor = true;
			this->Button_3->Click += gcnew System::EventHandler(this, &MyForm::Button_3_Click);
			// 
			// Button_4
			// 
			this->Button_4->Location = System::Drawing::Point(12, 143);
			this->Button_4->Name = L"Button_4";
			this->Button_4->Size = System::Drawing::Size(44, 40);
			this->Button_4->TabIndex = 5;
			this->Button_4->Text = L"4";
			this->Button_4->UseVisualStyleBackColor = true;
			this->Button_4->Click += gcnew System::EventHandler(this, &MyForm::Button_4_Click);
			// 
			// Button_5
			// 
			this->Button_5->Location = System::Drawing::Point(72, 143);
			this->Button_5->Name = L"Button_5";
			this->Button_5->Size = System::Drawing::Size(44, 40);
			this->Button_5->TabIndex = 6;
			this->Button_5->Text = L"5";
			this->Button_5->UseVisualStyleBackColor = true;
			this->Button_5->Click += gcnew System::EventHandler(this, &MyForm::Button_5_Click);
			// 
			// Button_6
			// 
			this->Button_6->Location = System::Drawing::Point(130, 143);
			this->Button_6->Name = L"Button_6";
			this->Button_6->Size = System::Drawing::Size(44, 40);
			this->Button_6->TabIndex = 7;
			this->Button_6->Text = L"6";
			this->Button_6->UseVisualStyleBackColor = true;
			this->Button_6->Click += gcnew System::EventHandler(this, &MyForm::Button_6_Click);
			// 
			// Button_7
			// 
			this->Button_7->Location = System::Drawing::Point(12, 97);
			this->Button_7->Name = L"Button_7";
			this->Button_7->Size = System::Drawing::Size(44, 40);
			this->Button_7->TabIndex = 8;
			this->Button_7->Text = L"7";
			this->Button_7->UseVisualStyleBackColor = true;
			this->Button_7->Click += gcnew System::EventHandler(this, &MyForm::Button_7_Click);
			// 
			// Button_8
			// 
			this->Button_8->Location = System::Drawing::Point(72, 97);
			this->Button_8->Name = L"Button_8";
			this->Button_8->Size = System::Drawing::Size(44, 40);
			this->Button_8->TabIndex = 9;
			this->Button_8->Text = L"8";
			this->Button_8->UseVisualStyleBackColor = true;
			this->Button_8->Click += gcnew System::EventHandler(this, &MyForm::Button_8_Click);
			// 
			// Button_9
			// 
			this->Button_9->Location = System::Drawing::Point(130, 97);
			this->Button_9->Name = L"Button_9";
			this->Button_9->Size = System::Drawing::Size(44, 40);
			this->Button_9->TabIndex = 10;
			this->Button_9->Text = L"9";
			this->Button_9->UseVisualStyleBackColor = true;
			this->Button_9->Click += gcnew System::EventHandler(this, &MyForm::Button_9_Click);
			// 
			// Button_Plus
			// 
			this->Button_Plus->Enabled = false;
			this->Button_Plus->Location = System::Drawing::Point(130, 52);
			this->Button_Plus->Name = L"Button_Plus";
			this->Button_Plus->Size = System::Drawing::Size(44, 39);
			this->Button_Plus->TabIndex = 12;
			this->Button_Plus->Text = L"+";
			this->Button_Plus->UseVisualStyleBackColor = true;
			this->Button_Plus->Click += gcnew System::EventHandler(this, &MyForm::Button_Plus_Click);
			// 
			// Button_Razy
			// 
			this->Button_Razy->Enabled = false;
			this->Button_Razy->Location = System::Drawing::Point(72, 52);
			this->Button_Razy->Name = L"Button_Razy";
			this->Button_Razy->Size = System::Drawing::Size(44, 39);
			this->Button_Razy->TabIndex = 13;
			this->Button_Razy->Text = L"*";
			this->Button_Razy->UseVisualStyleBackColor = true;
			this->Button_Razy->Click += gcnew System::EventHandler(this, &MyForm::Button_Razy_Click);
			// 
			// Button_Dziel
			// 
			this->Button_Dziel->Enabled = false;
			this->Button_Dziel->Location = System::Drawing::Point(12, 52);
			this->Button_Dziel->Name = L"Button_Dziel";
			this->Button_Dziel->Size = System::Drawing::Size(44, 39);
			this->Button_Dziel->TabIndex = 14;
			this->Button_Dziel->Text = L"/";
			this->Button_Dziel->UseVisualStyleBackColor = true;
			this->Button_Dziel->Click += gcnew System::EventHandler(this, &MyForm::Button_Dziel_Click);
			// 
			// Button_Minus
			// 
			this->Button_Minus->Enabled = false;
			this->Button_Minus->Location = System::Drawing::Point(180, 52);
			this->Button_Minus->Name = L"Button_Minus";
			this->Button_Minus->Size = System::Drawing::Size(44, 39);
			this->Button_Minus->TabIndex = 15;
			this->Button_Minus->Text = L"-";
			this->Button_Minus->UseVisualStyleBackColor = true;
			this->Button_Minus->Click += gcnew System::EventHandler(this, &MyForm::Button_Minus_Click);
			// 
			// Button_Clean
			// 
			this->Button_Clean->Location = System::Drawing::Point(180, 97);
			this->Button_Clean->Name = L"Button_Clean";
			this->Button_Clean->Size = System::Drawing::Size(44, 86);
			this->Button_Clean->TabIndex = 17;
			this->Button_Clean->Text = L"C\r\nL\r\nE\r\nA\r\nN";
			this->Button_Clean->UseVisualStyleBackColor = true;
			this->Button_Clean->Click += gcnew System::EventHandler(this, &MyForm::Button_Clean_Click);
			// 
			// Button_Przecinek
			// 
			this->Button_Przecinek->Location = System::Drawing::Point(130, 235);
			this->Button_Przecinek->Name = L"Button_Przecinek";
			this->Button_Przecinek->Size = System::Drawing::Size(44, 33);
			this->Button_Przecinek->TabIndex = 18;
			this->Button_Przecinek->Text = L".";
			this->Button_Przecinek->UseVisualStyleBackColor = true;
			this->Button_Przecinek->Click += gcnew System::EventHandler(this, &MyForm::button_przec_Click);
			// 
			// TextBox_Suma
			// 
			this->TextBox_Suma->Location = System::Drawing::Point(13, 13);
			this->TextBox_Suma->Name = L"TextBox_Suma";
			this->TextBox_Suma->Size = System::Drawing::Size(207, 20);
			this->TextBox_Suma->TabIndex = 19;
			this->TextBox_Suma->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TextBox_Suma->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox_Suma_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(232, 273);
			this->Controls->Add(this->TextBox_Suma);
			this->Controls->Add(this->Button_Przecinek);
			this->Controls->Add(this->Button_Clean);
			this->Controls->Add(this->Button_Minus);
			this->Controls->Add(this->Button_Dziel);
			this->Controls->Add(this->Button_Razy);
			this->Controls->Add(this->Button_Plus);
			this->Controls->Add(this->Button_9);
			this->Controls->Add(this->Button_8);
			this->Controls->Add(this->Button_7);
			this->Controls->Add(this->Button_6);
			this->Controls->Add(this->Button_5);
			this->Controls->Add(this->Button_4);
			this->Controls->Add(this->Button_3);
			this->Controls->Add(this->Button_2);
			this->Controls->Add(this->Button_1);
			this->Controls->Add(this->Button_0);
			this->Controls->Add(this->Button_Suma);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion		
public:
	System::Single liczba1 = 0, liczba2 = 0, wynik;
	System::Char znak;
	System::Boolean flaga = false;

	private: System::Void Button_Clean_Click(System::Object^  sender, System::EventArgs^  e) {
				 TextBox_Suma->Text = "\0";
				 Button_Przecinek->Enabled = true;
				 Button_Plus->Enabled = false;
				 Button_Minus->Enabled = false;
				 Button_Razy->Enabled = false;
				 Button_Dziel->Enabled = false;
				 Button_Suma->Enabled = false;
	}

	private: System::Void Button_0_Click(System::Object^  sender, System::EventArgs^  e) {
				 TextBox_Suma->AppendText("0");
				 Button_Plus->Enabled = true;
				 Button_Minus->Enabled = true;
				 Button_Razy->Enabled = true;
				 Button_Dziel->Enabled = true;
	}

	private: System::Void Button_1_Click(System::Object^  sender, System::EventArgs^  e) {
				 TextBox_Suma->AppendText("1");
				 Button_Plus->Enabled = true;
				 Button_Minus->Enabled = true;
				 Button_Razy->Enabled = true;
				 Button_Dziel->Enabled = true;
	}

	private: System::Void Button_2_Click(System::Object^  sender, System::EventArgs^  e) {
				 TextBox_Suma->AppendText("2");
				 Button_Plus->Enabled = true;
				 Button_Minus->Enabled = true;
				 Button_Razy->Enabled = true;
				 Button_Dziel->Enabled = true;
	}

	private: System::Void Button_3_Click(System::Object^  sender, System::EventArgs^  e) {
				 TextBox_Suma->AppendText("3");
				 Button_Plus->Enabled = true;
				 Button_Minus->Enabled = true;
				 Button_Razy->Enabled = true;
				 Button_Dziel->Enabled = true;

	}
	private: System::Void Button_4_Click(System::Object^  sender, System::EventArgs^  e) {
				 TextBox_Suma->AppendText("4");
				 Button_Plus->Enabled = true;
				 Button_Minus->Enabled = true;
				 Button_Razy->Enabled = true;
				 Button_Dziel->Enabled = true;

	}
	private: System::Void Button_5_Click(System::Object^  sender, System::EventArgs^  e) {
				 TextBox_Suma->AppendText("5");
				 Button_Plus->Enabled = true;
				 Button_Minus->Enabled = true;
				 Button_Razy->Enabled = true;
				 Button_Dziel->Enabled = true;

	}
	private: System::Void Button_6_Click(System::Object^  sender, System::EventArgs^  e) {
				 TextBox_Suma->AppendText("6");
				 Button_Plus->Enabled = true;
				 Button_Minus->Enabled = true;
				 Button_Razy->Enabled = true;
				 Button_Dziel->Enabled = true;
	}
	private: System::Void Button_7_Click(System::Object^  sender, System::EventArgs^  e) {
				 TextBox_Suma->AppendText("7");
				 Button_Plus->Enabled = true;
				 Button_Minus->Enabled = true;
				 Button_Razy->Enabled = true;
				 Button_Dziel->Enabled = true;

	}
	private: System::Void Button_8_Click(System::Object^  sender, System::EventArgs^  e) {
				 TextBox_Suma->AppendText("8");
				 Button_Plus->Enabled = true;
				 Button_Minus->Enabled = true;
				 Button_Razy->Enabled = true;
				 Button_Dziel->Enabled = true;

	}
	private: System::Void Button_9_Click(System::Object^  sender, System::EventArgs^  e) {
				 TextBox_Suma->AppendText("9");
				 Button_Plus->Enabled = true;
				 Button_Minus->Enabled = true;
				 Button_Razy->Enabled = true;
				 Button_Dziel->Enabled = true;

	}
	private: System::Void button_przec_Click(System::Object^  sender, System::EventArgs^  e) {
				 TextBox_Suma->AppendText(",");
				 if (TextBox_Suma->Text == ",")
					 TextBox_Suma->Text = "0,";
				 Button_Przecinek->Enabled = false;
	}
	public: System::Void Button_Plus_Click(System::Object^  sender, System::EventArgs^  e) {
				 znak = '+';
				 flaga = false;
				 Button_Przecinek->Enabled = true;
				 liczba1 = System::Single::Parse(TextBox_Suma->Text);
				 TextBox_Suma->Text = "\0";
				 Button_Plus->Enabled = false;
				 Button_Minus->Enabled = false;
				 Button_Razy->Enabled = false;
				 Button_Dziel->Enabled = false;
				 Button_Suma->Enabled = true;
	}
	private: System::Void Button_Minus_Click(System::Object^  sender, System::EventArgs^  e) {
				 znak = '-';
				 flaga = false;
				 Button_Przecinek->Enabled = true;
				 liczba1 = System::Single::Parse(TextBox_Suma->Text);
				 TextBox_Suma->Text = "\0";
				 Button_Plus->Enabled = false;
				 Button_Minus->Enabled = false;
				 Button_Razy->Enabled = false;
				 Button_Dziel->Enabled = false;
				 Button_Suma->Enabled = true;
	}
	private: System::Void Button_Razy_Click(System::Object^  sender, System::EventArgs^  e) {
				 znak = '*';
				 flaga = false;
				 Button_Przecinek->Enabled = true;
				
				 liczba1 = System::Single::Parse(TextBox_Suma->Text);
				 TextBox_Suma->Text = "\0";
				 Button_Plus->Enabled = false;
				 Button_Minus->Enabled = false;
				 Button_Razy->Enabled = false;
				 Button_Dziel->Enabled = false;
				 Button_Suma->Enabled = true;
	}
	private: System::Void Button_Dziel_Click(System::Object^  sender, System::EventArgs^  e) {
				 znak = '/';
				 flaga = false;
				 Button_Przecinek->Enabled = true;
				 liczba1 = System::Single::Parse(TextBox_Suma->Text);
				 TextBox_Suma->Text = "\0";
				 Button_Plus->Enabled = false;
				 Button_Minus->Enabled = false;
				 Button_Razy->Enabled = false;
				 Button_Dziel->Enabled = false;
				 Button_Suma->Enabled = true;
	}
	private: System::Void Button_Suma_Click(System::Object^  sender, System::EventArgs^  e) {
				

				 if (znak == '+')
				 {
					 if (flaga)
					 {
						 wynik += liczba2;
						 TextBox_Suma->Text = wynik.ToString();
					 }
					 else
					 {
						 liczba2 = System::Single::Parse(TextBox_Suma->Text);
						 wynik = liczba1 + liczba2;
						 TextBox_Suma->Text = wynik.ToString();
					 }
				 }
				 else if (znak == '-')
				 {
					 if (flaga)
					 {
						 wynik -= liczba2;
						 TextBox_Suma->Text = wynik.ToString();
					 }
					 else
					 {
						 liczba2 = System::Single::Parse(TextBox_Suma->Text);
						 wynik = liczba1 - liczba2;
						 TextBox_Suma->Text = wynik.ToString();
					 }
				 }
				 else if (znak == '*')
				 {
					 if (flaga)
					 {
						 wynik *= liczba2;
						 TextBox_Suma->Text = wynik.ToString();
					 }
					 else
					 {
						 liczba2 = System::Single::Parse(TextBox_Suma->Text);
						 wynik = liczba1 * liczba2;
						 TextBox_Suma->Text = wynik.ToString();
					 }
				 }
				 else if (znak == '/')
				 {
					 if (flaga)
					 {
						 wynik /= liczba2;
						 TextBox_Suma->Text = wynik.ToString();
					 }
					 else
					 {
						 liczba2 = System::Single::Parse(TextBox_Suma->Text);
						 wynik = liczba1 / liczba2;
						 TextBox_Suma->Text = wynik.ToString();
					 }
				 }
				 flaga = true;
	}
	private: System::Void TextBox_Suma_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 
}
};
}