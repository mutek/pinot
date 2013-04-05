// generated 2007/11/29 21:04:06 SGT by fabrice@amra.dyndns.org.(none)
// using glademm V2.12.1
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/fabrice/Projects/MetaSE/pinot/UI/GTK2/metase-gtk2.glade
// for gtk 2.12.1 and gtkmm 2.12.0
//
// Please modify the corresponding derived classes in ./src/importDialog.cc


#if defined __GNUC__ && __GNUC__ < 3
#error This program will crash if compiled with g++ 2.x
// see the dynamic_cast bug in the gtkmm FAQ
#endif //
#include "config.h"
/*
 * Standard gettext macros.
 */
#ifdef ENABLE_NLS
#  include <libintl.h>
#  undef _
#  define _(String) dgettext (GETTEXT_PACKAGE, String)
#  ifdef gettext_noop
#    define N_(String) gettext_noop (String)
#  else
#    define N_(String) (String)
#  endif
#endif
#include <gtkmmconfig.h>
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
#include <sigc++/sigc++.h>
#define GMM_GTKMM_22_24(a,b) b
#else //gtkmm 2.2
#define GMM_GTKMM_22_24(a,b) a
#endif //
#include "importDialog_glade.hh"
#include <gdk/gdkkeysyms.h>
#include <gtkmm/accelgroup.h>
#include <gtkmm/button.h>
#include <gtkmm/buttonbox.h>
#include <gtkmm/label.h>
#include <gtkmm/box.h>
#ifndef ENABLE_NLS
#  define textdomain(String) (String)
#  define gettext(String) (String)
#  define dgettext(Domain,Message) (Message)
#  define dcgettext(Domain,Message,Type) (Message)
#  define bindtextdomain(Domain,Directory) (Domain)
#  define _(String) (String)
#  define N_(String) (String)
#endif


