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

	std::string filename = "Неизвестный";
	std::string path = "Неизвестный.txt";


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

	private: System::Windows::Forms::MenuStrip^  menuStrip1;



	private: System::Windows::Forms::RichTextBox^  richTextBox1;



	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;





	private: System::Windows::Forms::ToolStripMenuItem^  правкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  вырезатьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  копироватьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  вставитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  удалитьToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  вырезатьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  копироватьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  вставитьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  удалитьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  отменитьToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  создатьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранитьКакToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  выходToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  справкаToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  информацияОПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  форматToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  шрифтToolStripMenuItem;
	private: System::Windows::Forms::FontDialog^  fontDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  печатьToolStripMenuItem;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  выравнитьТекстПоToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  левомуКраюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  правомуКраюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  центруToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  цветФонаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  включитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  выключитьToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ToolStripMenuItem^  автосохранениеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранятьКаждуюМинутуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранятьКаждые10МинутToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  выключитьАвтосохранениеToolStripMenuItem;


















	private: System::ComponentModel::IContainer^  components;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->создатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->печатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->правкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->отменитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->вырезатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->копироватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вставитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->форматToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->шрифтToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветФонаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->включитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выключитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->информацияОПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выравнитьТекстПоToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->левомуКраюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->правомуКраюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->центруToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->вырезатьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->копироватьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вставитьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->сохранятьКаждуюМинутуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранятьКаждые10МинутToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->автосохранениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выключитьАвтосохранениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->файлToolStripMenuItem,
					this->правкаToolStripMenuItem, this->форматToolStripMenuItem, this->справкаToolStripMenuItem, this->выравнитьТекстПоToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(544, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->создатьToolStripMenuItem,
					this->открытьToolStripMenuItem, this->сохранитьToolStripMenuItem, this->сохранитьКакToolStripMenuItem, this->автосохранениеToolStripMenuItem,
					this->toolStripMenuItem3, this->печатьToolStripMenuItem, this->toolStripMenuItem1, this->выходToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			this->файлToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::файлToolStripMenuItem_Click);
			// 
			// создатьToolStripMenuItem
			// 
			this->создатьToolStripMenuItem->Name = L"создатьToolStripMenuItem";
			this->создатьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->создатьToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->создатьToolStripMenuItem->Text = L"Создать";
			this->создатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::создатьToolStripMenuItem_Click);
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::открытьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem_Click);
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->сохранитьКакToolStripMenuItem->Text = L"Сохранить как ... ";
			this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьКакToolStripMenuItem_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(169, 6);
			// 
			// печатьToolStripMenuItem
			// 
			this->печатьToolStripMenuItem->Name = L"печатьToolStripMenuItem";
			this->печатьToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->печатьToolStripMenuItem->Text = L"Печать ...";
			this->печатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::печатьToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(169, 6);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// правкаToolStripMenuItem
			// 
			this->правкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->отменитьToolStripMenuItem,
					this->toolStripMenuItem2, this->вырезатьToolStripMenuItem, this->копироватьToolStripMenuItem, this->вставитьToolStripMenuItem,
					this->удалитьToolStripMenuItem
			});
			this->правкаToolStripMenuItem->Name = L"правкаToolStripMenuItem";
			this->правкаToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->правкаToolStripMenuItem->Text = L"Правка";
			// 
			// отменитьToolStripMenuItem
			// 
			this->отменитьToolStripMenuItem->Name = L"отменитьToolStripMenuItem";
			this->отменитьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->отменитьToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->отменитьToolStripMenuItem->Text = L"Отменить";
			this->отменитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::отменитьToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(178, 6);
			// 
			// вырезатьToolStripMenuItem
			// 
			this->вырезатьToolStripMenuItem->Name = L"вырезатьToolStripMenuItem";
			this->вырезатьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->вырезатьToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->вырезатьToolStripMenuItem->Text = L"Вырезать";
			this->вырезатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вырезатьToolStripMenuItem_Click);
			// 
			// копироватьToolStripMenuItem
			// 
			this->копироватьToolStripMenuItem->Name = L"копироватьToolStripMenuItem";
			this->копироватьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->копироватьToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->копироватьToolStripMenuItem->Text = L"Копировать";
			this->копироватьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::копироватьToolStripMenuItem_Click);
			// 
			// вставитьToolStripMenuItem
			// 
			this->вставитьToolStripMenuItem->Name = L"вставитьToolStripMenuItem";
			this->вставитьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->вставитьToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->вставитьToolStripMenuItem->Text = L"Вставить";
			this->вставитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вставитьToolStripMenuItem_Click);
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::Delete;
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->удалитьToolStripMenuItem->Text = L"Удалить";
			this->удалитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::удалитьToolStripMenuItem_Click);
			// 
			// форматToolStripMenuItem
			// 
			this->форматToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->шрифтToolStripMenuItem,
					this->цветФонаToolStripMenuItem
			});
			this->форматToolStripMenuItem->Name = L"форматToolStripMenuItem";
			this->форматToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->форматToolStripMenuItem->Text = L"Формат";
			// 
			// шрифтToolStripMenuItem
			// 
			this->шрифтToolStripMenuItem->Name = L"шрифтToolStripMenuItem";
			this->шрифтToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->шрифтToolStripMenuItem->Text = L"Шрифт";
			this->шрифтToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::шрифтToolStripMenuItem_Click);
			// 
			// цветФонаToolStripMenuItem
			// 
			this->цветФонаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->включитьToolStripMenuItem,
					this->выключитьToolStripMenuItem
			});
			this->цветФонаToolStripMenuItem->Name = L"цветФонаToolStripMenuItem";
			this->цветФонаToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->цветФонаToolStripMenuItem->Text = L"Ночной режим";
			this->цветФонаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::цветФонаToolStripMenuItem_Click);
			// 
			// включитьToolStripMenuItem
			// 
			this->включитьToolStripMenuItem->Name = L"включитьToolStripMenuItem";
			this->включитьToolStripMenuItem->Size = System::Drawing::Size(138, 22);
			this->включитьToolStripMenuItem->Text = L"Включить";
			this->включитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::включитьToolStripMenuItem_Click);
			// 
			// выключитьToolStripMenuItem
			// 
			this->выключитьToolStripMenuItem->Name = L"выключитьToolStripMenuItem";
			this->выключитьToolStripMenuItem->Size = System::Drawing::Size(138, 22);
			this->выключитьToolStripMenuItem->Text = L"Выключить";
			this->выключитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выключитьToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->информацияОПрограммеToolStripMenuItem });
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->справкаToolStripMenuItem->Text = L"Справка";
			// 
			// информацияОПрограммеToolStripMenuItem
			// 
			this->информацияОПрограммеToolStripMenuItem->Name = L"информацияОПрограммеToolStripMenuItem";
			this->информацияОПрограммеToolStripMenuItem->Size = System::Drawing::Size(224, 22);
			this->информацияОПрограммеToolStripMenuItem->Text = L"Информация о программе";
			this->информацияОПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::информацияОПрограммеToolStripMenuItem_Click);
			// 
			// выравнитьТекстПоToolStripMenuItem
			// 
			this->выравнитьТекстПоToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->левомуКраюToolStripMenuItem,
					this->правомуКраюToolStripMenuItem, this->центруToolStripMenuItem
			});
			this->выравнитьТекстПоToolStripMenuItem->Name = L"выравнитьТекстПоToolStripMenuItem";
			this->выравнитьТекстПоToolStripMenuItem->Size = System::Drawing::Size(139, 20);
			this->выравнитьТекстПоToolStripMenuItem->Text = L"Выравнить текст по ...";
			// 
			// левомуКраюToolStripMenuItem
			// 
			this->левомуКраюToolStripMenuItem->AutoToolTip = true;
			this->левомуКраюToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"левомуКраюToolStripMenuItem.Image")));
			this->левомуКраюToolStripMenuItem->Name = L"левомуКраюToolStripMenuItem";
			this->левомуКраюToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->левомуКраюToolStripMenuItem->Text = L"левому краю";
			this->левомуКраюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::левомуКраюToolStripMenuItem_Click);
			// 
			// правомуКраюToolStripMenuItem
			// 
			this->правомуКраюToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"правомуКраюToolStripMenuItem.Image")));
			this->правомуКраюToolStripMenuItem->Name = L"правомуКраюToolStripMenuItem";
			this->правомуКраюToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->правомуКраюToolStripMenuItem->Text = L"правому краю";
			this->правомуКраюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::правомуКраюToolStripMenuItem_Click);
			// 
			// центруToolStripMenuItem
			// 
			this->центруToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"центруToolStripMenuItem.Image")));
			this->центруToolStripMenuItem->Name = L"центруToolStripMenuItem";
			this->центруToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->центруToolStripMenuItem->Text = L"центру";
			this->центруToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::центруToolStripMenuItem_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->richTextBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->richTextBox1->Location = System::Drawing::Point(0, 27);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(544, 355);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->вырезатьToolStripMenuItem1,
					this->копироватьToolStripMenuItem1, this->вставитьToolStripMenuItem1, this->удалитьToolStripMenuItem1
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(140, 92);
			// 
			// вырезатьToolStripMenuItem1
			// 
			this->вырезатьToolStripMenuItem1->Name = L"вырезатьToolStripMenuItem1";
			this->вырезатьToolStripMenuItem1->Size = System::Drawing::Size(139, 22);
			this->вырезатьToolStripMenuItem1->Text = L"Вырезать";
			this->вырезатьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::вырезатьToolStripMenuItem_Click);
			// 
			// копироватьToolStripMenuItem1
			// 
			this->копироватьToolStripMenuItem1->Name = L"копироватьToolStripMenuItem1";
			this->копироватьToolStripMenuItem1->Size = System::Drawing::Size(139, 22);
			this->копироватьToolStripMenuItem1->Text = L"Копировать";
			this->копироватьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::копироватьToolStripMenuItem_Click);
			// 
			// вставитьToolStripMenuItem1
			// 
			this->вставитьToolStripMenuItem1->Name = L"вставитьToolStripMenuItem1";
			this->вставитьToolStripMenuItem1->Size = System::Drawing::Size(139, 22);
			this->вставитьToolStripMenuItem1->Text = L"Вставить";
			this->вставитьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::вставитьToolStripMenuItem_Click);
			// 
			// удалитьToolStripMenuItem1
			// 
			this->удалитьToolStripMenuItem1->Name = L"удалитьToolStripMenuItem1";
			this->удалитьToolStripMenuItem1->Size = System::Drawing::Size(139, 22);
			this->удалитьToolStripMenuItem1->Text = L"Удалить";
			this->удалитьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::удалитьToolStripMenuItem_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Текстовые файлы|*.txt|Все типы файлов|*.*";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Текстовые файлы|*.txt|Все типы файлов|*.*";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// statusStrip1
			// 
			this->statusStrip1->Location = System::Drawing::Point(0, 385);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(544, 22);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem_Click);
			// 
			// сохранятьКаждуюМинутуToolStripMenuItem
			// 
			this->сохранятьКаждуюМинутуToolStripMenuItem->Name = L"сохранятьКаждуюМинутуToolStripMenuItem";
			this->сохранятьКаждуюМинутуToolStripMenuItem->Size = System::Drawing::Size(229, 22);
			this->сохранятьКаждуюМинутуToolStripMenuItem->Text = L"Сохранять каждую минуту";
			this->сохранятьКаждуюМинутуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранятьКаждуюМинутуToolStripMenuItem_Click);
			// 
			// сохранятьКаждые10МинутToolStripMenuItem
			// 
			this->сохранятьКаждые10МинутToolStripMenuItem->Name = L"сохранятьКаждые10МинутToolStripMenuItem";
			this->сохранятьКаждые10МинутToolStripMenuItem->Size = System::Drawing::Size(229, 22);
			this->сохранятьКаждые10МинутToolStripMenuItem->Text = L"Сохранять каждые 10 минут";
			this->сохранятьКаждые10МинутToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранятьКаждые10МинутToolStripMenuItem_Click);
			// 
			// автосохранениеToolStripMenuItem
			// 
			this->автосохранениеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->сохранятьКаждуюМинутуToolStripMenuItem,
					this->сохранятьКаждые10МинутToolStripMenuItem, this->выключитьАвтосохранениеToolStripMenuItem
			});
			this->автосохранениеToolStripMenuItem->Name = L"автосохранениеToolStripMenuItem";
			this->автосохранениеToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->автосохранениеToolStripMenuItem->Text = L"Автосохранение";
			// 
			// выключитьАвтосохранениеToolStripMenuItem
			// 
			this->выключитьАвтосохранениеToolStripMenuItem->Name = L"выключитьАвтосохранениеToolStripMenuItem";
			this->выключитьАвтосохранениеToolStripMenuItem->Size = System::Drawing::Size(229, 22);
			this->выключитьАвтосохранениеToolStripMenuItem->Text = L"Выключить автосохранение";
			this->выключитьАвтосохранениеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выключитьАвтосохранениеToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(544, 407);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Текстовый редактор";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void файлToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}


			 static System::String^ stdtosys(std::string str)
			 {
				 return gcnew System::String(str.c_str());
			 } //функция для перевода перменных типа стд(глобальный) в стринговый

			 static const std::string systostd(System::String^ SyaStr)
			 {
				 using namespace Runtime::InteropServices;
				 return(const char*)(Marshal::StringToHGlobalAnsi(SyaStr).ToPointer());
			 }//функция для перевода перменных типа систем стринг в стд


	private: System::Void создатьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // Создание нового файла формата .txt

		System::Windows::Forms::DialogResult res;
		res = MessageBox::Show("Сохранить изменения в файле " + stdtosys(filename) + "?", "Текстовый редактор""?", MessageBoxButtons::YesNoCancel);
		switch (res)
		{
		case System::Windows::Forms::DialogResult::Yes:
			if (path == "Неизвестный.txt") {
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

	private: System::Void открытьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // Открытие файла формата .txt

		(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK); {
			path = systostd(openFileDialog1->FileName);
			filename = systostd(openFileDialog1->FileName);
			richTextBox1->LoadFile(stdtosys(path), RichTextBoxStreamType::PlainText);
		}
	}

	private: System::Void сохранитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // Сохранение файла формата .txt
		if (path == "Неизвестный.txt") {
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				path = systostd(saveFileDialog1->FileName);
				richTextBox1->SaveFile(stdtosys(path), RichTextBoxStreamType::PlainText);
			}
		}
		else richTextBox1->SaveFile(stdtosys(path), RichTextBoxStreamType::PlainText);
	}

	private: System::Void сохранитьКакToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // Сохранение файла с указанием пути формата .txt
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			path = systostd(saveFileDialog1->FileName);
		richTextBox1->SaveFile(stdtosys(path), RichTextBoxStreamType::PlainText);
	}

	private: System::Void выходToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // Выход из программы
		System::Windows::Forms::DialogResult res;
		res = MessageBox::Show("Сохранить изменения в файле перед закрытием " + stdtosys(filename) + "?", "Текстовый редактор""?", MessageBoxButtons::YesNoCancel);
		switch (res)
		{
		case System::Windows::Forms::DialogResult::Yes:
			if (path == "Неизвестный.txt") {
				if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					path = systostd(saveFileDialog1->FileName);
					richTextBox1->SaveFile(stdtosys(path), RichTextBoxStreamType::PlainText);
				}
			}
			else richTextBox1->SaveFile(stdtosys(path), RichTextBoxStreamType::PlainText);
			Application::Exit();
			break;

		case System::Windows::Forms::DialogResult::No:
			richTextBox1->Clear();
			Application::Exit();
			break;

		case System::Windows::Forms::DialogResult::Cancel:
			break;
		}
	}
	private: System::Void вырезатьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // Функция вырезать
		richTextBox1->Cut();
	}

	private: System::Void копироватьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // Функция копировать
		richTextBox1->Copy();
	}

	private: System::Void вставитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // Функция выставить
		richTextBox1->Paste();
	}

	private: System::Void удалитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // Функция удалить
		richTextBox1->SelectedText = "";
	}

	private: System::Void отменитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // Функция отменить последнее действие
		richTextBox1->Undo();
	}

	private: System::Void информацияОПрограммеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // Вывод сведений о программе 
		System::Windows::Forms::DialogResult res1;
		res1 = MessageBox::Show("Курсовая работа учащегося Асташёнка Артёма Владимировича, гр.553503! ", "Информация о программе""!", MessageBoxButtons::OK);
	}

	private: System::Void шрифтToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // Функия изменения шрифта
		fontDialog1->ShowColor = true;

		fontDialog1->Color = richTextBox1->ForeColor;
		fontDialog1->Font = richTextBox1->Font;

		if (fontDialog1->ShowDialog() != System::Windows::Forms::DialogResult::Cancel)
		{
			richTextBox1->Font = fontDialog1->Font;
			richTextBox1->ForeColor = fontDialog1->Color;
		}
	}
	private: System::Void печатьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // Функия вывода диалога печати
		if (printDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			printDocument1->Print();
	}

	private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) { // Функия вывод на печать
		System::String^ text;
		text = richTextBox1->Text;
		e->Graphics->DrawString(text, richTextBox1->Font, System::Drawing::Brushes::Black, 10, 10);
	}

	private: System::Void левомуКраюToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // Функция выравнивания текста по левому краю
		richTextBox1->SelectionAlignment = HorizontalAlignment::Left;
	}

	private: System::Void правомуКраюToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // Функция выравнивания текста по правосу краю
		richTextBox1->SelectionAlignment = HorizontalAlignment::Right;
	}

	private: System::Void центруToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // Функция выравнивания текста по центру
		richTextBox1->SelectionAlignment = HorizontalAlignment::Center;
	}
	private: System::Void цветФонаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void включитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // Включение ночного режима
		richTextBox1->BackColor = System::Drawing::Color::Black;
		richTextBox1->ForeColor = System::Drawing::Color::White;
	}

	private: System::Void выключитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { //Выключение ночного режима
		richTextBox1->BackColor = System::Drawing::Color::White;
		richTextBox1->ForeColor = System::Drawing::Color::Black;
	}

	private: System::Void сохранятьКаждуюМинутуToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // Автосохранение каждую минуту
		timer1->Interval = 60000;
		timer1->Enabled = true;
	}

	private: System::Void сохранятьКаждые10МинутToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // Автосохранение каждые 10 минут
		timer1->Interval = 600000;
		timer1->Enabled = true;
	}

	private: System::Void выключитьАвтосохранениеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {// Выключение автосохранения
		timer1->Enabled = false;
	}
};
}
