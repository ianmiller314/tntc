LAUNCH FILE INSTRUCTIONS
	(execute in main folder)
	unzip mytest.zip into main folder (bag file)
	docker build -t tntc .
	docker run --mount type=bind,source=.,target=/ros/catkin_ws -it --net localros --env ROS_HOSTNAME=localhost --env ROS_MASTER_URI=http://localhost:11311 tntc bash
	source devel/setup.bash
	roslaunch tntc.launch
	(bag file output in ./bagfile)
	
	
	

SEPARATE WINDOW INSTRUCTIONS
(ONLY NEEDED IF ABOVE IS NOT WORKING)

WINDOW 1 (MASTER)
	cd master
	docker build -t master .
	cd ..
	docker run -it --net localros --name master --env ROS_HOSTNAME=master --env ROS_MASTER_URI=http://master:11311 project1:master
	if name is taken:
		docker rm master


WINDOW 2 (MODEL)
	(Run in HW3 folder)
	docker run --mount type=bind,source=.,target=/ros/catkin_ws -it --net localros --env ROS_HOSTNAME=tntc --env ROS_MASTER_URI=http://master:11311 tntc bash
	catkin_make
	./build_ros_model.sh ros_controller.tgz .
	
	source devel/setup.bash
	cd build
	rosrun ros_controller ros_controller

WINDOW 3 (RECORD)
	docker run --mount type=bind,source=.,target=/ros/catkin_ws -it --net localros --env ROS_HOSTNAME=tntc --env ROS_MASTER_URI=http://master:11311 tntc bash
	rostopic list
	rostopic echo [topic]
	cd bagfiles
	rosbag record -a
