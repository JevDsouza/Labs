package com.example.endsem;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.speech.tts.TextToSpeech;
import android.view.View;
import android.widget.Button;

import java.util.Locale;

public class MainActivity extends AppCompatActivity {
    TextToSpeech t1;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        t1=new TextToSpeech(getApplicationContext(), new TextToSpeech.OnInitListener() {
            @Override
            public void onInit(int status) {
                if(status != TextToSpeech.ERROR) {
                    t1.setLanguage(Locale.US);
                }
            }
        });
    }

    public void ButtonOnClick(View view)
    {
        Button b1 = findViewById(R.id.button1);
        Button b2 = findViewById(R.id.button2);
        Button b3 = findViewById(R.id.button3);
        Button b4 = findViewById(R.id.button4);
        Button b5 = findViewById(R.id.button5);
        Button b6 = findViewById(R.id.button6);
        Button b7 = findViewById(R.id.button7);
        Button b8 = findViewById(R.id.button8);
        String s;
        switch(view.getId())
        {
            case R.id.button1:
            {
                s = b1.getText().toString();
                t1.speak(s, TextToSpeech.QUEUE_FLUSH, null);
                break;
            }
            case R.id.button2:
            {
                s = b2.getText().toString();
                t1.speak(s, TextToSpeech.QUEUE_FLUSH, null);
                break;
            }
            case R.id.button3:
            {
                s = b3.getText().toString();
                t1.speak(s, TextToSpeech.QUEUE_FLUSH, null);
                break;
            }
            case R.id.button4:
            {
                s = b4.getText().toString();
                t1.speak(s, TextToSpeech.QUEUE_FLUSH, null);
                break;
            }
            case R.id.button5:
            {
                s = b5.getText().toString();
                t1.speak(s, TextToSpeech.QUEUE_FLUSH, null);
                break;
            }
            case R.id.button6:
            {
                s = b6.getText().toString();
                t1.speak(s, TextToSpeech.QUEUE_FLUSH, null);
                break;
            }
            case R.id.button7:
            {
                s = b7.getText().toString();
                t1.speak(s, TextToSpeech.QUEUE_FLUSH, null);
                break;
            }
            case R.id.button8:
            {
                s = b8.getText().toString();
                t1.speak(s, TextToSpeech.QUEUE_FLUSH, null);
                break;
            }
        }

    }
}
