/* Generated by wayland-scanner 1.17.0 */

#ifndef TEXT_CURSOR_POSITION_CLIENT_PROTOCOL_H
#define TEXT_CURSOR_POSITION_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

#ifdef __cplusplus
extern "C"
{
#endif

	/**
	 * @page page_text_cursor_position The text_cursor_position protocol
	 * @section page_ifaces_text_cursor_position Interfaces
	 * - @subpage page_iface_text_cursor_position -
	 */
	struct text_cursor_position;
	struct wl_surface;

	/**
	 * @page page_iface_text_cursor_position text_cursor_position
	 * @section page_iface_text_cursor_position_api API
	 * See @ref iface_text_cursor_position.
	 */
	/**
	 * @defgroup iface_text_cursor_position The text_cursor_position interface
	 */
	extern const struct wl_interface text_cursor_position_interface;

#define TEXT_CURSOR_POSITION_NOTIFY 0

/**
 * @ingroup iface_text_cursor_position
 */
#define TEXT_CURSOR_POSITION_NOTIFY_SINCE_VERSION 1

	/** @ingroup iface_text_cursor_position */
	static inline void
	text_cursor_position_set_user_data(struct text_cursor_position *text_cursor_position, void *user_data)
	{
		wl_proxy_set_user_data((struct wl_proxy *)text_cursor_position, user_data);
	}

	/** @ingroup iface_text_cursor_position */
	static inline void *
	text_cursor_position_get_user_data(struct text_cursor_position *text_cursor_position)
	{
		return wl_proxy_get_user_data((struct wl_proxy *)text_cursor_position);
	}

	static inline uint32_t
	text_cursor_position_get_version(struct text_cursor_position *text_cursor_position)
	{
		return wl_proxy_get_version((struct wl_proxy *)text_cursor_position);
	}

	/** @ingroup iface_text_cursor_position */
	static inline void
	text_cursor_position_destroy(struct text_cursor_position *text_cursor_position)
	{
		wl_proxy_destroy((struct wl_proxy *)text_cursor_position);
	}

	/**
	 * @ingroup iface_text_cursor_position
	 */
	static inline void
	text_cursor_position_notify(struct text_cursor_position *text_cursor_position, struct wl_surface *surface, wl_fixed_t x, wl_fixed_t y)
	{
		wl_proxy_marshal((struct wl_proxy *)text_cursor_position,
						 TEXT_CURSOR_POSITION_NOTIFY, surface, x, y);
	}

#ifdef __cplusplus
}
#endif

#endif
