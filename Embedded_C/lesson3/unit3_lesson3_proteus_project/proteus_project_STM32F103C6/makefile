#@copyrights elgazzar
CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m3 -gdwarf-2 -mthumb
INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard  *.s)
ASOBJ = $(AS:.s=.o)
project_name=learn-in-depth_cortex_m3
all: $(project_name).bin
	@echo "all build is done"
%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@
%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@
$(project_name).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld -Map=map_file.map $(OBJ) $(ASOBJ) -o $@
$(project_name).bin: $(project_name).elf  
	$(CC)objcopy.exe -O  binary $< $@
$(project_name).hex: $(project_name).elf  
	$(CC)objcopy.exe -O  binary $< $@	
clean_all:
	rm *.o *.elf *.bin
clean:
	rm *.bin *.elf
