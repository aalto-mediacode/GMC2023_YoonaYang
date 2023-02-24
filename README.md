# GMC2023_YoonaYang
<img width="1680" alt="main_image_01" src="https://user-images.githubusercontent.com/96958198/221167131-b1881284-5a9f-41e0-aca4-9ed732c80d77.png">

<h3> Unusual arrangement </h3>

Each cube’s position refers the position of mouseX and mouseY that I clicked. The specific rule to refer it is unusual. The position of the one cube refers the current mouse X and Y, but also previous mouse X and Y. 
There is a formula behind this.

The new cube’s X-position is the result of current mouseX minus previous mouseX. If the result is over 0, the new cube appears on the right side of the previous cube. If the result is less than 0, the new cube appears on the left side of the previous cube. 

Also, the new cube’s Y-position is the result of the current mouseY minus previous mouseY. if the result is over 0, the new cube appears on the bottom side of the previous cube. If the result is less than 0, the new cube appears on the upper side of the previous cube. 

And the cube’s Z-position is chronological order. 

The original idea of this project is using the EXIF data from the photos taken via the smartphone. The EXIF data includes the GPS and time data. The mouseX’s value will be longitude data and the mouseY’s value will be latitude data. Each cube implies the moment in a certain place and time. Through generating cubes, I want to show more on the relationship between the moments , rather than the actual numeric location data. 
