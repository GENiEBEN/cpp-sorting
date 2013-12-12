#pragma once
#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <ctime>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

//Constante folosite la generarea numerelor aleatorii
#define MAX_ARRAY 200000
#define NUMBER_LIMIT (MAX_ARRAY * 10)

namespace WindowsFormsApplication1 {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	long int arrayy[MAX_ARRAY]; //matricea de numere pe care o vom altera
	long int arrayx[MAX_ARRAY]; //matricea de numere unde vom stoca numerele sortate

public ref class Form1 : public System::Windows::Forms::Form{

	#pragma region Cod autogenerat de Visual Studio pentru crearea interfetei.
		public:
			Form1(void)
			{
				InitializeComponent();
			}

		protected:
			~Form1()
			{
				if (components)
				{
					delete components;
				}
			}
	private: System::Windows::Forms::Button^  buton;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  nralese;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  tipCB;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  consola;
	private: System::Windows::Forms::ListView^  timpi;

	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  btnDesc;

private: System::Windows::Forms::Button^  btnAsc;
private: System::Windows::Forms::Button^  button2;



protected: 

		protected: 


		private:
			System::ComponentModel::Container ^components;
	 
			 //WinForms Autocode
			void InitializeComponent(void)
			{
				System::Windows::Forms::ListViewItem^  listViewItem8 = (gcnew System::Windows::Forms::ListViewItem(L"Bubble"));
				System::Windows::Forms::ListViewItem^  listViewItem9 = (gcnew System::Windows::Forms::ListViewItem(L"Selection"));
				System::Windows::Forms::ListViewItem^  listViewItem10 = (gcnew System::Windows::Forms::ListViewItem(L"Insertion"));
				System::Windows::Forms::ListViewItem^  listViewItem11 = (gcnew System::Windows::Forms::ListViewItem(L"Heap"));
				System::Windows::Forms::ListViewItem^  listViewItem12 = (gcnew System::Windows::Forms::ListViewItem(L"Merge"));
				System::Windows::Forms::ListViewItem^  listViewItem13 = (gcnew System::Windows::Forms::ListViewItem(L"Quicksort"));
				System::Windows::Forms::ListViewItem^  listViewItem14 = (gcnew System::Windows::Forms::ListViewItem(L"Shellsort"));
				this->buton = (gcnew System::Windows::Forms::Button());
				this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
				this->btnAsc = (gcnew System::Windows::Forms::Button());
				this->btnDesc = (gcnew System::Windows::Forms::Button());
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->nralese = (gcnew System::Windows::Forms::TextBox());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->tipCB = (gcnew System::Windows::Forms::ComboBox());
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
				this->consola = (gcnew System::Windows::Forms::TextBox());
				this->timpi = (gcnew System::Windows::Forms::ListView());
				this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
				this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
				this->button2 = (gcnew System::Windows::Forms::Button());
				this->groupBox1->SuspendLayout();
				this->groupBox2->SuspendLayout();
				this->SuspendLayout();
				// 
				// buton
				// 
				this->buton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
					static_cast<System::Byte>(0)));
				this->buton->Location = System::Drawing::Point(391, 405);
				this->buton->Name = L"buton";
				this->buton->Size = System::Drawing::Size(110, 34);
				this->buton->TabIndex = 0;
				this->buton->Text = L"SORTARE";
				this->buton->UseVisualStyleBackColor = true;
				this->buton->Click += gcnew System::EventHandler(this, &Form1::buton_Click);
				// 
				// groupBox1
				// 
				this->groupBox1->Controls->Add(this->button2);
				this->groupBox1->Controls->Add(this->btnAsc);
				this->groupBox1->Controls->Add(this->btnDesc);
				this->groupBox1->Controls->Add(this->button1);
				this->groupBox1->Controls->Add(this->nralese);
				this->groupBox1->Controls->Add(this->label2);
				this->groupBox1->Controls->Add(this->tipCB);
				this->groupBox1->Controls->Add(this->label1);
				this->groupBox1->Location = System::Drawing::Point(12, 12);
				this->groupBox1->Name = L"groupBox1";
				this->groupBox1->Size = System::Drawing::Size(490, 110);
				this->groupBox1->TabIndex = 7;
				this->groupBox1->TabStop = false;
				this->groupBox1->Text = L"Optiuni";
				// 
				// btnAsc
				// 
				this->btnAsc->Location = System::Drawing::Point(199, 78);
				this->btnAsc->Name = L"btnAsc";
				this->btnAsc->Size = System::Drawing::Size(52, 27);
				this->btnAsc->TabIndex = 12;
				this->btnAsc->Text = L"0-9";
				this->btnAsc->UseVisualStyleBackColor = true;
				this->btnAsc->Click += gcnew System::EventHandler(this, &Form1::btnAsc_Click);
				// 
				// btnDesc
				// 
				this->btnDesc->Location = System::Drawing::Point(315, 78);
				this->btnDesc->Name = L"btnDesc";
				this->btnDesc->Size = System::Drawing::Size(52, 27);
				this->btnDesc->TabIndex = 11;
				this->btnDesc->Text = L"9-0";
				this->btnDesc->UseVisualStyleBackColor = true;
				this->btnDesc->Click += gcnew System::EventHandler(this, &Form1::btnDesc_Click);
				// 
				// button1
				// 
				this->button1->Location = System::Drawing::Point(372, 78);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(104, 27);
				this->button1->TabIndex = 10;
				this->button1->Text = L"Alege alte numere";
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
				// 
				// nralese
				// 
				this->nralese->Location = System::Drawing::Point(65, 23);
				this->nralese->Multiline = true;
				this->nralese->Name = L"nralese";
				this->nralese->ReadOnly = true;
				this->nralese->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
				this->nralese->Size = System::Drawing::Size(411, 49);
				this->nralese->TabIndex = 9;
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->Location = System::Drawing::Point(15, 26);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(44, 13);
				this->label2->TabIndex = 8;
				this->label2->Text = L"Numere";
				// 
				// tipCB
				// 
				this->tipCB->FormattingEnabled = true;
				this->tipCB->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"Bubble", L"Selection", L"Insertion", L"Heap", L"Merge", 
					L"Quicksort", L"Shellsort"});
				this->tipCB->Location = System::Drawing::Point(65, 81);
				this->tipCB->Name = L"tipCB";
				this->tipCB->Size = System::Drawing::Size(119, 21);
				this->tipCB->TabIndex = 7;
				this->tipCB->Text = L"Bubble";
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->Location = System::Drawing::Point(15, 81);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(43, 13);
				this->label1->TabIndex = 6;
				this->label1->Text = L"Metoda";
				// 
				// groupBox2
				// 
				this->groupBox2->Controls->Add(this->consola);
				this->groupBox2->Controls->Add(this->timpi);
				this->groupBox2->Location = System::Drawing::Point(12, 128);
				this->groupBox2->Name = L"groupBox2";
				this->groupBox2->Size = System::Drawing::Size(490, 266);
				this->groupBox2->TabIndex = 8;
				this->groupBox2->TabStop = false;
				this->groupBox2->Text = L"Rezultate";
				// 
				// consola
				// 
				this->consola->Location = System::Drawing::Point(243, 19);
				this->consola->Multiline = true;
				this->consola->Name = L"consola";
				this->consola->ReadOnly = true;
				this->consola->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
				this->consola->Size = System::Drawing::Size(233, 232);
				this->consola->TabIndex = 8;
				// 
				// timpi
				// 
				this->timpi->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->columnHeader1, this->columnHeader2});
				this->timpi->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(7) {listViewItem8, listViewItem9, 
					listViewItem10, listViewItem11, listViewItem12, listViewItem13, listViewItem14});
				this->timpi->Location = System::Drawing::Point(15, 19);
				this->timpi->Name = L"timpi";
				this->timpi->Size = System::Drawing::Size(222, 232);
				this->timpi->TabIndex = 7;
				this->timpi->UseCompatibleStateImageBehavior = false;
				this->timpi->View = System::Windows::Forms::View::Details;
				// 
				// columnHeader1
				// 
				this->columnHeader1->Text = L"Algoritm";
				this->columnHeader1->Width = 116;
				// 
				// columnHeader2
				// 
				this->columnHeader2->Text = L"Timp";
				this->columnHeader2->Width = 102;
				// 
				// button2
				// 
				this->button2->Location = System::Drawing::Point(257, 78);
				this->button2->Name = L"button2";
				this->button2->Size = System::Drawing::Size(52, 27);
				this->button2->TabIndex = 13;
				this->button2->Text = L"Partial";
				this->button2->UseVisualStyleBackColor = true;
				this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
				// 
				// Form1
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(513, 451);
				this->Controls->Add(this->groupBox2);
				this->Controls->Add(this->groupBox1);
				this->Controls->Add(this->buton);
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				this->MaximizeBox = false;
				this->Name = L"Form1";
				this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
				this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				this->Text = L"Sortare in C++";
				this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
				this->groupBox1->ResumeLayout(false);
				this->groupBox1->PerformLayout();
				this->groupBox2->ResumeLayout(false);
				this->groupBox2->PerformLayout();
				this->ResumeLayout(false);

			}
	#pragma endregion

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		GenereazaNumere();
		// Afla marimea matricii cu numere aleatorii generate
		long int size = sizeof(arrayy)/sizeof(long int);
		// Fa o clona a numerelor alese pentru a le putea restaura cand schimbam algoritmul de sortare.
		for (long int i = 0; i != size - 1; ++i)
			arrayx[i]=arrayy[i];
	}

	#pragma region Genereaza Numere Aleatorii
		void GenereazaNumere() {
			// Buferul folosit pentru memorarea numerelor generate in matrice
			std::stringstream stream;
			// Generare matrice
			for (long int i = 0;  i < MAX_ARRAY;  i++) {
				 arrayy[i] = rand() % NUMBER_LIMIT + 1;	// Numar aleatoriu pus in matrice.
				 stream << arrayy[i] << " " ; // Numar aleatoriu pus in buffer.
			}
			// Afla marimea matricii generate
			long int size = sizeof(arrayy)/sizeof(long int);
			//Seteaza valoarea default in lista cu timpii obtinuti
			for(long int i=0;i<7;i++)
				timpi->Items[i]->SubItems->Add("-");
			// Converteste bufferul de tip string in managed string
			String^ foo = gcnew String(stream.str().c_str());
			// Printeaza bufferul in textbox
			nralese->Text = nralese->Text + foo ;
		}
	#pragma endregion
	#pragma region Functii ajutatoare pentru Quicksort
	//Algoritmul pentru QuickSort. E pus in functie separata pentru ca e recursiv.
	void quickSort(long int arr[], long int left, long int right) {
		  long int i = left, j = right;
		  long int tmp;
		  long int pivot = arr[(left + right) / 2];

		  /* partition */
		  while (i <= j) {
				while (arr[i] < pivot)
					  i++;
				while (arr[j] > pivot)
					  j--;
				if (i <= j) {
					  tmp = arr[i];
					  arr[i] = arr[j];
					  arr[j] = tmp;
					  i++;
					  j--;
				}
		  }

		  //re-re
		  if (left < j)
				quickSort(arr, left, j);
		  if (i < right)
				quickSort(arr, i, right);
	}
	#pragma endregion
	#pragma region Functii ajutatoare pentru Merge Sorting
	void mergesort(long int *a, long int*b, long int low, long int high)
	{
		long int pivot;
		if(low<high)
		{
			pivot=(low+high)/2;
			mergesort(a,b,low,pivot);
			mergesort(a,b,pivot+1,high);
			merge(a,b,low,pivot,high);
		}
	}
	void merge(long int *a, long int *b, long int low, long int pivot, long int high)
	{
		long int h,i,j,k;
		h=low;
		i=low;
		j=pivot+1;

		while((h<=pivot)&&(j<=high))
		{
			if(a[h]<=a[j])
			{
				b[i]=a[h];
				h++;
			}
			else
			{
				b[i]=a[j];
				j++;
			}
			i++;
		}
		if(h>pivot)
		{
			for(k=j; k<=high; k++)
			{
				b[i]=a[k];
				i++;
			}
		}
		else
		{
			for(k=h; k<=pivot; k++)
			{
				b[i]=a[k];
				i++;
			}
		}
		for(k=low; k<=high; k++) a[k]=b[k];
	}
	#pragma endregion
	#pragma region Functii ajutatoare pentru Heap Sorting
	void shiftRight(long int* arr, long int low, long int high)
	{
		long int root = low;
		while ((root*2)+1 <= high)
		{
			long int leftChild = (root * 2) + 1;
			long int rightChild = leftChild + 1;
			long int swapIdx = root;
			/*Check if root is less than left child*/
			if (arr[swapIdx] < arr[leftChild])
			{
				swapIdx = leftChild;
			}
			/*If right child exists check if it is less than current root*/
			if ((rightChild <= high) && (arr[swapIdx] < arr[rightChild]))
			{
				swapIdx = rightChild;
			}
			/*Make the biggest element of root, left and right child the root*/
			if (swapIdx != root)
			{
				long int tmp = arr[root];
				arr[root] = arr[swapIdx];
				arr[swapIdx] = tmp;
				/*Keep shifting right and ensure that swapIdx satisfies
				heap property aka left and right child of it is smaller than
				itself*/
				root = swapIdx;
			}
			else
			{
				break;
			}
		}
		return;
	}
	void heapify(long int* arr, long int low, long int high)
	{
		/*Start with middle element. Middle element is chosen in
		such a way that the last element of array is either its
		left child or right child*/
		long int midIdx = (high - low -1)/2;
		while (midIdx >= 0)
		{
			shiftRight(arr, midIdx, high);
			--midIdx;
		}
		return;
	}
	#pragma endregion

	void DezactiveazaButoanele(bool b) {
		btnAsc->Enabled=b;
		btnDesc->Enabled=b;
		button1->Enabled=b;
		buton->Enabled=b;
		button2->Enabled=b;
	}
	private: System::Void buton_Click(System::Object^  sender, System::EventArgs^  e) {
		// Dezactiveaza butoanele
 		DezactiveazaButoanele(false);
		// Defineste variabile
		double duration;
		// Sterge rezultatul oricarei operatii anterioare
		consola->Text = "";
		// Afla marimea matricii cu numere aleatorii generate la pornirea programului
		long int size = sizeof(arrayy)/sizeof(long int);
		//Afiseaza tipul algoritmului selectat de utilizator
		consola->Text = "Sortare dupa metoda '" + tipCB->SelectedItem->ToString() + "'\r\n\r\n";

		// BUBBLE SORTING
		if (tipCB->SelectedItem->ToString()=="Bubble") {
			// Restaureaza numerele aleatorii originale in matricea pe care o vom procesa.
			for (long int i = 0; i != size - 1; ++i)
				arrayy[i]=arrayx[i];
			//Incepe cronometrarea
			std::clock_t start;start = std::clock();
			//Incepe algoritmul
			bool bDone = false;
			while (!bDone)
			{
				bDone = true;
				for (long int i = 0; i != size - 1; ++i)
				{
					if ( arrayy[i] > arrayy[i + 1] )
					{
						long int tmp = arrayy[i];
						arrayy[i] = arrayy[i+1];
						arrayy[i+1] = tmp;
						bDone = false;
					}
				}
			}
			//Incheie cronometrarea
			duration = ( std::clock() - start ) / (double) 1000;
			timpi->Items[0]->SubItems[1]->Text=System::Convert::ToString(duration);
			// Buferul folosit pentru memorarea numerelor generate in matrice
			std::stringstream stream;
			// Genereaza bufferul de tip string care conting matricea sortata
			for (long int i = 0;  i < MAX_ARRAY;  i++)
				stream << arrayy[i] << " " ; // Numarul sortat din matrice este mutat in buffer
			// Converteste bufferul de tip string in managed string
			String^ foo = gcnew String(stream.str().c_str());
			// Printeaza bufferul in textbox
			consola->Text = consola->Text + foo;
		}

		 // SELECTION SORTING
		else if (tipCB->SelectedItem->ToString()=="Selection") {
			// Restaureaza numerele aleatorii originale in matricea pe care o vom procesa.
			for (long int i = 0; i != size - 1; ++i)
				arrayy[i]=arrayx[i];
			//Incepe cronometrarea
			std::clock_t start;start = std::clock();
			//Incepe algoritmul
			for(long int i=0; i<size; i++) {
				long int index_of_min = i;
				for(long int y=i; y<size; y++)
				{
					if(arrayy[index_of_min]>arrayy[y])
					{
						index_of_min = y;
					}
				}
				long int temp = arrayy[i];
				arrayy[i] = arrayy[index_of_min];
				arrayy[index_of_min] = temp;

			}
			//Incheie cronometrarea
			duration = ( std::clock() - start ) / (double) 1000;
			timpi->Items[1]->SubItems[1]->Text=System::Convert::ToString(duration);
			// Buferul folosit pentru memorarea numerelor generate in matrice
			std::stringstream stream;
			// Genereaza bufferul de tip string care conting matricea sortata
			for (long int i = 0;  i < MAX_ARRAY;  i++)
				stream << arrayy[i] << " " ; // Numarul sortat din matrice este mutat in buffer
			// Converteste bufferul de tip string in managed string
			String^ foo = gcnew String(stream.str().c_str());
			// Printeaza bufferul in textbox
			consola->Text = consola->Text + foo;
		}

		//INSERTION SORTING
		else if (tipCB->SelectedItem->ToString()=="Insertion") {
			// Restaureaza numerele aleatorii originale in matricea pe care o vom procesa.
			for (long int i = 0; i != size - 1; ++i)
				arrayy[i]=arrayx[i];
			//Incepe cronometrarea
			std::clock_t start;start = std::clock();
			//Incepe algoritmul
			long int i,j,temp;
			for(i=1;i<size;i++)
			{
				temp=arrayy[i];
				j=i-1;
				while((temp<arrayy[j])&&(j>=0)){
					arrayy[j+1]=arrayy[j];
					j=j-1;
				}
				arrayy[j+1]=temp;
			}
			//Incheie cronometrarea
			duration = ( std::clock() - start ) / (double) 1000;
			timpi->Items[2]->SubItems[1]->Text=System::Convert::ToString(duration);
			// Buferul folosit pentru memorarea numerelor generate in matrice
			std::stringstream stream;
			// Genereaza bufferul de tip string care conting matricea sortata
			for (long int i = 0;  i < MAX_ARRAY;  i++)
				stream << arrayy[i] << " " ; // Numarul sortat din matrice este mutat in buffer
			// Converteste bufferul de tip string in managed string
			String^ foo = gcnew String(stream.str().c_str());
			// Printeaza bufferul in textbox
			consola->Text = consola->Text + foo;
		}

		//HEAP SORTING
		else if (tipCB->SelectedItem->ToString()=="Heap") {
			// Restaureaza numerele aleatorii originale in matricea pe care o vom procesa.
			for (long int i = 0; i != size - 1; ++i)
				arrayy[i]=arrayx[i];
			//Incepe cronometrarea
			std::clock_t start;start = std::clock();
			//Incepe algoritmul
			heapify(arrayy, 0, size-1); // Va pune elementul maxim in pozitia 0
			long int high = size - 1;
			while (high > 0)
			{
				// Inlocuieste elem. max cu indexul maxim din matrice
				long int tmp = arrayy[high];
				arrayy[high] = arrayy[0];
				arrayy[0] = tmp;
				--high;
				shiftRight(arrayy, 0, high);
			}
			//Incheie cronometrarea
			duration = ( std::clock() - start ) / (double) 1000;
			timpi->Items[3]->SubItems[1]->Text=System::Convert::ToString(duration);
			// Buferul folosit pentru memorarea numerelor generate in matrice
			std::stringstream stream;
			// Genereaza bufferul de tip string care conting matricea sortata
			for (long int i = 0;  i < MAX_ARRAY;  i++)
				stream << arrayy[i] << " " ; // Numarul sortat din matrice este mutat in buffer
			// Converteste bufferul de tip string in managed string
			String^ foo = gcnew String(stream.str().c_str());
			// Printeaza bufferul in textbox
			consola->Text = consola->Text + foo;
		 }

		//MERGE SORTING
		else if (tipCB->SelectedItem->ToString()=="Merge") {
			// Restaureaza numerele aleatorii originale in matricea pe care o vom procesa.
			for (long int i = 0; i != size - 1; ++i)
				arrayy[i]=arrayx[i];
			//Incepe cronometrarea
			std::clock_t start;start = std::clock();
			//Incepe algoritmul
			long int b[MAX_ARRAY];
			mergesort(arrayy,b,0,size-1);
			//Incheie cronometrarea
			duration = ( std::clock() - start ) / (double) 1000;
			timpi->Items[4]->SubItems[1]->Text=System::Convert::ToString(duration);
			// Buferul folosit pentru memorarea numerelor generate in matrice
			std::stringstream stream;
			// Genereaza bufferul de tip string care conting matricea sortata
			for (long int i = 0;  i < MAX_ARRAY;  i++)
				stream << arrayy[i] << " " ; // Numarul sortat din matrice este mutat in buffer
			// Converteste bufferul de tip string in managed string
			String^ foo = gcnew String(stream.str().c_str());
			// Printeaza bufferul in textbox
			consola->Text = consola->Text + foo;
		 }

		//QUICK SORTING
		else if (tipCB->SelectedItem->ToString()=="Quicksort") {
			// Restaureaza numerele aleatorii originale in matricea pe care o vom procesa.
			for (long int i = 0; i != size - 1; ++i)
				arrayy[i]=arrayx[i];
			//Incepe cronometrarea
			std::clock_t start;start = std::clock();
			//Incepe algoritmul
			quickSort(arrayy,0,size-1);
			//Incheie cronometrarea
			duration = (( std::clock() - start ) / (double) 1000) ;
			timpi->Items[5]->SubItems[1]->Text=System::Convert::ToString(duration);
			// Buferul folosit pentru memorarea numerelor generate in matrice
			std::stringstream stream;
			// Genereaza bufferul de tip string care conting matricea sortata
			for (long int i = 0;  i < MAX_ARRAY;  i++)
				stream << arrayy[i] << " " ; // Numarul sortat din matrice este mutat in buffer
			// Converteste bufferul de tip string in managed string
			String^ foo = gcnew String(stream.str().c_str());
			// Printeaza bufferul in textbox
			consola->Text = consola->Text + foo;
		 }

		//SHELL SORTING
		else if (tipCB->SelectedItem->ToString()=="Shellsort") {
			// Restaurea numerele aleatorii originale in matricea pe care o vom procesa.
			for (long int i = 0; i != size - 1; ++i)
				arrayy[i]=arrayx[i];
			//Incepe cronometrarea
			std::clock_t start;start = std::clock();
			//Incepe algoritmul
			 long int temp, flag = 1;
			 long int d = size;
			 while( flag || (d > 1))
			 {
				flag = 0;           // inversarea nu a avut loc
				d = (d+1) / 2;
				for (long int i = 0; i < (size - d); i++)
				{
					if (arrayy[i + d] < arrayy[i]) // arrayy[i+d] > arrayy[i] pentru sortare Descrescatoare.
					{
						temp = arrayy[i + d];      // inverseaza pozitiile i+d si i
						arrayy[i + d] = arrayy[i];
						arrayy[i] = temp;
						flag = 1;                  // confirma ca inversarea a avut loc
					}
				}
			 }
			//Incheie cronometrarea
			duration = (( std::clock() - start ) / (double) 1000);
			timpi->Items[6]->SubItems[1]->Text=System::Convert::ToString(duration);
			// Buferul folosit pentru memorarea numerelor generate in matrice
			std::stringstream stream;
			// Genereaza bufferul de tip string care conting matricea sortata
			for (long int i = 0;  i < MAX_ARRAY;  i++)
				stream << arrayy[i] << " " ; // Numarul sortat din matrice este mutat in buffer
			// Converteste bufferul de tip string in managed string
			String^ foo = gcnew String(stream.str().c_str());
			// Printeaza bufferul in textbox
			consola->Text = consola->Text + foo;
		 }
		// Reactiveaza butoanele
		DezactiveazaButoanele(true);	
	} //sfarsit buton sortare

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		nralese->Text = "";
		consola->Text = "";
		GenereazaNumere();
		//Seteaza val. default in lista cu timpi
		for(long int i=0;i<7;i++)
			timpi->Items[i]->SubItems[1]->Text="-";
	} //sfarsit buton generare numere

	private: System::Void btnAsc_Click(System::Object^  sender, System::EventArgs^  e) {
		// Dezactiveaza butoanele
 		DezactiveazaButoanele(false);
		//Seteaza val. default in lista cu timpi
		for(long int i=0;i<7;i++)
			timpi->Items[i]->SubItems[1]->Text="-";
		// Afla marimea matricii cu numere aleatorii generate
		long int size = sizeof(arrayx)/sizeof(long int);
		//Sorteaza matricea Ascendent
		quickSort(arrayx,0,size-1);
		// Buferul folosit pentru memorarea numerelor generate in matrice
		std::stringstream stream;
		// Genereaza bufferul de tip string care conting matricea sortata
		for (long int i = 0;  i < MAX_ARRAY;  i++)
			stream << arrayx[i] << " " ; // Numarul sortat din matrice este mutat in buffer
		// Converteste bufferul de tip string in managed string
		String^ foo = gcnew String(stream.str().c_str());
		// Printeaza bufferul in textbox
		nralese->Text = foo;
		DezactiveazaButoanele(true);
	} //sfarsit buton sortare Ascendenta

	private: System::Void btnDesc_Click(System::Object^  sender, System::EventArgs^  e) {
		// Dezactiveaza butoanele
 		DezactiveazaButoanele(false);
		//Seteaza val. default in lista cu timpi
		for(long int i=0;i<7;i++)
			timpi->Items[i]->SubItems[1]->Text="-";
		// Afla marimea matricii cu numere aleatorii generate
		long int size = sizeof(arrayx)/sizeof(long int);
		//Sorteaza matricea Descendent
		quickSort(arrayx,0,size-1);
		// Buferul folosit pentru memorarea numerelor generate in matrice
		std::stringstream stream;
		// Genereaza bufferul de tip string care conting matricea sortata
		for (long int i = MAX_ARRAY;  i > 0;  i--)
			stream << arrayx[i-1] << " " ; // Numarul sortat din matrice este mutat in buffer
		// Converteste bufferul de tip string in managed string
		String^ foo = gcnew String(stream.str().c_str());
		// Printeaza bufferul in textbox
		nralese->Text = foo;
		//Seteaza valoarea default in lista cu timpii obtinuti
		for(long int i=0;i<7;i++)
			timpi->Items[i]->SubItems->Add("-");
		// Reactiveaza butoanele
		DezactiveazaButoanele(true);
	} //sfarsit buton sortare Descendenta

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		// Dezactiveaza butoanele
 		DezactiveazaButoanele(false);
		//Seteaza val. default in lista cu timpi
		for(long int i=0;i<7;i++)
			timpi->Items[i]->SubItems[1]->Text="-";
		// Afla marimea matricii cu numere aleatorii generate
		long int size = sizeof(arrayx)/sizeof(long int);
		// Creeaza 2 matrici buffer
		long int array1[(MAX_ARRAY/100)*90]; //matricea de numere pe care o vom altera
		long int array2[(MAX_ARRAY/100)*10]; //matricea de numere care ramane nesortata

	
