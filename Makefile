NAME=at32f4_scope
OBJS=main.o startup_at32f403a_407.o at32f403a_system.o

PREFIX?=arm-none-eabi-

CFLAGS= -nostartfiles --specs=nano.specs --specs=rdimon.specs -std=c11 -g3 -Os
CFLAGS+= -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16
CFLAGS+= -DAT32F403Axx -T linkerscript.ld


all: $(NAME).elf $(NAME).bin $(NAME).hex size

$(NAME).elf: $(OBJS)
	$(PREFIX)gcc $(CFLAGS) $(OBJS) -o $(NAME).elf

%.o: %.c
	$(PREFIX)gcc $(CFLAGS) -c $< -o $@

%.o: %.s
	$(PREFIX)gcc $(CFLAGS) -masm-syntax-unified -c $< -o $@

%.bin: %.elf
	$(PREFIX)objcopy -Obinary $(*).elf $(*).bin
	

%.hex: %.elf
	$(PREFIX)objcopy -Oihex $(*).elf $(*).hex

size:
	$(PREFIX)size $(NAME).elf

clean:

	$(RM) $(OBJS) $(NAME).elf $(NAME).bin $(NAME).hex

.PHONY: all clean $(NAME).elf
