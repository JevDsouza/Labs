namespace LoginLab1
{
    partial class Form1
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
            this.label1 = new System.Windows.Forms.Label();
            this.LoginButton = new System.Windows.Forms.Button();
            this.Regbutton = new System.Windows.Forms.Button();
            this.label2 = new System.Windows.Forms.Label();
            this.TBUSER = new System.Windows.Forms.TextBox();
            this.TBPASS = new System.Windows.Forms.TextBox();
            this.ChPassButton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(160, 67);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(102, 24);
            this.label1.TabIndex = 0;
            this.label1.Text = "Username:";
            // 
            // LoginButton
            // 
            this.LoginButton.Location = new System.Drawing.Point(313, 175);
            this.LoginButton.Name = "LoginButton";
            this.LoginButton.Size = new System.Drawing.Size(90, 42);
            this.LoginButton.TabIndex = 1;
            this.LoginButton.Text = "Login";
            this.LoginButton.UseVisualStyleBackColor = true;
            this.LoginButton.Click += new System.EventHandler(this.LoginButton_Click);
            // 
            // Regbutton
            // 
            this.Regbutton.Location = new System.Drawing.Point(164, 175);
            this.Regbutton.Name = "Regbutton";
            this.Regbutton.Size = new System.Drawing.Size(89, 42);
            this.Regbutton.TabIndex = 2;
            this.Regbutton.Text = "Register";
            this.Regbutton.UseVisualStyleBackColor = true;
            this.Regbutton.Click += new System.EventHandler(this.Regbutton_Click_1);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(160, 116);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(97, 24);
            this.label2.TabIndex = 3;
            this.label2.Text = "Password:";
            // 
            // TBUSER
            // 
            this.TBUSER.Location = new System.Drawing.Point(303, 67);
            this.TBUSER.Name = "TBUSER";
            this.TBUSER.Size = new System.Drawing.Size(100, 29);
            this.TBUSER.TabIndex = 4;
            // 
            // TBPASS
            // 
            this.TBPASS.Location = new System.Drawing.Point(303, 116);
            this.TBPASS.Name = "TBPASS";
            this.TBPASS.Size = new System.Drawing.Size(100, 29);
            this.TBPASS.TabIndex = 5;
            // 
            // ChPassButton
            // 
            this.ChPassButton.Location = new System.Drawing.Point(184, 241);
            this.ChPassButton.Name = "ChPassButton";
            this.ChPassButton.Size = new System.Drawing.Size(200, 43);
            this.ChPassButton.TabIndex = 6;
            this.ChPassButton.Text = "Change Password";
            this.ChPassButton.UseVisualStyleBackColor = true;
            this.ChPassButton.Click += new System.EventHandler(this.ChPassButton_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(11F, 24F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.ClientSize = new System.Drawing.Size(565, 340);
            this.Controls.Add(this.ChPassButton);
            this.Controls.Add(this.TBPASS);
            this.Controls.Add(this.TBUSER);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.Regbutton);
            this.Controls.Add(this.LoginButton);
            this.Controls.Add(this.label1);
            this.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Margin = new System.Windows.Forms.Padding(5, 6, 5, 6);
            this.Name = "Form1";
            this.Text = "LoginRequest";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button LoginButton;
        private System.Windows.Forms.Button Regbutton;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox TBUSER;
        private System.Windows.Forms.TextBox TBPASS;
        private System.Windows.Forms.Button ChPassButton;
    }
}

