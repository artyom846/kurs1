# kurs1
Асташенок Артем

Группа 553503

Тема курсовой работы "Текстовый редактор"
#pragma once
#include <string>

namespace CppWinForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>

	std::string filename = "Ќеизвестный";
	std::string path = "Ќеизвестный.txt";

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
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;



	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  создатьToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  открытьToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранить акToolStripMenuItem;






	protected:

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
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->создатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранить акToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->Location = System::Drawing::Point(0, 385);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(544, 22);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(544, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->создатьToolStripMenuItem,
					this->открытьToolStripMenuItem, this->сохранитьToolStripMenuItem, this->сохранить акToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"‘айл";
			this->файлToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::файлToolStripMenuItem_Click);
			// 
			// создатьToolStripMenuItem
			// 
			this->создатьToolStripMenuItem->Name = L"создатьToolStripMenuItem";
			this->создатьToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->создатьToolStripMenuItem->Text = L"—оздать";
			this->создатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::создатьToolStripMenuItem_Click);
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->открытьToolStripMenuItem->Text = L"ќткрыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::открытьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->сохранитьToolStripMenuItem->Text = L"—охранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem_Click);
			// 
			// сохранить акToolStripMenuItem
			// 
			this->сохранить акToolStripMenuItem->Name = L"сохранить акToolStripMenuItem";
			this->сохранить акToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->сохранить акToolStripMenuItem->Text = L"—охранить как ... ";
			this->сохранить акToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранить акToolStripMenuItem_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->Location = System::Drawing::Point(0, 27);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(544, 355);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"“екстовые файлы|*.txt|¬се типы файлов|*.*";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"“екстовые файлы|*.txt|¬се типы файлов|*.*";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(544, 407);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void файлToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
	
		 
		 static System::String^ stdtosys(std::string str) 
		 {
			return gcnew System::String(str.c_str());
		 } //функци€ дл€ перевода перменных типа стд(глобальный) в стринговый

		 static const std::string systostd(System::String^ SyaStr)
		 {
			 using namespace Runtime::InteropServices;
			 return(const char*)(Marshal::StringToHGlobalAnsi(SyaStr).ToPointer());
		 }//функци€ дл€ перевода перменных типа систем стринг в стд


private: System::Void создатьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	System::Windows::Forms::DialogResult res;
	res=MessageBox::Show("—охранить изменени€ в файле " + stdtosys(filename) + "?", "“екстовый редактор""?", MessageBoxButtons::YesNoCancel);
	switch (res)
	{
	case System::Windows::Forms::DialogResult::Yes:
		if (path == "Ќеизвестный.txt") {
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				path = systostd(saveFileDialog1->FileName);
				richTextBox1->SaveFile(stdtosys(path), RichTextBoxStreamType::PlainText);
			}
		}
			else richTextBox1->SaveFile(stdtosys(path), RichTextBoxStreamType::PlainText);
		
		break;
	case System::Windows::Forms::DialogResult::No:
		richTextBox1->Clear();
		break;
	case System::Windows::Forms::DialogResult::Cancel:
		break;
		

	}
}

	private: System::Void открытьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK); {
		path = systostd(openFileDialog1->FileName);
		filename = systostd(openFileDialog1->FileName);
		richTextBox1->LoadFile(stdtosys(path), RichTextBoxStreamType::PlainText);
	}
}
private: System::Void сохранитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (path == "Ќеизвестный.txt"){
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			path = systostd(saveFileDialog1->FileName);
			richTextBox1->SaveFile(stdtosys(path), RichTextBoxStreamType::PlainText);
		}} else richTextBox1->SaveFile(stdtosys(path), RichTextBoxStreamType::PlainText);

}
private: System::Void сохранить акToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) 
		path = systostd(saveFileDialog1->FileName);
		richTextBox1->SaveFile(stdtosys(path), RichTextBoxStreamType::PlainText);
}
};
}
