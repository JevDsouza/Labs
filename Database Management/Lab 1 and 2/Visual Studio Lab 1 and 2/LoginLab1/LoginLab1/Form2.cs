using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LoginLab1
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void Form2_Load(object sender, EventArgs e)
        {
            TBUSER.Text = Form1.unm;
        }

        private void Submit_Click(object sender, EventArgs e)
        {
            if (pdt.Text.Trim() == cpdt.Text.Trim())
            {
                Form1.pd = cpdt.Text;
                MessageBox.Show("Password Changed");
                this.Close();
            }
            else
                MessageBox.Show("Wrong Password, Re-enter password");
        }
    }
}
