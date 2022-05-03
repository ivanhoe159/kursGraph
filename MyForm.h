#pragma once
#include "Game.h"
#include "About.h"
#include "Test.h"
#include "People.h"
#include "Stats.h"
#include "Settings.h"
#include "Inform.h"

namespace chessD {

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
	Game ^F1;
	About ^F2;
	Test ^F3;
	People ^F4;
	Stats ^F5;
	Settings ^F6;
	Inform ^F7;
	private: System::Windows::Forms::TreeView^  treeView1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	public: System::Windows::Forms::Button^  button2;
	public: System::Windows::Forms::Button^  button1;
	public: System::Windows::Forms::Button^  button3;
	public: System::Windows::Forms::Button^  button4;
	public: System::Windows::Forms::Button^  button5;
	public: System::Windows::Forms::Button^  button6;

	public: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	public: System::Windows::Forms::Button^  button9;
	public: System::Windows::Forms::Button^  button10;


	public: System::Windows::Forms::Button^  button13;
	public: System::Windows::Forms::Button^  button14;
	public: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label6;
	public: System::Windows::Forms::Button^  button12;
	private:
	public:
	private:
	public:

	public:
	private:

	private:
	public:
	private:
	protected:

	protected:

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
			System::Windows::Forms::TreeNode^  treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"И. Майзелис, 1965"));
			System::Windows::Forms::TreeNode^  treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"Оппозиция и ключевые поля", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode1 }));
			System::Windows::Forms::TreeNode^  treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"Король и пешка против короля", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode2 }));
			System::Windows::Forms::TreeNode^  treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"Король и две пешки против короля"));
			System::Windows::Forms::TreeNode^  treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"Связанные пешки"));
			System::Windows::Forms::TreeNode^  treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"Пара ладейных пешек и проходная на другом фланге"));
			System::Windows::Forms::TreeNode^  treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"Пешки h и f против пешки h"));
			System::Windows::Forms::TreeNode^  treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"Две пешки против одной", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode5,
					treeNode6, treeNode7
			}));
			System::Windows::Forms::TreeNode^  treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"Пешечные окончания", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode3,
					treeNode4, treeNode8
			}));
			System::Windows::Forms::TreeNode^  treeNode10 = (gcnew System::Windows::Forms::TreeNode(L"Ферзь против пешек"));
			System::Windows::Forms::TreeNode^  treeNode11 = (gcnew System::Windows::Forms::TreeNode(L"Конь против пешек"));
			System::Windows::Forms::TreeNode^  treeNode12 = (gcnew System::Windows::Forms::TreeNode(L"Коневые окончания"));
			System::Windows::Forms::TreeNode^  treeNode13 = (gcnew System::Windows::Forms::TreeNode(L"Слон против пешек"));
			System::Windows::Forms::TreeNode^  treeNode14 = (gcnew System::Windows::Forms::TreeNode(L"Слоновые окончания"));
			System::Windows::Forms::TreeNode^  treeNode15 = (gcnew System::Windows::Forms::TreeNode(L"Ладья против пешек"));
			System::Windows::Forms::TreeNode^  treeNode16 = (gcnew System::Windows::Forms::TreeNode(L"Ладья против коня"));
			System::Windows::Forms::TreeNode^  treeNode17 = (gcnew System::Windows::Forms::TreeNode(L"Ладья против слона"));
			System::Windows::Forms::TreeNode^  treeNode18 = (gcnew System::Windows::Forms::TreeNode(L"Ладейные окончания"));
			System::Windows::Forms::TreeNode^  treeNode19 = (gcnew System::Windows::Forms::TreeNode(L"Ферзь против ладьи"));
			System::Windows::Forms::TreeNode^  treeNode20 = (gcnew System::Windows::Forms::TreeNode(L"Ферзевые окончания"));
			System::Windows::Forms::TreeNode^  treeNode21 = (gcnew System::Windows::Forms::TreeNode(L"Эндшпильные идеи"));
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// treeView1
			// 
			this->treeView1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeView1->Location = System::Drawing::Point(12, 163);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"Node0";
			treeNode1->Text = L"И. Майзелис, 1965";
			treeNode2->Name = L"Node14";
			treeNode2->Text = L"Оппозиция и ключевые поля";
			treeNode3->Name = L"Node13";
			treeNode3->Text = L"Король и пешка против короля";
			treeNode4->Name = L"Node17";
			treeNode4->Text = L"Король и две пешки против короля";
			treeNode5->Name = L"Node19";
			treeNode5->Text = L"Связанные пешки";
			treeNode6->Name = L"Node20";
			treeNode6->Text = L"Пара ладейных пешек и проходная на другом фланге";
			treeNode7->Name = L"Node21";
			treeNode7->Text = L"Пешки h и f против пешки h";
			treeNode8->Name = L"Node18";
			treeNode8->Text = L"Две пешки против одной";
			treeNode9->Name = L"Node0";
			treeNode9->Text = L"Пешечные окончания";
			treeNode10->Name = L"Node9";
			treeNode10->Text = L"Ферзь против пешек";
			treeNode11->Name = L"Node1";
			treeNode11->Text = L"Конь против пешек";
			treeNode12->Name = L"Node2";
			treeNode12->Text = L"Коневые окончания";
			treeNode13->Name = L"Node3";
			treeNode13->Text = L"Слон против пешек";
			treeNode14->Name = L"Node4";
			treeNode14->Text = L"Слоновые окончания";
			treeNode15->Name = L"Node5";
			treeNode15->Text = L"Ладья против пешек";
			treeNode16->Name = L"Node6";
			treeNode16->Text = L"Ладья против коня";
			treeNode17->Name = L"Node7";
			treeNode17->Text = L"Ладья против слона";
			treeNode18->Name = L"Node8";
			treeNode18->Text = L"Ладейные окончания";
			treeNode19->Name = L"Node10";
			treeNode19->Text = L"Ферзь против ладьи";
			treeNode20->Name = L"Node11";
			treeNode20->Text = L"Ферзевые окончания";
			treeNode21->Name = L"Node12";
			treeNode21->Text = L"Эндшпильные идеи";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(13) {
				treeNode9, treeNode10, treeNode11,
					treeNode12, treeNode13, treeNode14, treeNode15, treeNode16, treeNode17, treeNode18, treeNode19, treeNode20, treeNode21
			});
			this->treeView1->Size = System::Drawing::Size(384, 779);
			this->treeView1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(456, 163);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(777, 716);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button2->Location = System::Drawing::Point(12, 37);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(203, 96);
			this->button2->TabIndex = 62;
			this->button2->Text = L"Теория";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->Location = System::Drawing::Point(234, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(203, 96);
			this->button1->TabIndex = 63;
			this->button1->Text = L"Практика";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button3->Location = System::Drawing::Point(678, 37);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(203, 96);
			this->button3->TabIndex = 64;
			this->button3->Text = L"Игра";
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button4->Location = System::Drawing::Point(900, 37);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(203, 96);
			this->button4->TabIndex = 65;
			this->button4->Text = L"Ученики";
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button5->Location = System::Drawing::Point(1346, 37);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(203, 96);
			this->button5->TabIndex = 66;
			this->button5->Text = L"Настройки";
			this->button5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button6->Location = System::Drawing::Point(1573, 37);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(203, 96);
			this->button6->TabIndex = 67;
			this->button6->Text = L"О программе";
			this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button8
			// 
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button8->Location = System::Drawing::Point(1123, 37);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(203, 96);
			this->button8->TabIndex = 69;
			this->button8->Text = L"Статистика";
			this->button8->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.15F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(1251, 208);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(749, 613);
			this->richTextBox1->TabIndex = 70;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// button9
			// 
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(456, 885);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(89, 57);
			this->button9->TabIndex = 71;
			this->button9->Text = L"<<";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(678, 885);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(312, 57);
			this->button10->TabIndex = 72;
			this->button10->Text = L"Разыграть позицию";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button13
			// 
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(567, 885);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(89, 57);
			this->button13->TabIndex = 75;
			this->button13->Text = L"<";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(1012, 885);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(89, 57);
			this->button14->TabIndex = 76;
			this->button14->Text = L">";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(1123, 885);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(89, 57);
			this->button15->TabIndex = 77;
			this->button15->Text = L">>";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(1439, 152);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(431, 38);
			this->label1->TabIndex = 78;
			this->label1->Text = L"Лаверюд - Викстрем, Умео 1992";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button11
			// 
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button11->Location = System::Drawing::Point(456, 37);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(203, 96);
			this->button11->TabIndex = 79;
			this->button11->Text = L"Тест";
			this->button11->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.15F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox2->Location = System::Drawing::Point(1251, 208);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(749, 613);
			this->richTextBox2->TabIndex = 80;
			this->richTextBox2->Text = L"1. Крh4 - Kpf6 2. Крh5 - Kpg7 3.Kpg5";
			this->richTextBox2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(461, 958);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(182, 23);
			this->label3->TabIndex = 82;
			this->label3->Text = L"Ученик: Иван Иванов";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1062, 958);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 23);
			this->label2->TabIndex = 83;
			this->label2->Text = L"Ошибок: 0";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(752, 958);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 23);
			this->label4->TabIndex = 84;
			this->label4->Text = L"Время: 01:35";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1546, 152);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(252, 38);
			this->label5->TabIndex = 85;
			this->label5->Text = L"И. Майзелис, 1965";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(456, 163);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(777, 716);
			this->pictureBox2->TabIndex = 86;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(1546, 824);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(211, 38);
			this->label6->TabIndex = 87;
			this->label6->Text = L"Задача решена";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Visible = false;
			// 
			// button12
			// 
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(1496, 885);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(312, 57);
			this->button12->TabIndex = 88;
			this->button12->Text = L"Следующая задача";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->treeView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"[Ученик: Иван Иванов] - Шахматные окончания";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Maximized;
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 F2 = gcnew About;
				 F2->Show();
	}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 F1 = gcnew Game;
			 F1->Show();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 F1 = gcnew Game;
			 F1->Show();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 F3 = gcnew Test;
			 F3->Show();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 label2->Visible = true;
			 label3->Visible = true;
			 label4->Visible = true;
			 richTextBox1->Visible = false;
			 richTextBox2->Visible = true;
			 label5->Visible = true;
			 label1->Visible = false;
			 pictureBox1->Visible = false;
			 pictureBox2->Visible = true;
			 label6->Visible = true;
			 button12->Visible = true;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 label2->Visible = false;
			 label3->Visible = false;
			 label4->Visible = false;
			 richTextBox2->Visible = false;
			 richTextBox1->Visible = true;
			 label5->Visible = false;
			 label1->Visible = true;
			 pictureBox2->Visible = false;
			 pictureBox1->Visible = true;
			 label6->Visible = false;
			 button12->Visible = false;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 F4 = gcnew People;
			 F4->Show();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 F5 = gcnew Stats;
			 F5->Show();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 F6 = gcnew Settings;
			 F6->Show();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 F7 = gcnew Inform;
			 F7->Show();
}
};
}
