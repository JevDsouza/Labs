package railwayman;


import static com.sun.org.apache.xalan.internal.xsltc.compiler.util.Type.String;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import javax.swing.JOptionPane;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author MAHE
 */
public class Payment extends javax.swing.JFrame {
    int user_id;
    int passenger_id;
    String name;
    int age;
    String gender;
    int type;
    String fare;
    int train_no;
    /** Creates new form Payment */
    public Payment(int u_id, int train_num,int p_id, String nm, int a, String g, int t) {
        initComponents();
        user_id = u_id;
        passenger_id = p_id;
        name = nm;
        age = a;
        gender = g;
        type = t;
        train_no = train_num;
        try {
            Class.forName("oracle.jdbc.driver.OracleDriver");
            Connection con = DriverManager.getConnection(
                    "jdbc:oracle:thin:@localhost:1521:xe", "SYSTEM", "shivi");
            Statement stmt = con.createStatement();
            ResultSet rs = stmt.executeQuery("select * from train_status where train_no ="+train_no+"");
            //float temp;
            while(rs.next()){
                //System.out.println("here_one");
                //temp = rs.getFloat(8);
                fare = rs.getString(8);
           }
            //System.out.println(fare);
            jLabel3.setText(fare);
            con.close();

        } catch (Exception e) {
            System.out.println(e);
        }
    }

    /** This method is called from within the constructor to
     * initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is
     * always regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jButton1 = new javax.swing.JButton();
        jLabel4 = new javax.swing.JLabel();
        jTextField1 = new javax.swing.JTextField();
        jLabel5 = new javax.swing.JLabel();
        jTextField2 = new javax.swing.JTextField();

        jLabel1.setText("jLabel1");

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jLabel2.setText("Fare");

        jLabel3.setText("jLabel3");

        jButton1.setText("Confirm");
        jButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton1ActionPerformed(evt);
            }
        });

        jLabel4.setText("CVV");

        jLabel5.setText("Account Number");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(147, 147, 147)
                .addComponent(jButton1)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
            .addGroup(layout.createSequentialGroup()
                .addGap(46, 46, 46)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel4)
                    .addComponent(jLabel2)
                    .addComponent(jLabel5))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 125, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(jTextField1)
                    .addComponent(jLabel3, javax.swing.GroupLayout.DEFAULT_SIZE, 75, Short.MAX_VALUE)
                    .addComponent(jTextField2))
                .addGap(75, 75, 75))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(52, 52, 52)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel2)
                    .addComponent(jLabel3))
                .addGap(39, 39, 39)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel4)
                    .addComponent(jTextField1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(jLabel5)
                        .addGap(52, 52, 52))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(52, 52, 52)
                        .addComponent(jTextField2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 36, Short.MAX_VALUE)))
                .addComponent(jButton1)
                .addGap(44, 44, 44))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
        // TODO add your handling code here:
        try {
            Class.forName("oracle.jdbc.driver.OracleDriver");
            Connection con = DriverManager.getConnection(
                    "jdbc:oracle:thin:@localhost:1521:xe", "SYSTEM", "shivi");
            Statement stmt = con.createStatement();
            ResultSet rs = stmt.executeQuery("select max(ticket_id) from ticket");
            int max = 1, available=5, b_seats = 5, w_seats =5;
            while(rs.next()){
            //System.out.println("max");
            max = Integer.parseInt(rs.getString(1));}
            max++;
            System.out.println(max);
            rs = stmt.executeQuery("select * from train where train_no = "+train_no+"");
            while(rs.next()){
            System.out.println("available");
            available = rs.getInt(5);}
            System.out.println(available);
            rs = stmt.executeQuery("select * from train_status where train_no = "+train_no+"");
            while(rs.next()){
            System.out.println("seats");
            b_seats = rs.getInt(2);
            w_seats = rs.getInt(6);}
            //System.out.println(b_seats);
            //System.out.println(w_seats);
            if(available>0)
            {
                //System.out.println("the first");
                rs = stmt.executeQuery("insert into ticket values("+max+","+user_id+",'Confirmed',"+train_no+")");
                //System.out.println("the second");
                rs = stmt.executeQuery("insert into books values("+user_id+","+max+")");
                //System.out.println("the third");
                rs = stmt.executeQuery("insert into passenger values("+passenger_id+","+max+","+age+",'"+gender+"',"+user_id+",'C',"+max+",'"+name+"',"+max+")");
                //System.out.println("the fourth");
                available--;
                rs = stmt.executeQuery("update train set availability_of_seats = "+(available)+"where train_no = "+train_no+"");
                //System.out.println("the fifth");
                b_seats++;
                rs = stmt.executeQuery("update train_status set b_seat1 = "+b_seats+", a_seat1 ="+available+ "where train_no ="+train_no+"");
                //System.out.println("ONE WORKS");
                JOptionPane.showMessageDialog(null , "Seats booked! Your tickets are confirmed");
                Menu s = new Menu(user_id);
                s.setVisible(true);
                this.dispose();
            }
            else if(available ==0 && w_seats<2 && w_seats>=0)
            {
                //System.out.println("the first");
                rs = stmt.executeQuery("insert into ticket values("+max+","+user_id+",'Waiting',"+train_no+")");
                //System.out.println("the two");
                rs = stmt.executeQuery("insert into books values("+user_id+","+max+")");
                //System.out.println("the three");
                rs = stmt.executeQuery("insert into passenger values("+passenger_id+","+max+","+age+",'"+gender+"',"+user_id+",'W',"+max+",'"+name+"',"+max+")");
                //System.out.println("the four");
                w_seats++;
                rs = stmt.executeQuery("update train_status set w_seat1 = "+w_seats+"where train_no ="+train_no+"");
                //System.out.println("TWO WORKS");
                JOptionPane.showMessageDialog(null , "All seats are booked. You have been put in the waitlist.");
                Menu s = new Menu(user_id);
                s.setVisible(true);
                this.dispose();
            }
            else if(available==0 && w_seats>=2)
            {
               JOptionPane.showMessageDialog(null , "Sorry the train is not available");
                Menu s = new Menu(user_id);
                s.setVisible(true);
                this.dispose(); 
            }
            con.close();

        } catch (Exception e) {
            System.out.println(e);
        }
    }//GEN-LAST:event_jButton1ActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(Payment.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Payment.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Payment.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Payment.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        /**java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Payment().setVisible(true);
            }
        });*/
        
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton jButton1;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JTextField jTextField1;
    private javax.swing.JTextField jTextField2;
    // End of variables declaration//GEN-END:variables

}
