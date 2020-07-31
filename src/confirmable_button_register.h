/**
 * File:   confirmable_button_register.h
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

#ifndef TK_CONFIRMABLE_BUTTON_REGISTER_H
#define TK_CONFIRMABLE_BUTTON_REGISTER_H

#include "base/widget.h"

BEGIN_C_DECLS

/**
 * @method  confirmable_button_register
 * 注册控件。
 *
 * @annotation ["global"]
 *
 * @return {ret_t} 返回RET_OK表示成功，否则表示失败。
 */
ret_t confirmable_button_register(void);

END_C_DECLS

#endif /*TK_CONFIRMABLE_BUTTON_REGISTER_H*/
