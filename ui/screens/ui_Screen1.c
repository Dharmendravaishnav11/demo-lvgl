// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: SquareLine_button

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x240B0B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_color(ui_Screen1, lv_color_hex(0x1B0606), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_img_src( ui_Screen1, &TemporaryImage, LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_img_opa(ui_Screen1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_radius(ui_Screen1, 25, LV_PART_SCROLLBAR| LV_STATE_DEFAULT);
lv_obj_set_style_outline_color(ui_Screen1, lv_color_hex(0x000000), LV_PART_SCROLLBAR | LV_STATE_DEFAULT );
lv_obj_set_style_outline_opa(ui_Screen1, 255, LV_PART_SCROLLBAR| LV_STATE_DEFAULT);
lv_obj_set_style_outline_width(ui_Screen1, 0, LV_PART_SCROLLBAR| LV_STATE_DEFAULT);
lv_obj_set_style_outline_pad(ui_Screen1, 0, LV_PART_SCROLLBAR| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_Screen1, 50, LV_PART_SCROLLBAR| LV_STATE_CHECKED);
lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x1B1392), LV_PART_SCROLLBAR | LV_STATE_CHECKED );
lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_SCROLLBAR| LV_STATE_CHECKED);
lv_obj_set_style_bg_grad_color(ui_Screen1, lv_color_hex(0xFFFFFF), LV_PART_SCROLLBAR | LV_STATE_CHECKED );
lv_obj_set_style_border_color(ui_Screen1, lv_color_hex(0x000000), LV_PART_SCROLLBAR | LV_STATE_CHECKED );
lv_obj_set_style_border_opa(ui_Screen1, 255, LV_PART_SCROLLBAR| LV_STATE_CHECKED);

ui_Switch1 = lv_switch_create(ui_Screen1);
lv_obj_set_width( ui_Switch1, 60);
lv_obj_set_height( ui_Switch1, 40);
lv_obj_set_x( ui_Switch1, 2 );
lv_obj_set_y( ui_Switch1, lv_pct(40) );
lv_obj_set_align( ui_Switch1, LV_ALIGN_CENTER );

lv_obj_set_style_bg_color(ui_Switch1, lv_color_hex(0x121010), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Switch1, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Switch1, ui_event_Switch1, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Screen1, ui_event_Screen1, LV_EVENT_ALL, NULL);

}
