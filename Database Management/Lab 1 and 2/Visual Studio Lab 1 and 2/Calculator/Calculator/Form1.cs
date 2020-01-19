using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculator
{
    public partial class Form1 : Form
    {
        string input = string.Empty;
        string operand1 = string.Empty;
        string operand2 = string.Empty;
        char operation;
        double result = 0.0;

        public Form1()
        {
            InitializeComponent();
        }

        private void button14_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void one_Click(object sender, EventArgs e)
        {
            this.tb.Text = "";
            input += "1";
            this.tb.Text += input;
        }

        private void two_Click(object sender, EventArgs e)
        {
            this.tb.Text = "";
            input += "2";
            this.tb.Text += input;
        }

        private void three_Click(object sender, EventArgs e)
        {
            this.tb.Text = "";
            input += "3";
            this.tb.Text += input;
        }

        private void four_Click(object sender, EventArgs e)
        {
            this.tb.Text = "";
            input += "4";
            this.tb.Text += input;
        }

        private void five_Click(object sender, EventArgs e)
        {
            this.tb.Text = "";
            input += "5";
            this.tb.Text += input;
        }

        private void six_Click(object sender, EventArgs e)
        {
            this.tb.Text = "";
            input += "6";
            this.tb.Text += input;
        }

        private void seven_Click(object sender, EventArgs e)
        {
            this.tb.Text = "";
            input += "7";
            this.tb.Text += input;
        }

        private void eight_Click(object sender, EventArgs e)
        {
            this.tb.Text = "";
            input += "8";
            this.tb.Text += input;
        }

        private void nine_Click(object sender, EventArgs e)
        {
            this.tb.Text = "";
            input += "9";
            this.tb.Text += input;

        }

        private void zero_Click(object sender, EventArgs e)
        {
            this.tb.Text = "";
            input += "0";
            this.tb.Text += input;
        }

        private void clr_Click(object sender, EventArgs e)
        {
            this.tb.Text = "";
            this.input = string.Empty;
            this.operand1 = string.Empty;
            this.operand2 = string.Empty;
        }

        private void mul_Click(object sender, EventArgs e)
        {
            operand1 = input;
            operation = '*';
            input = string.Empty;
        }

        private void add_Click(object sender, EventArgs e)
        {
            operand1 = input;
            operation = '+';
            input = string.Empty;
        }

        private void sub_Click(object sender, EventArgs e)
        {
            operand1 = input;
            operation = '-';
            input = string.Empty;
        }

        private void equal_Click(object sender, EventArgs e)
        {
            operand1 = input;
            operation = '=';
            input = string.Empty;
        }

        private void dot_Click(object sender, EventArgs e)
        {
            this.tb.Text = "";
            input += ".";
            this.tb.Text += input;
        }
    }
}
