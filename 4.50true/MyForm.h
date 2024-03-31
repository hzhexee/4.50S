#pragma once
#include <iostream>
#include <cstring>
#include <Windows.h>
#include <msclr/marshal_cppstd.h>

namespace My450 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	struct goods
	{
		string name;
		string country;
		int importAmount;

	};

	vector<goods> goodsData;

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:

	protected:
















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(437, 214);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Товар";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Страна";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Объем поставок";
			this->Column3->Name = L"Column3";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(481, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(184, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Наименование товара:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(485, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(278, 26);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(485, 100);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(278, 26);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(481, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Страна импорта:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(485, 167);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(278, 26);
			this->textBox3->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(481, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(139, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Объем поставок:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(481, 304);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(524, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Введите название товара, по которому вы хотите вывести данные:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(485, 346);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(278, 20);
			this->textBox4->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(485, 215);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 46);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Внести данные";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_MouseClick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(485, 387);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 46);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Вывести данные";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1017, 615);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ name = textBox1->Text;
		String^ country = textBox2->Text;
		String^ amount = textBox3->Text;

		int rowIndex = dataGridView1->Rows->Add();

		dataGridView1->Rows[rowIndex]->Cells["Column1"]->Value = name;
		dataGridView1->Rows[rowIndex]->Cells["Column2"]->Value = country;
		dataGridView1->Rows[rowIndex]->Cells["Column3"]->Value = amount;
	}

	private: System::Void button1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		String^ nameStr = textBox1->Text;
		String^ countryStr = textBox2->Text;
		String^ importAmountStr = textBox3->Text;

		string name = msclr::interop::marshal_as<std::string>(nameStr);
		string country = msclr::interop::marshal_as<std::string>(countryStr);
		int importAmount = Convert::ToInt32(importAmountStr);

		goods newGoods;
		newGoods.name = name;
		newGoods.country = country;
		newGoods.importAmount = importAmount;

		goodsData.push_back(newGoods);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ requestedName = textBox4->Text;
		String^ exportedCountries = "";
		String^ exportedAmounts = "";

		for (const auto& goodsItem : goodsData) {
			if (requestedName == gcnew String(goodsItem.name.c_str())) {
				exportedCountries += gcnew String(goodsItem.country.c_str()) + " ";
				exportedAmounts += goodsItem.importAmount.ToString() + " ";
			}
		}

		for (const auto& goodsItem : goodsData) {
			if (requestedName == gcnew String(goodsItem.name.c_str())) {
				String^ infoMessage = "Товар: " + gcnew String(goodsItem.name.c_str()) + "\n";
				infoMessage += "Экспортируется в: " + exportedCountries + "\n";
				infoMessage += "Объем экспорта (соответственно к каждой стране): " + exportedAmounts;

				MessageBox::Show(infoMessage, "Информация о товаре", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return; // Exit the loop once the goods are found
			}
		}

		// If goods not found, display an error message
		MessageBox::Show("Товар не найден!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
};
}
