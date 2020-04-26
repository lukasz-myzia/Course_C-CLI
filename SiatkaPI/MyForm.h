#pragma once

namespace SiatkaPI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(440, 426);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"rys uk³ad";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 461);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		Graphics^ g1 = this->CreateGraphics();
		//String^ napis = L"\x03a0"; //male pi

		System::Drawing::Font^ czcionka = gcnew System::Drawing::Font
		(System::Drawing::FontFamily::GenericSansSerif, 14, FontStyle::Regular);


		Pen^ pioro = gcnew Pen(System::Drawing::Color::Black);
		//pioro->Width = 2;
		pioro->EndCap = System::Drawing::Drawing2D::LineCap::ArrowAnchor; // strza³ka

		Pen^ pioro1 = gcnew Pen(System::Drawing::Color::Gray);
		pioro1->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash;
		pioro1->Width = 0,5;

		SolidBrush^ pedzel = gcnew SolidBrush(System::Drawing::Color::Red);
		
		int szer = Width, wys = Height;

		g1->DrawLine(pioro, 10, wys / 2, szer - 30, wys / 2);
		g1->DrawLine(pioro, szer / 2, wys - 50, szer / 2, 10);

		int z = 1;
		for (int i = 50; i < szer-150; i += 50)
		{
			String^ napis = z + L"\x03c0"; //du¿e pi
			z++;
			g1->DrawString(napis, czcionka, pedzel, (szer / 2) + i, wys / 2);
			g1->DrawLine(pioro1, (szer / 2)+i, wys - 50, (szer / 2)+i, 10);
		}

		int y = -1;
		for (int i = 50; i < szer-150; i += 50)
		{
			String^ napis = y + L"\x03c0"; //du¿e pi
			y--;
			g1->DrawString(napis, czcionka, pedzel, (szer / 2) - i, wys / 2);
			g1->DrawLine(pioro1, (szer / 2) - i, wys - 50, (szer / 2) - i, 10);
		}
		


	}
	};
}
