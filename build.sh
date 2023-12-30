make -j16

# 如果你使用的是 makefile 用来 , 下面命令是用来生成 compile_commands.json 文件的
compiledb -n make

cp build/*.hex ~/Desktop/

stlink_cfg=C:/Users/doit132/scoop/apps/openocd/current/share/openocd/scripts/interface/stlink.cfg
stm32f1x_cfg=C:/Users/doit132/scoop/apps/openocd/current/share/openocd/scripts/target/stm32f1x.cfg

openocd -f $stlink_cfg -f $stm32f1x_cfg -c init -c "reset halt; wait_halt; flash write_image erase ./build/stm32f103zet6-hal-learning.hex" -c reset -c shutdown

# 或者, 如果下载的是 bin 文件, 那么需要指明地址
# openocd -f $stlink_cfg -f $stm32f1x_cfg -c init -c "reset halt; wait_halt; flash write_image erase ./build/stm32f103zet6-hal-learning.bin 0x08000000" -c reset -c shutdown
