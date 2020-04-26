#pragma once

namespace Graf3 {

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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(46, 470);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Rysuj  spline";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(181, 470);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 42);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Rysuje Beziera";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(307, 470);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 42);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Rysuje elipsy";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 561);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		Graphics^ g1 = this->CreateGraphics();
		Pen^ pioro = gcnew Pen(System::Drawing::Color::Black);
		array<System::Drawing::PointF>^ punkty = gcnew array<System::Drawing::PointF>(4);
		punkty[0].X = 10;
		punkty[0].Y = 10;
		punkty[1].X = 34;
		punkty[1].Y = 165;
		punkty[2].X = 199;
		punkty[2].Y = 115;
		punkty[3].X = 500;
		punkty[3].Y = 555;
		g1->DrawCurve(pioro, punkty);

		

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g2 = this->CreateGraphics();
		Pen^ pioro1 = gcnew Pen(System::Drawing::Color::Red);
		g2->DrawBezier(pioro1, 20, 20, 100, 10, 10, 100, 60, 75);

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g3 = this->CreateGraphics();
		SolidBrush^ pedzel = gcnew SolidBrush(System::Drawing::Color::Yellow);
		g3->FillEllipse(pedzel, 200, 50, 100, 400);
		pedzel = gcnew SolidBrush(System::Drawing::Color::YellowGreen);
		g3->FillEllipse(pedzel, 50, 200, 400, 50);


	}
};
}
