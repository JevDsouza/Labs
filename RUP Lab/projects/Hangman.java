/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hatred;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import javax.swing.JOptionPane;
import java.io.*;
import java.awt.*;
import java.awt.event.*;
import java.awt.Graphics;
import javax.swing.ImageIcon;
import javax.swing.*;
import java.awt.image.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import javax.imageio.ImageIO;
import static javax.swing.JFrame.EXIT_ON_CLOSE;

public class Hangman extends JFrame implements ActionListener {
    /**
     * Hangman game!
     * @author Berend de Groot
     */
    private static final long serialVersionUID = 4083575124936336393L;
    private JButton speler1, speler2, hint;
    private JPanel p;
    private JLabel lab1, lab2, lab3, lab4;
    private JTextField woord, letter;
    private String sWoord = "";
    private String saveWoord = "";
    private String gWoord = "";
    private int aantalVerloren = 0;
    private String st="";
    public String newsWoord;
    public Hangman()  {
       setLayout(new FlowLayout());
        
        p = new JPanel();
        p.setPreferredSize(new Dimension(490, 340));
       p.setBackground(Color.GRAY);
    //  BufferedImage image =ImageIO.read(new File("C:\\Users\\MAHE\\Desktop\\h1.jpg"));
    //  JLabel label = new JLabel(new ImageIcon(image));
    //  p.add(label1);
        speler1 = new JButton("Player 1");
        speler1.addActionListener(this);
        
        hint = new JButton("Hint");
        hint.addActionListener(this);
        hint.setEnabled(false);
        
        speler2 = new JButton("Player 2");
        speler2.addActionListener(this);
        speler2.setEnabled(false);

        lab1 = new JLabel("Enter a word");
        lab2 = new JLabel("Give a letter");
        lab3 = new JLabel("Guessed: ");
        lab4 = new JLabel(" ");

        woord = new JTextField(20);
        letter = new JTextField(10);
        letter.setEnabled(false);

        add(lab1);
        add(woord);
        add(speler1);
        add(p);
        add(lab2);
        add(letter);
        add(speler2);
        add(lab3);
        add(lab4);
        add(hint);
        
        setTitle("Hangman game!");
        setSize(500, 500);
        setVisible(true);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
    }

