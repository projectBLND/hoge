using UnityEngine;
using System.Collections;

public class TestScript01 : MonoBehaviour {
	public float num;
	public int i1;
	public float sin;
	// Use this for initialization
	void Start () {
		num = 10.0f;
		i1 = 0;
	}

	// Update is called once per frame
	void Update () {
		sin = Mathf.Sin(Time.time * num);
		this.transform.Rotate(-1-sin, -1-sin, 1+sin);
	}
}
