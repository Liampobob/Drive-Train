
class DriveTrain{
        private:
              //Victors
              Victor LeftFrontVic;
              Victor LeftBackVic;
              Victor RightFrontVic;
              Victor RIghtBackVic;
              
              //Speeds
              double rotationSpeed;
              double moveSpeed;
              
              enum driveState{
                MOVE_FORWARD; MOVE_BACKWARDS; STOP; ROTATE_Left; ROTATE_Right:
              }
              
        public:
              
              DriveTrain();
              
              Update();
              
              RotateLeft();
              
              RotateRight();
              
              MoveForwards();
              
              MoveBackwards();
              
              Stop();