    public void actionPerformed(ActionEvent e) {

        if(e.getSource() == speler1) {
              newsWoord = woord.getText();
            int woordLengte = newsWoord.length();
            if(woordLengte >= 3 && woordLengte <= 8) {
                setsWoord(newsWoord.toLowerCase());
                setSaveWoord(newsWoord.toLowerCase());
                String newgWoord = "";

                for (int i=0; i < woordLengte; i++) {
                        newgWoord = newgWoord +  "_";
                }

                setgWoord(newgWoord + "  " + woordLengte + " Long.");
                woord.setText("Saved!");
                lab4.setText(gWoord);   
                enableSpeler2();
                hint.setEnabled(true);
                repaint();
            }
            else {
                woord.setText("Word does not fit the requirements.");
            }
        }   
         /*Class.forName("oracle.jdbc.driver.OracleDriver");

//step2 create  the connection object  
            Connection con = DriverManager.getConnection(
                    "jdbc:oracle:thin:@localhost:1521:xe", "SYSTEM", "student");

//step3 create the statement object  
            Statement stmt = con.createStatement();

//step4 execute query  
            ResultSet rs = stmt.executeQuery("select * from registration");
             choose a=new choose();
             String password=jTextField2.getText();
             String user=jTextField1.getText();
            while (rs.next()) {
                if(user.contentEquals(rs.getString(1)) && password.contentEquals(rs.getString(2)))
                {
                    a.setVisible(true);
                    this.setVisible(false);
                    ch=1;
                }       
            }
            if(ch==0)
            {
                please_register b=new please_register();
                b.setVisible(true);
                this.dispose();
            }

//step5 close the connection object  
            con.close(); */
          
        if(e.getSource() == speler2) {

            Graphics g = p.getGraphics();
            Graphics2D g2 = (Graphics2D)g;
            g2.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);

            g2.setColor(Color.BLACK);
            g2.setStroke(new BasicStroke(10));

            
            String s = letter.getText();
           
            s = s.toLowerCase();
            int flag =0 ;
         /*   for(int j =0 ; j<= st.length();j++)
            {
                if(s.equals(st.charAt(j)))
                    flag=1;
                    
            } */
            
            if(s.length() == 1 ) {
                 if(new String(st).contains(String.valueOf(s)))
                flag++;
               st = st + s; 
              if(flag!=0)
                {
                    letter.setText("");
                    JOptionPane.showMessageDialog(null , " Letter already entered !");
                } 
                else   
                if(sWoord.contains(s)) {
                    char c = s.charAt(0);

                    int aantal = countMatches(sWoord, c);

                    for(int i =0 ; i < aantal; i++) {
                        int index = sWoord.indexOf(s);
                        setsWoord(sWoord.replaceFirst(s, " "));
                        String newgWoord = gWoord.substring(0,index) + s + gWoord.substring(index + 1);
                        setgWoord(newgWoord);
                    }

                    lab4.setText(gWoord);
                    letter.setText("");
                }
                else {
                    letter.setText("");
                    aantalVerloren++;

                    switch (aantalVerloren) {
                        case 1: g2.drawLine(80, 320, 230, 320); break;
                        case 2: g2.drawLine(120, 100, 120, 320); break;
                        case 3: g2.drawLine(120, 100, 300, 100); break;
                        case 4: g2.drawLine(122, 270, 180, 315); break;
                        case 5: g2.drawLine(122, 130, 180, 102); break;
                        case 6: g2.setStroke(new BasicStroke(3)); g2.drawLine(280, 100, 280, 150); break;
                        case 7: g2.fillOval(260, 150, 40, 40); break;
                        case 8: g2.setStroke(new BasicStroke(3)); g2.drawLine(280, 190, 280, 240); break;
                        case 9: g2.setStroke(new BasicStroke(3)); g2.drawLine(280, 240, 300, 260); g2.drawLine(280, 240, 260, 260); break;
                        case 10: g2.setStroke(new BasicStroke(3)); g2.drawLine(280, 220, 300, 200); g2.drawLine(260, 200, 280, 220); break;
                    }

                }
            }
            else {
                letter.setText("");
               JOptionPane.showMessageDialog(null , " Please enter one letter !");
            }
                  
            if(aantalVerloren == 10) {
                //g.drawString("Game Over", 50, 50);
                aantalVerloren = 0;
                letter.setText("");
              //  JOptionPane.showMessageDialog(null,"Lose !");
               // mainm.setEnabled(true);
              
               this.setVisible(false);
                Gameover gg = new Gameover();
               gg.setVisible(true);
              
                enableSpeler1();
            }
            else if (!gWoord.contains("_")) {
                aantalVerloren = 0;
             //   g.drawString("Gratz!! You won!!!", 50, 50);
               
                letter.setText("");
                 this.setVisible(false);
                won gg1 = new won();
               gg1.setVisible(true);
               enableSpeler1();
                
            }
        }
        if(e.getSource()==hint)
            {
                 //g.drawString("hi", 50, 50);
                char one;
                int l=0;
             //   for(int l=0; l<sWoord.length();l++)
               while(l<sWoord.length()) 
               { one=sWoord.charAt(l);
                        
            int flag1=0;
            if(!(new String(gWoord).contains(String.valueOf(one))))
            {
                 String str_temp =  ("Hint is "+ one + " ");
               JOptionPane.showMessageDialog(null , str_temp );
               // g.drawString(str_temp, 50, 50);
              hint.setVisible(false);
            break;
            }
            else
            {
                l++;
                continue;
            }
                }
            } 
       
    }

    /**
     * Count all matches for a char in a string.
     * @param woord
     * @param letter
     * @return count
     */
    public int countMatches(String woord, char letter) {
        int count = 0;
        for (int i=0; i < woord.length(); i++){
            if (woord.charAt(i) == letter) {
                 count++;
            }
        }
        return count;
    }

    /**
     * Enables player 1.
     */
    public void enableSpeler1() {
        letter.setEnabled(false);
        speler2.setEnabled(false);
        woord.setEnabled(true);
        speler1.setEnabled(true);
    }

    /**
     * Enables player 2
     */
    public void enableSpeler2() {
        letter.setEnabled(true);
        speler2.setEnabled(true);
        woord.setEnabled(false);
        speler1.setEnabled(false);
    }

    public String getsWoord() {
        return sWoord;
    }

    public void setsWoord(String sWoord) {
        this.sWoord = sWoord;
    }

    public String getgWoord() {
        return gWoord;
    }

    public void setgWoord(String gWoord) {
        this.gWoord = gWoord;
    }

    public String getSaveWoord() {
        return saveWoord;
    }

    public void setSaveWoord(String saveWoord) {
        this.saveWoord = saveWoord;
    }

    public static void main(String[] args) {
        JFrame Hangman = new Hangman();
    }

}