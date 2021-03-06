﻿using UnityEngine;
using System.Collections;

public class PlayerMove02 : MonoBehaviour {

	private CharacterController _controller;
	private Vector3 _lastMousePos;
	private float spd = 0.02f;

	public GameObject head;
	private CharacterController cCon;
	private Vector3 vel = Vector3.zero;

	// Use this for initialization
	void Start(){
			Debug.Log("Hello World");
			cCon = GetComponent<CharacterController>();
	}

	// Update is called once per frame
	void Update(){

		if (Input.GetMouseButton(0)) {
				//マウスの左ボタンを押している間だけ進む
        Debug.Log("左ボタンが押されている");

				//ドラッグしていなければ
				Vector3 mousePos = Input.mousePosition;
				float gapX = _lastMousePos.x - mousePos.x;
				float gapY = _lastMousePos.y - mousePos.y;
				float gapXY = gapX + gapY;

				if(Mathf.Abs(gapXY) < 0.01f){ //<- マウス移動の許容値 この数値は適宜変更する
						spd = 0.02f;

				}else{
						spd = 0.005f;
				}
				Vector3 vectorForward = head.transform.forward;
				//vectorForward.y = 0.0f;
				vel = vectorForward * spd;


    }else{
			vel = Vector3.zero;
		}

		// 落下
		vel += Vector3.down * -Physics.gravity.y * Time.fixedDeltaTime;
		cCon.Move(vel);

		// 着地していたら速度を0にする
		if (cCon.isGrounded) {
				vel.y = 0;
		}

		//1フレーム前の情報を取得
		_lastMousePos = Input.mousePosition;
	}


}
