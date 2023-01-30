# MBR-overwrite
Simple POC program for overwriting the master boot record with a custom file.
To get this to run, you need to add in your own bootable image (must be 512 bytes in most cases) and format it all correctly inside of the C++ code.
To do this, I reccomend this tool: https://notisrac.github.io/FileToCArray/ 

Some fun repo's to get neat bootable images from (my personal favs):
- https://github.com/io12/BootMine
- https://github.com/brainsmoke/nyanmbr
- https://github.com/egormkn/mbr-boot-manager
- https://github.com/jbremer/goatse.mbr
- https://github.com/nongiach/snake_boot_sector
- https://github.com/nanochess/Invaders
- https://github.com/nanochess/Pillman
- https://github.com/nanochess/bootle (also availible is https://github.com/KatPurpy/asmle)
- https://github.com/nanochess/bricks
- https://github.com/nanochess/bootRogue
- https://github.com/nanochess/lights
- https://github.com/nanochess/tetranglix
- https://github.com/mat-sz/pongloader
- https://github.com/mat-sz/bfloader
- https://github.com/JulianSlzr/project512
- https://forum.osdev.org/viewtopic.php?f=2&t=18763&p=145238#p145238
- https://forum.osdev.org/viewtopic.php?f=2&t=20006&start=15#p157571
- https://github.com/QiZD90/dasher512
- https://github.com/pjanczyk/512B-bootloader-effect
- https://github.com/febnug/tix
- https://github.com/darkvoxels/battlesnakes
- https://github.com/nullvalue0/MatchUp



Or you could use it for malicious stuff like a rootkit, but what fun is that?
