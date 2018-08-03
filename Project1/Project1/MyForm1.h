#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::TextBox^  textBox30;





	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(12, 12);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(74, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Mitarbeiter";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton1_CheckedChanged_1);
			this->radioButton1->Click += gcnew System::EventHandler(this, &MyForm1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(12, 36);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(69, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Abteilung";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton2_CheckedChanged_1);
			this->radioButton2->Click += gcnew System::EventHandler(this, &MyForm1::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(12, 60);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(96, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"Abteilungsleiter";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton3_CheckedChanged_1);
			this->radioButton3->Click += gcnew System::EventHandler(this, &MyForm1::radioButton3_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 83);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(76, 40);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Eintrag anlegen";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(14, 242);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Abbrechen";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(112, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(345, 252);
			this->panel1->TabIndex = 5;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(183, 184);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(136, 20);
			this->textBox8->TabIndex = 18;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(39, 184);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(121, 20);
			this->textBox7->TabIndex = 17;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(180, 168);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(84, 13);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Festnetznummer";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(39, 168);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Mobilnummer";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(183, 142);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(136, 20);
			this->textBox6->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(180, 126);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(32, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Stadt";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(183, 99);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(136, 20);
			this->textBox5->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(39, 142);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 20);
			this->textBox4->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(39, 126);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Postleitzahl";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(180, 83);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Hausnummer";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(39, 99);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 20);
			this->textBox3->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(39, 83);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Straße";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(39, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Abteilung";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(39, 59);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 2;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(39, 226);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(39, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Eintrittsdatum";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(183, 20);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(136, 20);
			this->textBox2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(180, 4);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nachname";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Vorname";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(39, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(39, 144);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(280, 20);
			this->textBox10->TabIndex = 17;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(39, 128);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(224, 13);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Sitz der Abteilung (Bsp.: Gebäude 4, 1. Stock)";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(183, 102);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(136, 20);
			this->textBox11->TabIndex = 6;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(180, 86);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(32, 13);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Stadt";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(183, 59);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(136, 20);
			this->textBox12->TabIndex = 4;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(39, 102);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(121, 20);
			this->textBox13->TabIndex = 5;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(39, 86);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(60, 13);
			this->label14->TabIndex = 11;
			this->label14->Text = L"Postleitzahl";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(180, 43);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(69, 13);
			this->label15->TabIndex = 10;
			this->label15->Text = L"Hausnummer";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(39, 59);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(121, 20);
			this->textBox14->TabIndex = 3;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(39, 43);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(38, 13);
			this->label16->TabIndex = 8;
			this->label16->Text = L"Straße";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(39, 4);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(100, 13);
			this->label20->TabIndex = 1;
			this->label20->Text = L"Name der Abteilung";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(39, 20);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(121, 20);
			this->textBox16->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->textBox9);
			this->panel3->Controls->Add(this->textBox15);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->textBox17);
			this->panel3->Controls->Add(this->label18);
			this->panel3->Controls->Add(this->textBox18);
			this->panel3->Controls->Add(this->textBox19);
			this->panel3->Controls->Add(this->label19);
			this->panel3->Controls->Add(this->label21);
			this->panel3->Controls->Add(this->textBox20);
			this->panel3->Controls->Add(this->label22);
			this->panel3->Controls->Add(this->label23);
			this->panel3->Controls->Add(this->comboBox2);
			this->panel3->Controls->Add(this->dateTimePicker2);
			this->panel3->Controls->Add(this->label24);
			this->panel3->Controls->Add(this->textBox21);
			this->panel3->Controls->Add(this->label25);
			this->panel3->Controls->Add(this->label26);
			this->panel3->Controls->Add(this->textBox22);
			this->panel3->Location = System::Drawing::Point(115, 12);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(345, 252);
			this->panel3->TabIndex = 7;
			this->panel3->Visible = false;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(183, 184);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(136, 20);
			this->textBox9->TabIndex = 18;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(39, 184);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(121, 20);
			this->textBox15->TabIndex = 17;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(180, 168);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(84, 13);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Festnetznummer";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(39, 168);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(69, 13);
			this->label17->TabIndex = 15;
			this->label17->Text = L"Mobilnummer";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(183, 142);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(136, 20);
			this->textBox17->TabIndex = 6;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(180, 126);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(32, 13);
			this->label18->TabIndex = 14;
			this->label18->Text = L"Stadt";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(183, 99);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(136, 20);
			this->textBox18->TabIndex = 4;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(39, 142);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(121, 20);
			this->textBox19->TabIndex = 5;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(39, 126);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(60, 13);
			this->label19->TabIndex = 11;
			this->label19->Text = L"Postleitzahl";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(180, 83);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(69, 13);
			this->label21->TabIndex = 10;
			this->label21->Text = L"Hausnummer";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(39, 99);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(121, 20);
			this->textBox20->TabIndex = 3;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(39, 83);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(38, 13);
			this->label22->TabIndex = 8;
			this->label22->Text = L"Straße";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(39, 3);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(51, 13);
			this->label23->TabIndex = 7;
			this->label23->Text = L"Abteilung";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(39, 19);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 2;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(39, 226);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 5;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(39, 210);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(70, 13);
			this->label24->TabIndex = 4;
			this->label24->Text = L"Eintrittsdatum";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(183, 59);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(136, 20);
			this->textBox21->TabIndex = 1;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(180, 43);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(59, 13);
			this->label25->TabIndex = 2;
			this->label25->Text = L"Nachname";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(39, 43);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(49, 13);
			this->label26->TabIndex = 1;
			this->label26->Text = L"Vorname";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(39, 59);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(121, 20);
			this->textBox22->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox24);
			this->panel2->Controls->Add(this->label28);
			this->panel2->Controls->Add(this->textBox25);
			this->panel2->Controls->Add(this->label29);
			this->panel2->Controls->Add(this->textBox26);
			this->panel2->Controls->Add(this->textBox27);
			this->panel2->Controls->Add(this->label30);
			this->panel2->Controls->Add(this->label31);
			this->panel2->Controls->Add(this->textBox28);
			this->panel2->Controls->Add(this->label32);
			this->panel2->Controls->Add(this->label33);
			this->panel2->Controls->Add(this->textBox30);
			this->panel2->Location = System::Drawing::Point(112, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(345, 252);
			this->panel2->TabIndex = 19;
			this->panel2->Visible = false;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(39, 141);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(280, 20);
			this->textBox24->TabIndex = 17;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(39, 125);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(221, 13);
			this->label28->TabIndex = 15;
			this->label28->Text = L"Sitz der Abteilung (Bsp.: Gebäude 4, 1.Stock)";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(183, 99);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(136, 20);
			this->textBox25->TabIndex = 6;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(180, 83);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(32, 13);
			this->label29->TabIndex = 14;
			this->label29->Text = L"Stadt";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(183, 59);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(136, 20);
			this->textBox26->TabIndex = 4;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(39, 99);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(121, 20);
			this->textBox27->TabIndex = 5;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(39, 83);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(60, 13);
			this->label30->TabIndex = 11;
			this->label30->Text = L"Postleitzahl";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(180, 43);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(69, 13);
			this->label31->TabIndex = 10;
			this->label31->Text = L"Hausnummer";
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(39, 59);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(121, 20);
			this->textBox28->TabIndex = 3;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(39, 43);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(38, 13);
			this->label32->TabIndex = 8;
			this->label32->Text = L"Straße";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(39, 3);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(51, 13);
			this->label33->TabIndex = 7;
			this->label33->Text = L"Abteilung";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(39, 19);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(121, 20);
			this->textBox30->TabIndex = 0;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(467, 276);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Name = L"MyForm1";
			this->Text = L"Neuen Eintrag anlegen";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
private: System::Void radioButton1_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
	panel2->Visible = false;
	panel3->Visible = false;
	panel1->Visible = true;
}
private: System::Void radioButton2_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
	panel1->Visible = false;
	panel3->Visible = false;
	panel2->Visible = true;
}
private: System::Void radioButton3_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = true;
}
};
}
