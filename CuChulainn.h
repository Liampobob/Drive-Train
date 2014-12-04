class CuCulainn : public IterativeRobot {
     public:
     CuChulainn();
     	void RobotInit();
     	void AutonomousInit()
     	void AutonomousPeriodic();
     	void AutonomousDisabled();
     	void DisabledInit();
     	void DisabledPeriodic();
     	void TeleopInit();
     	void TeleopPeriodic();
     	void TeleopDisabled();
     	void TestInit();
     	void TestPeriodic();
     
     private:
     Robot robot;
     HumanController human;


}
