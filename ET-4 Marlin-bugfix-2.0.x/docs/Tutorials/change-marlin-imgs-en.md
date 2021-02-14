# Change Marlin boot image on ET4

1. Download http://www.riuson.com/lcd-image-converter and open it. 

2. Open the image to be used. Must have a resolution according your display (320x240 for ET4)

3. Go to Options -> Conversion -> Image tab

4. Make sure that the Preset is in Color R5G6B5 and the Block size is 16 bits. 

5. Click OK. 

6. Then File -> Convert

7. Save it and you will have a file with a .c extension

8. Now the important thing here is really to take the hexadecimals and replace those with what is stored in:
\Marlin\src\lcd\tft\images\bootscreen_320x240x16.cpp

For the ET5 which has a resolution of 480x320, take this data into account in all the steps where the resolution is required. If image is shown with red and blue colours exchanged, choose the BGR preset instead of the RGB. 
