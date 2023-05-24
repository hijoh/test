#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "lv_examples/src/lv_demo_widgets/lv_demo_widgets.h"
#include "lv_examples/src/lv_demo_music/lv_demo_music.h"
#include "lv_examples/src/lv_demo_benchmark/lv_demo_benchmark.h"
#include "lvgl_helpers.h"
#include "esp_freertos_hooks.h"

#include "esp_vfs.h"
#include "esp_spiffs.h"
#include "driver/gpio.h"
#include "nvs_flash.h"
#include "app_main.h"
#include "page_imu.h"
#include "button.h"
#include "bsp_adc.h"
#include "mpu6050.h"
#include "app_camera.h"
#include "app_led.h"
#include "app_speech_srcif.h"
#include "file_manager.h"
#define TAG "ESP32S3"

void app_main(void)
{

}