importDialog_glade::importDialog_glade(
)
{  
   
   Gtk::Dialog *importDialog = this;
   gmm_data = new GlademmData(get_accel_group());
   
   Gtk::Button *cancelButton = Gtk::manage(new class Gtk::Button(Gtk::StockID("gtk-cancel")));
   importButton = Gtk::manage(new class Gtk::Button(Gtk::StockID("gtk-ok")));
   titleEntry = Gtk::manage(new class Gtk::Entry());
   
   Gtk::Label *locationLabel = Gtk::manage(new class Gtk::Label(_("Location:")));
   titleLabel = Gtk::manage(new class Gtk::Label(_("Title:")));
   labelNameCombobox = Gtk::manage(new class Gtk::ComboBoxText());
   
   Gtk::Label *labelNameLabel = Gtk::manage(new class Gtk::Label(_("Apply label:")));
   locationEntry = Gtk::manage(new class Gtk::Entry());
   docTable = Gtk::manage(new class Gtk::Table(2, 2, false));
#if GTK_VERSION_LT(3, 0)
   cancelButton->set_flags(Gtk::CAN_FOCUS);
   cancelButton->set_flags(Gtk::CAN_DEFAULT);
#else
   cancelButton->set_can_focus();
   cancelButton->set_can_default();
#endif
   cancelButton->set_relief(Gtk::RELIEF_NORMAL);
#if GTK_VERSION_LT(3, 0)
   importButton->set_flags(Gtk::CAN_FOCUS);
   importButton->set_flags(Gtk::CAN_DEFAULT);
#else
   importButton->set_can_focus();
   importButton->set_can_default();
#endif
   importButton->set_relief(Gtk::RELIEF_NORMAL);
   importDialog->get_action_area()->property_layout_style().set_value(Gtk::BUTTONBOX_END);
#if GTK_VERSION_LT(3, 0)
   titleEntry->set_flags(Gtk::CAN_FOCUS);
#else
   titleEntry->set_can_focus();
#endif
   titleEntry->set_visibility(true);
   titleEntry->set_editable(true);
   titleEntry->set_max_length(0);
   titleEntry->set_has_frame(true);
   titleEntry->set_activates_default(false);
   locationLabel->set_alignment(0,0.5);
   locationLabel->set_padding(4,4);
   locationLabel->set_justify(Gtk::JUSTIFY_LEFT);
   locationLabel->set_line_wrap(false);
   locationLabel->set_use_markup(false);
   locationLabel->set_selectable(false);
   locationLabel->set_ellipsize(Pango::ELLIPSIZE_NONE);
   locationLabel->set_width_chars(-1);
   locationLabel->set_angle(0);
   locationLabel->set_single_line_mode(false);
   titleLabel->set_alignment(0,0.5);
   titleLabel->set_padding(4,4);
   titleLabel->set_justify(Gtk::JUSTIFY_LEFT);
   titleLabel->set_line_wrap(false);
   titleLabel->set_use_markup(false);
   titleLabel->set_selectable(false);
   titleLabel->set_ellipsize(Pango::ELLIPSIZE_NONE);
   titleLabel->set_width_chars(-1);
   titleLabel->set_angle(0);
   titleLabel->set_single_line_mode(false);
   labelNameLabel->set_alignment(0,0.5);
   labelNameLabel->set_padding(4,4);
   labelNameLabel->set_justify(Gtk::JUSTIFY_LEFT);
   labelNameLabel->set_line_wrap(false);
   labelNameLabel->set_use_markup(false);
   labelNameLabel->set_selectable(false);
   labelNameLabel->set_ellipsize(Pango::ELLIPSIZE_NONE);
   labelNameLabel->set_width_chars(-1);
   labelNameLabel->set_angle(0);
   labelNameLabel->set_single_line_mode(false);
#if GTK_VERSION_LT(3, 0)
   locationEntry->set_flags(Gtk::CAN_FOCUS);
#else
   locationEntry->set_can_focus();
#endif
   locationEntry->set_visibility(true);
   locationEntry->set_editable(true);
   locationEntry->set_max_length(0);
   locationEntry->set_has_frame(true);
   locationEntry->set_activates_default(false);
   docTable->set_row_spacings(0);
   docTable->set_col_spacings(0);
   docTable->attach(*titleEntry, 1, 2, 0, 1, Gtk::EXPAND|Gtk::FILL, Gtk::FILL, 4, 4);
   docTable->attach(*locationLabel, 0, 1, 1, 2, Gtk::FILL, Gtk::FILL, 0, 0);
   docTable->attach(*titleLabel, 0, 1, 0, 1, Gtk::FILL, Gtk::FILL, 0, 0);
   docTable->attach(*labelNameCombobox, 1, 2, 2, 3, Gtk::EXPAND|Gtk::FILL, Gtk::FILL, 4, 4);
   docTable->attach(*labelNameLabel, 0, 1, 2, 3, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   docTable->attach(*locationEntry, 1, 2, 1, 2, Gtk::EXPAND|Gtk::FILL, Gtk::FILL, 4, 4);
   importDialog->get_vbox()->set_homogeneous(false);
   importDialog->get_vbox()->set_spacing(0);
   importDialog->get_vbox()->pack_start(*docTable);
   importDialog->set_title(_("Import URL"));
   importDialog->set_modal(false);
   importDialog->property_window_position().set_value(Gtk::WIN_POS_NONE);
   importDialog->set_resizable(true);
   importDialog->property_destroy_with_parent().set_value(false);
#if GTK_VERSION_LT(3, 0)
   importDialog->set_has_separator(true);
#endif
   importDialog->add_action_widget(*cancelButton, -6);
   importDialog->add_action_widget(*importButton, -5);
   cancelButton->show();
   importButton->show();
   titleEntry->show();
   locationLabel->show();
   titleLabel->show();
   labelNameCombobox->show();
   labelNameLabel->show();
   locationEntry->show();
   docTable->show();
   importButton->signal_clicked().connect(sigc::mem_fun(*this, &importDialog_glade::on_importButton_clicked), false);
   locationEntry->signal_changed().connect(sigc::mem_fun(*this, &importDialog_glade::on_locationEntry_changed), false);
}

importDialog_glade::~importDialog_glade()
{  delete gmm_data;
}
