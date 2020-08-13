package com.example.eval_2;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.SparseBooleanArray;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.ListView;
import android.widget.Toast;

public class FoodOrderingActivity extends AppCompatActivity {

    String[] foods = {"Biryani", "Pasta", "Noodles", "Burger", "Pizza", "Daal", "Rice"};
    int[] cost = {45, 67, 18, 90, 30, 81, 55};

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_food_ordering);

        final ListView lv = findViewById(R.id.lv);
        lv.setChoiceMode(ListView.CHOICE_MODE_MULTIPLE);
        final ArrayAdapter<String> adapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_multiple_choice, foods);
        lv.setAdapter(adapter);

        Button bt = findViewById(R.id.bt_submit);
        bt.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String items = "";
                lv.setEnabled(false);
                SparseBooleanArray checked = lv.getCheckedItemPositions();
                for(int i=0; i<foods.length; i++){
                    if(checked.get(i)){
                        if(i!=0) items+="\n";
                        items+= String.format("%s: %d", foods[i], cost[i]);
                    }
                }
                Toast.makeText(getBaseContext(), items, Toast.LENGTH_LONG).show();
            }
        });
    }
}
