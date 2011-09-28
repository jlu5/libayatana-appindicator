/* simple-client-vala.c generated by valac 0.14.0, the Vala compiler
 * generated from simple-client-vala.vala, do not modify */

/*
A small piece of sample code demonstrating a very simple application
with an indicator.

Copyright 2011 Canonical Ltd.

Authors:
    Marco Trevisan <mail@3v1n0.net>

This program is free software: you can redistribute it and/or modify it 
under the terms of the GNU General Public License version 3, as published 
by the Free Software Foundation.

This program is distributed in the hope that it will be useful, but 
WITHOUT ANY WARRANTY; without even the implied warranties of 
MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR 
PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along 
with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>

#include <gobject/gvaluecollector.h>


#define TYPE_SIMPLE_CLIENT (simple_client_get_type ())
#define SIMPLE_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SIMPLE_CLIENT, SimpleClient))
#define SIMPLE_CLIENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SIMPLE_CLIENT, SimpleClientClass))
#define IS_SIMPLE_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SIMPLE_CLIENT))
#define IS_SIMPLE_CLIENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SIMPLE_CLIENT))
#define SIMPLE_CLIENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SIMPLE_CLIENT, SimpleClientClass))

typedef struct _SimpleClient SimpleClient;
typedef struct _SimpleClientClass SimpleClientClass;
#define _simple_client_unref0(var) ((var == NULL) ? NULL : (var = (simple_client_unref (var), NULL)))
typedef struct _SimpleClientPrivate SimpleClientPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block1Data Block1Data;
typedef struct _Block2Data Block2Data;
#define _g_free0(var) (var = (g_free (var), NULL))
#define __g_slist_free__g_object_unref0_0(var) ((var == NULL) ? NULL : (var = (_g_slist_free__g_object_unref0_ (var), NULL)))
typedef struct _ParamSpecSimpleClient ParamSpecSimpleClient;

struct _SimpleClient {
	GTypeInstance parent_instance;
	volatile int ref_count;
	SimpleClientPrivate * priv;
};

struct _SimpleClientClass {
	GTypeClass parent_class;
	void (*finalize) (SimpleClient *self);
};

struct _SimpleClientPrivate {
	GtkMenu* menu;
	AppIndicator* ci;
	gint percentage;
	gboolean active;
	gboolean can_haz_label;
};

struct _Block1Data {
	int _ref_count_;
	SimpleClient * self;
	GtkMenuItem* prev_mi;
};

struct _Block2Data {
	int _ref_count_;
	SimpleClient * self;
	GtkMenuItem* submenu;
	GtkImageMenuItem* imgitem;
	GtkMenuItem* att;
	GtkMenuItem* show;
	GtkCheckMenuItem* icon;
};

struct _ParamSpecSimpleClient {
	GParamSpec parent_instance;
};


static gpointer simple_client_parent_class = NULL;

gint _vala_main (gchar** args, int args_length1);
SimpleClient* simple_client_new (gchar** args, int args_length1);
SimpleClient* simple_client_construct (GType object_type, gchar** args, int args_length1);
gpointer simple_client_ref (gpointer instance);
void simple_client_unref (gpointer instance);
GParamSpec* param_spec_simple_client (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_simple_client (GValue* value, gpointer v_object);
void value_take_simple_client (GValue* value, gpointer v_object);
gpointer value_get_simple_client (const GValue* value);
GType simple_client_get_type (void) G_GNUC_CONST;
void simple_client_run (SimpleClient* self);
#define SIMPLE_CLIENT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_SIMPLE_CLIENT, SimpleClientPrivate))
enum  {
	SIMPLE_CLIENT_DUMMY_PROPERTY
};
static void simple_client_toggle_sensitivity (SimpleClient* self, GtkWidget* widget);
static void simple_client_append_submenu (SimpleClient* self, GtkMenuItem* item);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (Block1Data* _data1_);
static void __lambda0_ (SimpleClient* self);
static void ___lambda0__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
static void __lambda1_ (Block1Data* _data1_);
static void ___lambda1__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
static void __lambda2_ (SimpleClient* self);
static void ___lambda2__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
static void __lambda3_ (SimpleClient* self);
static void ___lambda3__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
static void simple_client_label_toggle (SimpleClient* self, GtkMenuItem* item);
static Block2Data* block2_data_ref (Block2Data* _data2_);
static void block2_data_unref (Block2Data* _data2_);
static void __lambda4_ (SimpleClient* self, gint delta, guint direction);
static void ___lambda4__app_indicator_scroll_event (AppIndicator* _sender, gint delta, guint direction, gpointer self);
static gboolean __lambda5_ (SimpleClient* self);
static gboolean ___lambda5__gsource_func (gpointer self);
static void __lambda6_ (SimpleClient* self);
static void ___lambda6__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
static void _g_object_unref0_ (gpointer var);
static void _g_slist_free__g_object_unref0_ (GSList* self);
static void __lambda7_ (SimpleClient* self);
static void ___lambda7__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
static void __lambda8_ (Block2Data* _data2_);
static void ___lambda8__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
static void __lambda9_ (Block2Data* _data2_);
static void ___lambda9__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
static void __lambda10_ (Block2Data* _data2_);
static void ___lambda10__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
static void __lambda11_ (Block2Data* _data2_);
static void ___lambda11__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
static void __lambda12_ (Block2Data* _data2_);
static void ___lambda12__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
static void simple_client_finalize (SimpleClient* obj);


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	gchar** _tmp0_;
	gint _tmp0__length1;
	SimpleClient* _tmp1_;
	SimpleClient* sc;
	_tmp0_ = args;
	_tmp0__length1 = args_length1;
	_tmp1_ = simple_client_new (_tmp0_, _tmp0__length1);
	sc = _tmp1_;
	simple_client_run (sc);
	result = 0;
	_simple_client_unref0 (sc);
	return result;
}


int main (int argc, char ** argv) {
	g_type_init ();
	return _vala_main (argv, argc);
}


SimpleClient* simple_client_construct (GType object_type, gchar** args, int args_length1) {
	SimpleClient* self = NULL;
	AppIndicator* _tmp0_;
	AppIndicator* _tmp1_;
	AppIndicator* _tmp2_;
	AppIndicator* _tmp3_;
	self = (SimpleClient*) g_type_create_instance (object_type);
	gtk_init (&args_length1, &args);
	_tmp0_ = app_indicator_new ("example-simple-client", "indicator-messages", APP_INDICATOR_CATEGORY_APPLICATION_STATUS);
	_g_object_unref0 (self->priv->ci);
	self->priv->ci = _tmp0_;
	_tmp1_ = self->priv->ci;
	app_indicator_set_status (_tmp1_, APP_INDICATOR_STATUS_ACTIVE);
	_tmp2_ = self->priv->ci;
	app_indicator_set_attention_icon (_tmp2_, "indicator-messages-new");
	_tmp3_ = self->priv->ci;
	app_indicator_set_label (_tmp3_, "1%", "100%");
	self->priv->active = TRUE;
	self->priv->can_haz_label = TRUE;
	return self;
}


SimpleClient* simple_client_new (gchar** args, int args_length1) {
	return simple_client_construct (TYPE_SIMPLE_CLIENT, args, args_length1);
}


static void simple_client_toggle_sensitivity (SimpleClient* self, GtkWidget* widget) {
	GtkWidget* _tmp0_;
	GtkWidget* _tmp1_;
	gboolean _tmp2_ = FALSE;
	g_return_if_fail (self != NULL);
	g_return_if_fail (widget != NULL);
	_tmp0_ = widget;
	_tmp1_ = widget;
	_tmp2_ = gtk_widget_is_sensitive (_tmp1_);
	gtk_widget_set_sensitive (_tmp0_, !_tmp2_);
}


static Block1Data* block1_data_ref (Block1Data* _data1_) {
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}


static void block1_data_unref (Block1Data* _data1_) {
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		_simple_client_unref0 (_data1_->self);
		_g_object_unref0 (_data1_->prev_mi);
		g_slice_free (Block1Data, _data1_);
	}
}


static void __lambda0_ (SimpleClient* self) {
	g_print ("Sub1\n");
}


static void ___lambda0__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	__lambda0_ (self);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void __lambda1_ (Block1Data* _data1_) {
	SimpleClient * self;
	self = _data1_->self;
	simple_client_toggle_sensitivity (self, (GtkWidget*) _data1_->prev_mi);
}


static void ___lambda1__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	__lambda1_ (self);
}


static void __lambda2_ (SimpleClient* self) {
	g_print ("Sub3\n");
}


static void ___lambda2__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	__lambda2_ (self);
}


static void __lambda3_ (SimpleClient* self) {
	AppIndicator* _tmp0_;
	AppIndicatorStatus _tmp1_ = 0;
	_tmp0_ = self->priv->ci;
	_tmp1_ = app_indicator_get_status (_tmp0_);
	if (_tmp1_ == APP_INDICATOR_STATUS_ATTENTION) {
		AppIndicator* _tmp2_;
		_tmp2_ = self->priv->ci;
		app_indicator_set_status (_tmp2_, APP_INDICATOR_STATUS_ACTIVE);
	} else {
		AppIndicator* _tmp3_;
		_tmp3_ = self->priv->ci;
		app_indicator_set_status (_tmp3_, APP_INDICATOR_STATUS_ATTENTION);
	}
}


static void ___lambda3__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	__lambda3_ (self);
}


static void simple_client_append_submenu (SimpleClient* self, GtkMenuItem* item) {
	Block1Data* _data1_;
	GtkMenu* _tmp0_;
	GtkMenu* _tmp1_;
	GtkMenu* menu;
	GtkMenuItem* mi = NULL;
	GtkMenuItem* _tmp2_;
	GtkMenuItem* _tmp3_;
	GtkMenuItem* _tmp4_;
	GtkMenuItem* _tmp5_;
	GtkMenuItem* _tmp6_;
	GtkMenuItem* _tmp7_;
	GtkMenuItem* _tmp8_;
	GtkMenuItem* _tmp9_;
	GtkMenuItem* _tmp10_;
	GtkMenuItem* _tmp11_;
	GtkMenuItem* _tmp12_;
	GtkMenuItem* _tmp13_;
	GtkMenuItem* _tmp14_;
	GtkMenuItem* _tmp15_;
	GtkMenuItem* _tmp16_;
	GtkMenuItem* _tmp17_;
	GtkMenuItem* _tmp18_;
	GtkMenuItem* _tmp19_;
	AppIndicator* _tmp20_;
	GtkMenuItem* _tmp21_;
	GtkMenuItem* _tmp22_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (item != NULL);
	_data1_ = g_slice_new0 (Block1Data);
	_data1_->_ref_count_ = 1;
	_data1_->self = simple_client_ref (self);
	_tmp0_ = (GtkMenu*) gtk_menu_new ();
	_tmp1_ = g_object_ref_sink (_tmp0_);
	menu = _tmp1_;
	_tmp2_ = (GtkMenuItem*) gtk_menu_item_new_with_label ("Sub 1");
	_tmp3_ = g_object_ref_sink (_tmp2_);
	_g_object_unref0 (mi);
	mi = _tmp3_;
	_tmp4_ = mi;
	gtk_menu_shell_append ((GtkMenuShell*) menu, (GtkWidget*) _tmp4_);
	_tmp5_ = mi;
	g_signal_connect (_tmp5_, "activate", (GCallback) ___lambda0__gtk_menu_item_activate, self);
	_tmp6_ = mi;
	_tmp7_ = _g_object_ref0 (_tmp6_);
	_data1_->prev_mi = _tmp7_;
	_tmp8_ = (GtkMenuItem*) gtk_menu_item_new_with_label ("Sub 2");
	_tmp9_ = g_object_ref_sink (_tmp8_);
	_g_object_unref0 (mi);
	mi = _tmp9_;
	_tmp10_ = mi;
	gtk_menu_shell_append ((GtkMenuShell*) menu, (GtkWidget*) _tmp10_);
	_tmp11_ = mi;
	g_signal_connect_data (_tmp11_, "activate", (GCallback) ___lambda1__gtk_menu_item_activate, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
	_tmp12_ = (GtkMenuItem*) gtk_menu_item_new_with_label ("Sub 3");
	_tmp13_ = g_object_ref_sink (_tmp12_);
	_g_object_unref0 (mi);
	mi = _tmp13_;
	_tmp14_ = mi;
	gtk_menu_shell_append ((GtkMenuShell*) menu, (GtkWidget*) _tmp14_);
	_tmp15_ = mi;
	g_signal_connect (_tmp15_, "activate", (GCallback) ___lambda2__gtk_menu_item_activate, self);
	_tmp16_ = (GtkMenuItem*) gtk_menu_item_new_with_label ("Toggle Attention");
	_tmp17_ = g_object_ref_sink (_tmp16_);
	_g_object_unref0 (mi);
	mi = _tmp17_;
	_tmp18_ = mi;
	gtk_menu_shell_append ((GtkMenuShell*) menu, (GtkWidget*) _tmp18_);
	_tmp19_ = mi;
	g_signal_connect (_tmp19_, "activate", (GCallback) ___lambda3__gtk_menu_item_activate, self);
	_tmp20_ = self->priv->ci;
	_tmp21_ = mi;
	app_indicator_set_secondary_activate_target (_tmp20_, (GtkWidget*) _tmp21_);
	gtk_widget_show_all ((GtkWidget*) menu);
	_tmp22_ = item;
	gtk_menu_item_set_submenu (_tmp22_, (GtkWidget*) menu);
	_g_object_unref0 (mi);
	_g_object_unref0 (menu);
	block1_data_unref (_data1_);
	_data1_ = NULL;
}


static void simple_client_label_toggle (SimpleClient* self, GtkMenuItem* item) {
	gboolean _tmp0_;
	gboolean _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (item != NULL);
	_tmp0_ = self->priv->can_haz_label;
	self->priv->can_haz_label = !_tmp0_;
	_tmp1_ = self->priv->can_haz_label;
	if (_tmp1_) {
		GtkMenuItem* _tmp2_;
		_tmp2_ = item;
		gtk_menu_item_set_label (_tmp2_, "Hide label");
	} else {
		GtkMenuItem* _tmp3_;
		_tmp3_ = item;
		gtk_menu_item_set_label (_tmp3_, "Show label");
	}
}


static Block2Data* block2_data_ref (Block2Data* _data2_) {
	g_atomic_int_inc (&_data2_->_ref_count_);
	return _data2_;
}


static void block2_data_unref (Block2Data* _data2_) {
	if (g_atomic_int_dec_and_test (&_data2_->_ref_count_)) {
		_simple_client_unref0 (_data2_->self);
		_g_object_unref0 (_data2_->icon);
		_g_object_unref0 (_data2_->show);
		_g_object_unref0 (_data2_->att);
		_g_object_unref0 (_data2_->imgitem);
		_g_object_unref0 (_data2_->submenu);
		g_slice_free (Block2Data, _data2_);
	}
}


static void __lambda4_ (SimpleClient* self, gint delta, guint direction) {
	gint _tmp0_;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_;
	guint _tmp3_;
	gchar* _tmp4_ = NULL;
	gchar* _tmp5_;
	gchar* _tmp6_ = NULL;
	gchar* _tmp7_;
	_tmp0_ = delta;
	_tmp1_ = g_strdup_printf ("%i", _tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = direction;
	_tmp4_ = g_strdup_printf ("%u", _tmp3_);
	_tmp5_ = _tmp4_;
	_tmp6_ = g_strconcat ("Got scroll event! delta: ", _tmp2_, ", direction: ", _tmp5_, "\n", NULL);
	_tmp7_ = _tmp6_;
	g_print ("%s", _tmp7_);
	_g_free0 (_tmp7_);
	_g_free0 (_tmp5_);
	_g_free0 (_tmp2_);
}


static void ___lambda4__app_indicator_scroll_event (AppIndicator* _sender, gint delta, guint direction, gpointer self) {
	__lambda4_ (self, delta, direction);
}


static gboolean __lambda5_ (SimpleClient* self) {
	gboolean result = FALSE;
	gint _tmp0_;
	gboolean _tmp1_;
	_tmp0_ = self->priv->percentage;
	self->priv->percentage = (_tmp0_ + 1) % 100;
	_tmp1_ = self->priv->can_haz_label;
	if (_tmp1_) {
		AppIndicator* _tmp2_;
		gint _tmp3_;
		gchar* _tmp4_ = NULL;
		gchar* _tmp5_;
		gchar* _tmp6_ = NULL;
		gchar* _tmp7_;
		_tmp2_ = self->priv->ci;
		_tmp3_ = self->priv->percentage;
		_tmp4_ = g_strdup_printf ("%i", _tmp3_ + 1);
		_tmp5_ = _tmp4_;
		_tmp6_ = g_strconcat (_tmp5_, "%", NULL);
		_tmp7_ = _tmp6_;
		app_indicator_set_label (_tmp2_, _tmp7_, "");
		_g_free0 (_tmp7_);
		_g_free0 (_tmp5_);
	} else {
		AppIndicator* _tmp8_;
		_tmp8_ = self->priv->ci;
		app_indicator_set_label (_tmp8_, "", "");
	}
	result = TRUE;
	return result;
}


static gboolean ___lambda5__gsource_func (gpointer self) {
	gboolean result;
	result = __lambda5_ (self);
	return result;
}


static void __lambda6_ (SimpleClient* self) {
	g_print ("1\n");
}


static void ___lambda6__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	__lambda6_ (self);
}


static void _g_object_unref0_ (gpointer var) {
	(var == NULL) ? NULL : (var = (g_object_unref (var), NULL));
}


static void _g_slist_free__g_object_unref0_ (GSList* self) {
	g_slist_foreach (self, (GFunc) _g_object_unref0_, NULL);
	g_slist_free (self);
}


static void __lambda7_ (SimpleClient* self) {
	g_print ("2\n");
}


static void ___lambda7__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	__lambda7_ (self);
}


static void __lambda8_ (Block2Data* _data2_) {
	SimpleClient * self;
	self = _data2_->self;
	simple_client_toggle_sensitivity (self, (GtkWidget*) _data2_->submenu);
}


static void ___lambda8__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	__lambda8_ (self);
}


static void __lambda9_ (Block2Data* _data2_) {
	SimpleClient * self;
	GtkWidget* _tmp0_ = NULL;
	GtkImage* _tmp1_;
	GtkImage* img;
	self = _data2_->self;
	_tmp0_ = gtk_image_menu_item_get_image (_data2_->imgitem);
	_tmp1_ = _g_object_ref0 (GTK_IMAGE (_tmp0_));
	img = _tmp1_;
	gtk_image_set_from_stock (img, GTK_STOCK_OPEN, GTK_ICON_SIZE_MENU);
	_g_object_unref0 (img);
}


static void ___lambda9__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	__lambda9_ (self);
}


static void __lambda10_ (Block2Data* _data2_) {
	SimpleClient * self;
	gboolean _tmp0_;
	self = _data2_->self;
	_tmp0_ = self->priv->active;
	if (_tmp0_) {
		AppIndicator* _tmp1_;
		_tmp1_ = self->priv->ci;
		app_indicator_set_status (_tmp1_, APP_INDICATOR_STATUS_ATTENTION);
		gtk_menu_item_set_label (_data2_->att, "I'm okay now");
		self->priv->active = FALSE;
	} else {
		AppIndicator* _tmp2_;
		_tmp2_ = self->priv->ci;
		app_indicator_set_status (_tmp2_, APP_INDICATOR_STATUS_ACTIVE);
		gtk_menu_item_set_label (_data2_->att, "Get Attention");
		self->priv->active = FALSE;
	}
}


static void ___lambda10__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	__lambda10_ (self);
}


static void __lambda11_ (Block2Data* _data2_) {
	SimpleClient * self;
	self = _data2_->self;
	simple_client_label_toggle (self, _data2_->show);
}


static void ___lambda11__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	__lambda11_ (self);
}


static void __lambda12_ (Block2Data* _data2_) {
	SimpleClient * self;
	gboolean _tmp0_ = FALSE;
	self = _data2_->self;
	_tmp0_ = gtk_check_menu_item_get_active (_data2_->icon);
	if (_tmp0_) {
		AppIndicator* _tmp1_;
		_tmp1_ = self->priv->ci;
		app_indicator_set_icon (_tmp1_, "simple-client-test-icon.png");
	} else {
		AppIndicator* _tmp2_;
		_tmp2_ = self->priv->ci;
		app_indicator_set_icon (_tmp2_, "indicator-messages");
	}
}


static void ___lambda12__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	__lambda12_ (self);
}


void simple_client_run (SimpleClient* self) {
	Block2Data* _data2_;
	AppIndicator* _tmp0_;
	GtkMenu* _tmp1_;
	GtkMenu* _tmp2_;
	GtkCheckMenuItem* _tmp3_;
	GtkCheckMenuItem* _tmp4_;
	GtkCheckMenuItem* chk;
	GtkMenu* _tmp5_;
	GSList* _tmp6_;
	GtkRadioMenuItem* _tmp7_;
	GtkRadioMenuItem* _tmp8_;
	GtkRadioMenuItem* _tmp9_;
	GtkRadioMenuItem* radio;
	GtkMenu* _tmp10_;
	GtkMenuItem* _tmp11_;
	GtkMenuItem* _tmp12_;
	GtkMenu* _tmp13_;
	GtkMenuItem* _tmp14_;
	GtkMenuItem* _tmp15_;
	GtkMenuItem* toggle_item;
	GtkMenu* _tmp16_;
	GtkImageMenuItem* _tmp17_;
	GtkImageMenuItem* _tmp18_;
	GtkMenu* _tmp19_;
	GtkMenuItem* _tmp20_;
	GtkMenuItem* _tmp21_;
	GtkMenu* _tmp22_;
	GtkMenuItem* _tmp23_;
	GtkMenuItem* _tmp24_;
	GtkMenu* _tmp25_;
	GtkCheckMenuItem* _tmp26_;
	GtkCheckMenuItem* _tmp27_;
	GtkMenu* _tmp28_;
	AppIndicator* _tmp29_;
	GtkMenu* _tmp30_;
	g_return_if_fail (self != NULL);
	_data2_ = g_slice_new0 (Block2Data);
	_data2_->_ref_count_ = 1;
	_data2_->self = simple_client_ref (self);
	_tmp0_ = self->priv->ci;
	g_signal_connect (_tmp0_, "scroll-event", (GCallback) ___lambda4__app_indicator_scroll_event, self);
	g_timeout_add_seconds_full (G_PRIORITY_DEFAULT, (guint) 1, ___lambda5__gsource_func, simple_client_ref (self), simple_client_unref);
	_tmp1_ = (GtkMenu*) gtk_menu_new ();
	_tmp2_ = g_object_ref_sink (_tmp1_);
	_g_object_unref0 (self->priv->menu);
	self->priv->menu = _tmp2_;
	_tmp3_ = (GtkCheckMenuItem*) gtk_check_menu_item_new_with_label ("1");
	_tmp4_ = g_object_ref_sink (_tmp3_);
	chk = _tmp4_;
	g_signal_connect ((GtkMenuItem*) chk, "activate", (GCallback) ___lambda6__gtk_menu_item_activate, self);
	_tmp5_ = self->priv->menu;
	gtk_menu_shell_append ((GtkMenuShell*) _tmp5_, (GtkWidget*) ((GtkMenuItem*) chk));
	gtk_widget_show ((GtkWidget*) chk);
	_tmp6_ = NULL;
	_tmp7_ = (GtkRadioMenuItem*) gtk_radio_menu_item_new_with_label (_tmp6_, "2");
	_tmp8_ = g_object_ref_sink (_tmp7_);
	_tmp9_ = _tmp8_;
	__g_slist_free__g_object_unref0_0 (_tmp6_);
	radio = _tmp9_;
	g_signal_connect ((GtkMenuItem*) radio, "activate", (GCallback) ___lambda7__gtk_menu_item_activate, self);
	_tmp10_ = self->priv->menu;
	gtk_menu_shell_append ((GtkMenuShell*) _tmp10_, (GtkWidget*) ((GtkMenuItem*) radio));
	gtk_widget_show ((GtkWidget*) radio);
	_tmp11_ = (GtkMenuItem*) gtk_menu_item_new_with_label ("3");
	_tmp12_ = g_object_ref_sink (_tmp11_);
	_data2_->submenu = _tmp12_;
	_tmp13_ = self->priv->menu;
	gtk_menu_shell_append ((GtkMenuShell*) _tmp13_, (GtkWidget*) _data2_->submenu);
	simple_client_append_submenu (self, _data2_->submenu);
	gtk_widget_show ((GtkWidget*) _data2_->submenu);
	_tmp14_ = (GtkMenuItem*) gtk_menu_item_new_with_label ("Toggle 3");
	_tmp15_ = g_object_ref_sink (_tmp14_);
	toggle_item = _tmp15_;
	g_signal_connect_data (toggle_item, "activate", (GCallback) ___lambda8__gtk_menu_item_activate, block2_data_ref (_data2_), (GClosureNotify) block2_data_unref, 0);
	_tmp16_ = self->priv->menu;
	gtk_menu_shell_append ((GtkMenuShell*) _tmp16_, (GtkWidget*) toggle_item);
	gtk_widget_show ((GtkWidget*) toggle_item);
	_tmp17_ = (GtkImageMenuItem*) gtk_image_menu_item_new_from_stock (GTK_STOCK_NEW, NULL);
	_tmp18_ = g_object_ref_sink (_tmp17_);
	_data2_->imgitem = _tmp18_;
	g_signal_connect_data ((GtkMenuItem*) _data2_->imgitem, "activate", (GCallback) ___lambda9__gtk_menu_item_activate, block2_data_ref (_data2_), (GClosureNotify) block2_data_unref, 0);
	_tmp19_ = self->priv->menu;
	gtk_menu_shell_append ((GtkMenuShell*) _tmp19_, (GtkWidget*) ((GtkMenuItem*) _data2_->imgitem));
	gtk_widget_show ((GtkWidget*) _data2_->imgitem);
	_tmp20_ = (GtkMenuItem*) gtk_menu_item_new_with_label ("Get Attention");
	_tmp21_ = g_object_ref_sink (_tmp20_);
	_data2_->att = _tmp21_;
	g_signal_connect_data (_data2_->att, "activate", (GCallback) ___lambda10__gtk_menu_item_activate, block2_data_ref (_data2_), (GClosureNotify) block2_data_unref, 0);
	_tmp22_ = self->priv->menu;
	gtk_menu_shell_append ((GtkMenuShell*) _tmp22_, (GtkWidget*) _data2_->att);
	gtk_widget_show ((GtkWidget*) _data2_->att);
	_tmp23_ = (GtkMenuItem*) gtk_menu_item_new_with_label ("Show Label");
	_tmp24_ = g_object_ref_sink (_tmp23_);
	_data2_->show = _tmp24_;
	simple_client_label_toggle (self, _data2_->show);
	g_signal_connect_data (_data2_->show, "activate", (GCallback) ___lambda11__gtk_menu_item_activate, block2_data_ref (_data2_), (GClosureNotify) block2_data_unref, 0);
	_tmp25_ = self->priv->menu;
	gtk_menu_shell_append ((GtkMenuShell*) _tmp25_, (GtkWidget*) _data2_->show);
	gtk_widget_show ((GtkWidget*) _data2_->show);
	_tmp26_ = (GtkCheckMenuItem*) gtk_check_menu_item_new_with_label ("Set Local Icon");
	_tmp27_ = g_object_ref_sink (_tmp26_);
	_data2_->icon = _tmp27_;
	g_signal_connect_data ((GtkMenuItem*) _data2_->icon, "activate", (GCallback) ___lambda12__gtk_menu_item_activate, block2_data_ref (_data2_), (GClosureNotify) block2_data_unref, 0);
	_tmp28_ = self->priv->menu;
	gtk_menu_shell_append ((GtkMenuShell*) _tmp28_, (GtkWidget*) ((GtkMenuItem*) _data2_->icon));
	gtk_widget_show ((GtkWidget*) _data2_->icon);
	_tmp29_ = self->priv->ci;
	_tmp30_ = self->priv->menu;
	app_indicator_set_menu (_tmp29_, _tmp30_);
	gtk_main ();
	_g_object_unref0 (toggle_item);
	_g_object_unref0 (radio);
	_g_object_unref0 (chk);
	block2_data_unref (_data2_);
	_data2_ = NULL;
}


static void value_simple_client_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void value_simple_client_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		simple_client_unref (value->data[0].v_pointer);
	}
}


static void value_simple_client_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = simple_client_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer value_simple_client_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* value_simple_client_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		SimpleClient* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = simple_client_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* value_simple_client_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	SimpleClient** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = simple_client_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* param_spec_simple_client (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	ParamSpecSimpleClient* spec;
	g_return_val_if_fail (g_type_is_a (object_type, TYPE_SIMPLE_CLIENT), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer value_get_simple_client (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_SIMPLE_CLIENT), NULL);
	return value->data[0].v_pointer;
}


void value_set_simple_client (GValue* value, gpointer v_object) {
	SimpleClient* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_SIMPLE_CLIENT));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_SIMPLE_CLIENT));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		simple_client_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		simple_client_unref (old);
	}
}


void value_take_simple_client (GValue* value, gpointer v_object) {
	SimpleClient* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_SIMPLE_CLIENT));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_SIMPLE_CLIENT));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		simple_client_unref (old);
	}
}


static void simple_client_class_init (SimpleClientClass * klass) {
	simple_client_parent_class = g_type_class_peek_parent (klass);
	SIMPLE_CLIENT_CLASS (klass)->finalize = simple_client_finalize;
	g_type_class_add_private (klass, sizeof (SimpleClientPrivate));
}


static void simple_client_instance_init (SimpleClient * self) {
	self->priv = SIMPLE_CLIENT_GET_PRIVATE (self);
	self->ref_count = 1;
}


static void simple_client_finalize (SimpleClient* obj) {
	SimpleClient * self;
	self = SIMPLE_CLIENT (obj);
	_g_object_unref0 (self->priv->menu);
	_g_object_unref0 (self->priv->ci);
}


GType simple_client_get_type (void) {
	static volatile gsize simple_client_type_id__volatile = 0;
	if (g_once_init_enter (&simple_client_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { value_simple_client_init, value_simple_client_free_value, value_simple_client_copy_value, value_simple_client_peek_pointer, "p", value_simple_client_collect_value, "p", value_simple_client_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (SimpleClientClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) simple_client_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SimpleClient), 0, (GInstanceInitFunc) simple_client_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType simple_client_type_id;
		simple_client_type_id = g_type_register_fundamental (g_type_fundamental_next (), "SimpleClient", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&simple_client_type_id__volatile, simple_client_type_id);
	}
	return simple_client_type_id__volatile;
}


gpointer simple_client_ref (gpointer instance) {
	SimpleClient* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void simple_client_unref (gpointer instance) {
	SimpleClient* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		SIMPLE_CLIENT_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}



