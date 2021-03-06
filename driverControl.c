#pragma config(Motor,  port1,           topRight,      tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           topLeft,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           bottomRight,   tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           bottomLeft,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           liftRight,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           liftLeft,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           claw,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           mobLeft,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port9,           mobRight,      tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(true) {
		motor[topRight] = vexRT[Ch2];
		motor[bottomRight] = vexRT[Ch2];
		motor[topLeft] = vexRT[Ch3];
		motor[bottomLeft] = vexRT[Ch3];

	void lift () {
		if(vexRT[Btn6U] == true) {
		motor[liftRight] && motor[liftLeft] = 127;
		} else if (vexRT[Btn6D] == true) {
		motor[liftRight] && motor[liftLeft] = -127;
		} 
	}
		
	void claw () {
		
		if(vexRT[Btn5U] == true) {
		motor[claw] = 127;
		} else if (vexRT[Btn5D] == true) {
		motor[claw] = -127;
		} else 
	}


}
