#pragma once
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <stdio.h>
#include <cstdio>
#define SWAP(x,y,t) (t=x,x=y,y=t)//交換

	int *list ,*list2;

namespace My0413418_HW1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 的摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(31, 146);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 58);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Data Generation";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(50, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(97, 22);
			this->textBox1->TabIndex = 1;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(208, 44);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(141, 220);
			this->listBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(31, 231);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 63);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Selection Sort";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 12;
			this->listBox2->Location = System::Drawing::Point(400, 44);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(149, 220);
			this->listBox2->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(31, 328);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 61);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Bubble Sort";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 12;
			this->listBox3->Location = System::Drawing::Point(620, 44);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(149, 220);
			this->listBox3->TabIndex = 6;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(59, 105);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(73, 16);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Echo Print";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 12);
			this->label1->TabIndex = 8;
			this->label1->Text = L"n =";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(181, 295);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"SelectionSort";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"BubbleSort";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(611, 314);
			this->chart1->TabIndex = 10;
			this->chart1->Text = L"chart1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 12);
			this->label2->TabIndex = 11;
			this->label2->Text = L"range=";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(50, 70);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(95, 22);
			this->textBox2->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(208, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 12);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Randomly Generated Data:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(401, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 12);
			this->label4->TabIndex = 14;
			this->label4->Text = L"SelectionSort:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(618, 17);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 12);
			this->label5->TabIndex = 15;
			this->label5->Text = L"BubbleSort:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(787, 252);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 12);
			this->label6->TabIndex = 16;
			this->label6->Text = L"CPU time(sec.):";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(877, 683);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Selection Sort vs Bubble Sort by Jack  2016/10/06  Ver.1.0";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		
#pragma endregion
		void SelectionSort(int list[],int n)//SelectionSort函式
		{
			int i, j, temp ,max  ;
			for (i = n-1 ; i > 0  ; i--)//依次比較大小
			{
				max = i ;
				for (j = 0 ; j < i; j++)
				{
					if(list[j] > list[max])
					{
					  max = j ;
					}
					SWAP(list[i] , list[max] , temp );
				}
			}
		}

		void BubbleSort( int list[] , int n)//BubbleSort函式
			{
				int i , j, temp ;
				for (i = n-1; i > 0; i--)//依次比較大小
				{ 
					for (j = 1; j <= i; j++)
					{ 
	 					if(list[j-1]>list[j])
						{ 
			 				SWAP(list[j-1], list[j],temp);//交換數字
						}
					}
				}
			}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 int n , m ;
				 int i;
				 srand(time(NULL) );//時間亂數
				 n = int::Parse( textBox1 -> Text);//改變型態
				 m = int::Parse( textBox2 -> Text);//range
				 free(list);//清空記憶體
				 free(list2);//清空記憶體
				 list = (int *)malloc(n*sizeof(int));//動態配置記憶體
				 list2 = (int *)malloc(n*sizeof(int));//動態配置記憶體
				 for( i=0 ; i<n ; i++)//列數
				 {
					 list[i] = rand()%m;//隨機出現數字
				 }

				 if(checkBox1->Checked)//echo條件
				 { 
					 for(i=0 ; i<n ;i++)
					{
						listBox1 -> Items -> Add(list[i]);
					}
				 }
				 listBox1 -> Items -> Add(n+"random numbers are generated.");//印出數字
			 }

 private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
		  {
			 if (isdigit(e->KeyChar) || iscntrl(e->KeyChar) )//防呆
			 {
				 e->Handled = false;
			 }
			 else 
			 {
				 e->Handled = true;
			 }
}
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {
			 if (isdigit(e->KeyChar) || iscntrl(e->KeyChar))//防呆
			 {
				 e->Handled = false;
			 }
			 else
			 {
				 e->Handled = true;
			 }
}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
			 {	
				LARGE_INTEGER t1, t2, ts;
				QueryPerformanceFrequency(&ts);
				QueryPerformanceCounter(&t1);//時間開始
				int i;
				int n = int::Parse( textBox1 -> Text);//改變型態
				int sorted[100000];
				
				for(i=0 ; i<n ;i++) sorted[i] = list[i];
				SelectionSort( sorted , n);//呼叫函式
				if(checkBox1->Checked)//echo
				{ 
					for( i=0 ; i<n ; i++)
					{
					 listBox2 -> Items -> Add(sorted[i]);//印出數字
					}
				}

				 QueryPerformanceCounter(&t2);//時間結束
				 double costTime=(t2.QuadPart-t1.QuadPart)/(double)(ts.QuadPart);//計算時間
				 listBox2 -> Items -> Add("SelectionSort:"+costTime+"(sec.)");//顯示時間

				 this->chart1->Series["SelectionSort"]->Points->AddXY(textBox1->Text,costTime);//表格
			 }

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
		 {	
			LARGE_INTEGER t1, t2, ts;
			QueryPerformanceFrequency(&ts);
			QueryPerformanceCounter(&t1);//時間開始
			int i;
			int n = int::Parse( textBox1 -> Text);//改變型態
			int sorted[100000];

			for(i=0 ; i<n ;i++) sorted[i] = list[i];
			BubbleSort( sorted , n);//呼叫函式
			if(checkBox1->Checked)//echo
			{
				for( i=0 ; i<n ; i++)
				{
					listBox3 -> Items -> Add(sorted[i]);//印出數字
				}
			}

			QueryPerformanceCounter(&t2);//時間結束
			double costTime=(t2.QuadPart-t1.QuadPart)/(double)(ts.QuadPart);//計算時間
			listBox3 -> Items -> Add("BubbleSort:"+costTime+"(sec.)");//顯示時間

			this->chart1->Series["BubbleSort"]->Points->AddXY(textBox1->Text,costTime);//表格
		 }

};
}