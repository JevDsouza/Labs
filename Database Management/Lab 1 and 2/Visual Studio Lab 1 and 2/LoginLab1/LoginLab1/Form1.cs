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
    public partial class Form1 : Form
    {
        public static String unm = " ";
        public static String pd = " ";
        public Form1()
        {
            InitializeComponent();
        }

        private void Regbutton_Click(object sender, EventArgs e)
        {
            

        }

        private void Regbutton_Click_1(object sender, EventArgs e)
        {
            unm = TBUSER.Text;
            pd = TBPASS.Text;
            MessageBox.Show(TBUSER.Text + "Registration is done");
        }

        private void LoginButton_Click(object sender, EventArgs e)
        {
            if (TBUSER.Text.Equals(unm) && TBPASS.Text.Equals(pd))
            {
                MessageBox.Show("Welcome, " + unm);
            }
            else
                MessageBox.Show("Invalid Username or Password");
        }

        private void ChPassButton_Click(object sender, EventArgs e)
        {
            unm = TBUSER.Text;
            Form2 f = new Form2();
            f.Show();
        }
    }
}