//		long int array1[MAX_ARRAY-256]; //matricea de numere pe care o vom altera
//		long int array2[256]; //matricea de numere care ramane nesortata
	
		long int size1 = sizeof(array1)/sizeof(long int);long int size2 = sizeof(array2)/sizeof(long int);
		for (long int i = 0;  i < size1;  i++)
			array1[i]=arrayx[i];
		for (long int i = 0;  i < size2;  i++)
			array2[i]=arrayx[i+size1];
		//Sorteaza matricea Ascendent
		quickSort(array1,0, size1 - 1);
		// Buferul folosit pentru memorarea numerelor generate in matrice
		std::stringstream stream;
		// Genereaza bufferul de tip string care conting matricea sortata
		for (long int i = 0;  i < size1;  i++)
			arrayx[i]=array1[i];
		for (long int i = 0;  i < size2;  i++)
			arrayx[i+size1]=array2[i];
		for (long int i = 0;  i < size;  i++)
			stream << arrayx[i] << " " ; // Numarul sortat din matrice este mutat in buffer
		// Converteste bufferul de tip string in managed string
		String^ foo = gcnew String(stream.str().c_str());
		// Printeaza bufferul in textbox
		nralese->Text = foo;
		// Reactiveaza butoanele
		DezactiveazaButoanele(true);
	}
}; //sfarsit class
} //sfarsit namespace