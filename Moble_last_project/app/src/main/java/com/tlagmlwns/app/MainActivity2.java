package com.tlagmlwns.app;


import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity2 extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main2);

        TextView textlink = findViewById(R.id.link3);
        textlink.setOnClickListener(new View.OnClickListener() {//회원가입
            @Override
            public void onClick(View view) {
                Intent intent=new Intent(getApplicationContext(), MainActivity3.class);
                startActivity(intent);
            }
        });
        Button btn_login = findViewById(R.id.btn_login);
        btn_login.setOnClickListener(new View.OnClickListener() {//로그인시 메인페이지(임시)
            @Override
            public void onClick(View view) {
                Intent intent=new Intent(getApplicationContext(), MainActivity4.class);
                startActivity(intent);
            }
        });
    }
    public void onBackPressed() { //뒤로가기눌렀을때 선택지 주기
        showExitConfirmationDialog();
    }
    private void showExitConfirmationDialog() {
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setMessage("정말로 앱을 종료하시겠습니까?");
        builder.setPositiveButton("예", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
                finishAffinity();// 사용자가 확인을 누를 경우 앱을 완전히 종료
            }
        });
        builder.setNegativeButton("아니오", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
                dialog.dismiss();// 사용자가 취소를 누를 경우 다이얼로그를 닫음
            }
        });
        AlertDialog dialog = builder.create();
        dialog.show();
    }


}