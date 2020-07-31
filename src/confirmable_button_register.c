/**
 * File:   confirmable_button.c
 * Author: AWTK Develop Team
 * Brief:  可确认的按钮。点击按钮时，弹出一个窗口，再次点击时，才触发CLICK事件。
 *
 * Copyright (c) 2020 - 2020 Guangzhou ZHIYUAN Electronics Co.,Ltd.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2020-07-30 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#include "tkc/mem.h"
#include "tkc/utils.h"
#include "confirmable_button_register.h"
#include "base/widget_factory.h"
#include "confirmable_button/confirmable_button.h"

ret_t confirmable_button_register(void) {
  return widget_factory_register(widget_factory(), WIDGET_TYPE_CONFIRMABLE_BUTTON,
                                 confirmable_button_create);
}
