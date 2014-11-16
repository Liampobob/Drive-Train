
class DriveTrain{
        private:
              //Victors
              Victor leftFrontVic;
              Victor leftBackVic;
              Victor rightFrontVic;
              Victor rightBackVic;
              
              Joystick leftRightController();
              Joystick frontwardBackwardController();
              
              //Speeds
              double rotationSpeed;
              double moveSpeed;
              
              enum driveState{
                MOVE_FORWARD, MOVE_BACKWARDS, STOP, ROTATE_Left, ROTATE_Right
              }
              
        public:
              
              DriveTrain();
              
              void update();
              
              void rotateLeft();
              
              void rotateRight();
              
              void move();
              
              void stop();
