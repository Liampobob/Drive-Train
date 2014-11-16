.
DriveTrain::DriveTrain() :

  leftFrontVic(),
  leftBackVic(),
  rightFrontVic(),
  rightBackVic()
  
{
  
  rotateSpeed = leftRightController.get();
  moveSpeed = forwardBackwardController.get();
  
  leftFrontVic.Set(moveSpeed);
  leftBackVic.Set(moveSpeed);
  rightFrontVic.Set(moveSpeed);
  rightFrontVic.Set(moveSpeed);
  
  void DriveTrain::update(){
    
  
    
  }
  
  void DriveTrain::rotateLeft(){
    
  leftFrontVic.Set(moveSpeed);
  leftBackVic.Set(moveSpeed);
  rightFrontVic.Set(moveSpeed);
  rightFrontVic.Set(moveSpeed);
    
  }
  
  void DriveTrain::rotateRight(){
    
  leftFrontVic.Set(moveSpeed);
  leftBackVic.Set(moveSpeed);
  rightFrontVic.Set(moveSpeed);
  rightFrontVic.Set(moveSpeed);
    
  }
  
  void DriveTrain::stop(){
   
  leftFrontVic.Set(0.0);
  leftBackVic.Set(0.0);
  rightFrontVic.Set(0.0);
  rightFrontVic.Set(0.0);
    
  }

  void DriveTrain::move(){
    
  leftFrontVic.Set(moveSpeed);
  leftBackVic.Set(moveSpeed);
  rightFrontVic.Set(moveSpeed);
  rightFrontVic.Set(moveSpeed);
    
  }
}
