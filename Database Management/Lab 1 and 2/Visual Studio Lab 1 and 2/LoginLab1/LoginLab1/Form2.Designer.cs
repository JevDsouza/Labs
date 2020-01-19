namespace LoginLab1
{
    partial class Form2
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.Submit = new System.Windows.Forms.Button();
            this.USRN = new System.Windows.Forms.Label();
            this.PASSB = new System.Windows.Forms.Label();
            this.TBUSER = new System.Windows.Forms.TextBox();
            this.pdt = new System.Windows.Forms.TextBox();
            this.CNPASSB = new System.Windows.Forms.Label();
            this.cpdt = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // Submit
            // 
            this.Submit.Location = new System.Drawing.Point(219, 260);
            this.Submit.Name = "Submit";
            this.Submit.Size = new System.Drawing.Size(116, 45);
            this.Submit.TabIndex = 0;
            this.Submit.Text = "Submit!";
            this.Submit.UseVisualStyleBackColor = true;
            this.Submit.Click += new System.EventHandler(this.Submit_Click);
            // 
            // USRN
            // 
            this.USRN.AutoSize = true;
            this.USRN.Location = new System.Drawing.Point(156, 66);
            this.USRN.Name = "USRN";
            this.USRN.Size = new System.Drawing.Size(97, 24);
            this.USRN.TabIndex = 1;
            this.USRN.Text = "Username";
            // 
            // PASSB
            // 
            this.PASSB.AutoSize = true;
            this.PASSB.Location = new System.Drawing.Point(161, 129);
            this.PASSB.Name = "PASSB";
            this.PASSB.Size = new System.Drawing.Size(92, 24);
            this.PASSB.TabIndex = 2;
            this.PASSB.Text = "Password";
            // 
            // TBUSER
            // 
            this.TBUSER.Location = new System.Drawing.Point(295, 63);
            this.TBUSER.Name = "TBUSER";
            this.TBUSER.Size = new System.Drawing.Size(100, 29);
            this.TBUSER.TabIndex = 3;
            // 
            // pdt
            // 
            this.pdt.Location = new System.Drawing.Point(295, 126);
            this.pdt.Name = "pdt";
            this.pdt.Size = new System.Drawing.Size(100, 29);
            this.pdt.TabIndex = 4;
            // 
            // CNPASSB
            // 
            this.CNPASSB.AutoSize = true;
            this.CNPASSB.Location = new System.Drawing.Point(91, 193);
            this.CNPASSB.Name = "CNPASSB";
            this.CNPASSB.Size = new System.Drawing.Size(162, 24);
            this.CNPASSB.TabIndex = 5;
            this.CNPASSB.Text = "Confirm Password";
            // 
            // cpdt
            // 
            this.cpdt.Location = new System.Drawing.Point(295, 193);
            this.cpdt.Name = "cpdt";
            this.cpdt.Size = new System.Drawing.Size(100, 29);
            this.cpdt.TabIndex = 6;
            // 
            // Form2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(11F, 24F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.ClientSize = new System.Drawing.Size(532, 344);
            this.Controls.Add(this.cpdt);
            this.Controls.Add(this.CNPASSB);
            this.Controls.Add(this.pdt);
            this.Controls.Add(this.TBUSER);
            this.Controls.Add(this.PASSB);
            this.Controls.Add(this.USRN);
            this.Controls.Add(this.Submit);
            this.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Margin = new System.Windows.Forms.Padding(6, 6, 6, 6);
            this.Name = "Form2";
            this.Text = "Change Password";
            this.Load += new System.EventHandler(this.Form2_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button Submit;
        private System.Windows.Forms.Label USRN;
        private System.Windows.Forms.Label PASSB;
        private System.Windows.Forms.TextBox TBUSER;
        private System.Windows.Forms.TextBox pdt;
        private System.Windows.Forms.Label CNPASSB;
        private System.Windows.Forms.TextBox cpdt;
    }
}