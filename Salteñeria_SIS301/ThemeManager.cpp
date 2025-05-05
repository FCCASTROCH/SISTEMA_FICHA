#include "ThemeManager.h"

ThemeManager::ThemeManager() {
    // Constructor vacío
}

void ThemeManager::ApplyTheme(Form^ form, String^ themeName, Panel^ botonesPanel, Panel^ iconosPanel, Panel^ contenidoPanel, Panel^ subboton, Panel^ bton1, Panel^ boton1) {
    if (themeName->Equals("analogico", StringComparison::OrdinalIgnoreCase)) {
		ApplyAnalogous(form, botonesPanel, iconosPanel, contenidoPanel, subboton, bton1, boton1);
    }
    else if (themeName->Equals("triadico", StringComparison::OrdinalIgnoreCase)) {
		ApplyTriadic(form, botonesPanel, iconosPanel, contenidoPanel, subboton, bton1, boton1);
    }
    else if (themeName->Equals("monocromatico", StringComparison::OrdinalIgnoreCase)) {
		ApplyMonochromatic(form, botonesPanel, iconosPanel, contenidoPanel, subboton, bton1, boton1);
    }
    else if (themeName->Equals("nuevo", StringComparison::OrdinalIgnoreCase)) {

        ApplyNuevo(form, botonesPanel, iconosPanel, contenidoPanel, subboton, bton1, boton1);
    
    }else {
        MessageBox::Show("Tema no reconocido. Por favor, ingrese un tema válido.",
            "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

void ThemeManager::ApplyThem(Form^ form, String^ themeName) {
    if (themeName->Equals("analogico", StringComparison::OrdinalIgnoreCase)) {
        ApplyAnalogou(form);
    }
    else if (themeName->Equals("triadico", StringComparison::OrdinalIgnoreCase)) {
        ApplyTriadi(form);
    }
    else if (themeName->Equals("monocromatico", StringComparison::OrdinalIgnoreCase)) {
        ApplyMonochromati(form);
    }
    else if (themeName->Equals("nuevo", StringComparison::OrdinalIgnoreCase)) {
        ApplyNuevo(form);
    
    }else {
        MessageBox::Show("Tema no reconocido. Por favor, ingrese un tema válido.",
            "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
void ThemeManager::ApplyAnalogou(Form^ form) {
    array<Color>^ colors = gcnew array<Color> {
        Color::FromArgb(0, 191, 165), // Fondo del panel principal
            Color::FromArgb(0, 150, 136), // Botones principales
            Color::FromArgb(37, 115, 125), // Subbotones
            Color::FromArgb(254, 254, 254),   // Etiquetas
            Color::FromArgb(255, 255, 255)  // DataGridView
         //   Color::FromArgb(0, 191, 165) };     // Verde agua moderna
    //array<Color>^ colorsIconos = gcnew array<Color>{ Color::FromArgb(0, 150, 136) };       // Verde más profundo
  //  array<Color>^ colorsContenido = gcnew array<Color>{ Color::FromArgb(255, 255, 255) }; // Blanco puro

            //Tema Acua
//private static readonly Color PanelPadreA = Color.FromArgb(17, 47, 51);
//private static readonly Color PanelBotonesA = Color.FromArgb(33, 92, 99);
//private static readonly Color BarraTituloA = Color.FromArgb(37, 115, 125);
//private static readonly Color TextBusquedaA = Color.FromArgb(58,162,176);
//private static readonly Color FuenteIconosA = Color.White;
    };
    ApplyColorsToControl(form, colors);
}

void ThemeManager::ApplyTriadi(Form^ form) {
    array<Color>^ colors = gcnew array<Color> {
            Color::FromArgb(248, 249, 250), // Fondo del panel principal
            Color::FromArgb(40, 167, 69), // Botones principales
            Color::FromArgb(16, 240, 0), // Subbotones
            Color::FromArgb(0, 0, 0),   // Etiquetas
            Color::FromArgb(255, 255, 255)  // DataGridView
        //    array<Color>^ colorsBotones = gcnew array<Color>{ Color::FromArgb(0, 123, 255) };    // Azul hospital
        //array<Color>^ colorsIconos = gcnew array<Color>{ Color::FromArgb(40, 167, 69) };      // Verde esperanza
        //array<Color>^ colorsContenido = gcnew array<Color>{ Color::FromArgb(248, 249, 250) }; // Gris muy claro

           
    };
    ApplyColorsToControl(form, colors);
}

void ThemeManager::ApplyMonochromati(Form^ form) {
    array<Color>^ colors = gcnew array<Color> {
            Color::FromArgb(232,245,233), // Fondo del panel principal
            Color::FromArgb(72, 201, 176), // Botones principales
            Color::FromArgb(0, 0, 0), // Subbotones
            Color::FromArgb(50, 50, 50),    // Etiquetas
            Color::FromArgb(254, 254, 254), // DataGridView
            //    array<Color>^ colorsBotones = gcnew array<Color>{ Color::FromArgb(72, 201, 176) };    // Verde agua
            //array<Color>^ colorsIconos = gcnew array<Color>{ Color::FromArgb(93, 173, 226) };      // Azul cielo
            //array<Color>^ colorsContenido = gcnew array<Color>{ Color::FromArgb(232, 245, 233) }; // Verde pálido

    };
    ApplyColorsToControl(form, colors);
}
void ThemeManager::ApplyNuevo(Form^ form)
{
    array<Color>^ colors = gcnew array<Color> {
        Color::FromArgb(232, 245, 233), // Fondo del panel principal
            Color::FromArgb(72, 201, 176), // Botones principales
            Color::FromArgb(0, 0, 0), // Subbotones
            Color::FromArgb(50, 50, 50),    // Etiquetas
            Color::FromArgb(254, 254, 254), // DataGridView
            //    array<Color>^ colorsBotones = gcnew array<Color>{ Color::FromArgb(72, 201, 176) };    // Verde agua
            //array<Color>^ colorsIconos = gcnew array<Color>{ Color::FromArgb(93, 173, 226) };      // Azul cielo
            //array<Color>^ colorsContenido = gcnew array<Color>{ Color::FromArgb(232, 245, 233) }; // Verde pálido

    };
    ApplyColorsToControl(form, colors);
}
void ThemeManager::ApplyColorsToControl(Form^ form, array<Color>^ colors) {
    int index = 0;

    // Cambia el color de fondo del formulario
    form->BackColor = colors[0];
	if (Control::typeid == Label::typeid) {
		form->BackColor = colors[3];
	}
	
    // Itera sobre todos los controles
    for each (Control ^ control in form->Controls) {
        ApplyColorToContro(control, colors, index);
    }
	
}

void ThemeManager::ApplyColorToContro(Control^ control, array<Color>^ colors, int index) {
    if (control->GetType() == Panel::typeid) {
        // Panel principal
        control->BackColor = colors[0];
    }
    else if (control->GetType() == Button::typeid) {
        Button^ button = dynamic_cast<Button^>(control);
        if (control->Parent->GetType() == Panel::typeid) {
            // Subbotones (dentro de un panel)
            button->BackColor = colors[2];
        }
        else {
            // Botones principales
            button->BackColor = colors[1];
        }
        button->ForeColor = Color::White; // Texto en blanco para mejor contraste
        button->FlatStyle = FlatStyle::Flat;
        button->FlatAppearance->BorderSize = 0;
    }
    else if (control->GetType() == Label::typeid) {
        // Etiquetas
        control->ForeColor = colors[3];
		
    }
    else if (control->GetType() == DataGridView::typeid) {
        // DataGridView
        DataGridView^ dgv = dynamic_cast<DataGridView^>(control);
        dgv->BackgroundColor = colors[4];
        dgv->DefaultCellStyle->BackColor = colors[4];
        dgv->DefaultCellStyle->ForeColor = Color::Black;
    }

    // Aplicar recursivamente si el control contiene hijos
    for each (Control ^ child in control->Controls) {
        ApplyColorToContro(child, colors, index);
    }
}
//-------------------------
void ThemeManager::ApplyAnalogous(Form^ form, Panel^ botonesPanel, Panel^ iconosPanel, Panel^ contenidoPanel,Panel^subboton, Panel^ bton1, Panel^ boton1 ) {
    //array<Color>^ colorsBotones = gcnew array<Color>{ Color::FromArgb(17, 47, 51)};
    //array<Color>^ colorsIconos = gcnew array<Color>{ Color::FromArgb(33, 92, 99)};
    array<Color>^ colorsContenido = gcnew array<Color>{ Color::FromArgb(240, 255, 255)};
	array<Color>^ colorsSubboton = gcnew array<Color>{ Color::FromArgb(224, 242, 241) };

    array<Color>^ colorsBotones = gcnew array<Color>{
        Color::FromArgb(0, 0, 167), // color para el panel
            Color::FromArgb(128, 203, 196) // color para los botones
    };
    array<Color>^ colorsIconos = gcnew array<Color>{ Color::FromArgb(0, 188, 212) };       // Verde más profundo
    //array<Color>^ colorsContenido = gcnew array<Color>{ Color::FromArgb(254, 254, 254) }; // Blanco puro
   /* Principal: (240, 255, 255) — Azul hielo
Superior: (0, 188, 212) — Cian vivo
Izquierda: (0, 151, 167) — Azul petróleo
Botones: (128, 203, 196) — Verde agua grisáceo
Subbotones: (224, 242, 241) — Aqua clarito*/
    //Tema Acua
    ApplyColorsToControls(botonesPanel, colorsBotones);
    ApplyColorsToControls(iconosPanel, colorsIconos);
    ApplyColorsToControls(contenidoPanel, colorsContenido);

	ApplyColorsToControls(subboton, colorsSubboton);
	ApplyColorsToControls(bton1, colorsSubboton);
	ApplyColorsToControls(boton1, colorsSubboton);
}

void ThemeManager::ApplyTriadic(Form^ form, Panel^ botonesPanel, Panel^ iconosPanel, Panel^ contenidoPanel, Panel^ subboton, Panel^ bton1, Panel^ boton1) {
   /* array<Color>^ colorsBotones = gcnew array<Color>{ Color::FromArgb(16, 240, 0) };
    array<Color>^ colorsIconos = gcnew array<Color>{ Color::FromArgb(31, 0, 240) };
    array<Color>^ colorsContenido = gcnew array<Color>{ Color::FromArgb(240, 98, 0) };*/
    array<Color>^ colorsBotones = gcnew array<Color>{
        Color::FromArgb(0, 105, 92), // color para el panel
            Color::FromArgb(120, 144, 156) // color para los botones
    };
    array<Color>^ colorsIconos = gcnew array<Color>{ Color::FromArgb(2, 136, 209) };      // Verde esperanza
    array<Color>^ colorsContenido = gcnew array<Color>{ Color::FromArgb(248, 250, 252) }; // Gris muy claro

    array<Color>^ colorsSubboton = gcnew array<Color>{ Color::FromArgb(220, 237, 200) };

    ApplyColorsToControls(botonesPanel, colorsBotones);
    ApplyColorsToControls(iconosPanel, colorsIconos);
    ApplyColorsToControls(contenidoPanel, colorsContenido);

	ApplyColorsToControls(subboton, colorsSubboton);
	ApplyColorsToControls(bton1, colorsSubboton);
	ApplyColorsToControls(boton1, colorsSubboton);
  /*  Principal: (248, 250, 252) — Gris azul muy pálido
Superior: (2, 136, 209) — Azul vibrante
Izquierda: (0, 105, 92) — Verde muy oscuro
Botones: (120, 144, 156) — Azul grisáceo
Subbotones: (220, 237, 200) — Verde pastel suave*/
}

void ThemeManager::ApplyMonochromatic(Form^ form, Panel^ botonesPanel, Panel^ iconosPanel, Panel^ contenidoPanel, Panel^ subboton, Panel^ bton1, Panel^ boton1) {
  /*  array<Color>^ colorsBotones = gcnew array<Color>{ Color::FromArgb(200, 200, 200), Color::FromArgb(180, 180, 180) };
    array<Color>^ colorsIconos = gcnew array<Color>{ Color::FromArgb(220, 220, 220), Color::FromArgb(190, 190, 190) };
    array<Color>^ colorsContenido = gcnew array<Color>{ Color::FromArgb(240, 240, 240), Color::FromArgb(210, 210, 210) };*/
    array<Color>^ colorsBotones = gcnew array<Color>{
        Color::FromArgb(0, 131, 143), // color para el panel
            Color::FromArgb(77, 182, 172) // color para los botones
    };    // Verde agua
    array<Color>^ colorsIconos = gcnew array<Color>{ Color::FromArgb(0, 184, 212) };      // Azul cielo
    array<Color>^ colorsContenido = gcnew array<Color>{ Color::FromArgb(245, 245, 245) }; // Verde pálido

    array<Color>^ colorsSubboton = gcnew array<Color>{ Color::FromArgb(224, 242, 241) };
   // array<Color>^ colorpan = gcnew array<Color>{ Color::FromArgb(83, 216, 224) };
    ApplyColorsToControls(botonesPanel, colorsBotones);
    ApplyColorsToControls(iconosPanel, colorsIconos);
    ApplyColorsToControls(contenidoPanel, colorsContenido);
    //subbotones
	ApplyColorsToControls(subboton, colorsSubboton);
	ApplyColorsToControls(bton1, colorsSubboton);
	ApplyColorsToControls(boton1, colorsSubboton);
    /*Principal: (245, 245, 245) — Gris claro neutro

Superior: (0, 184, 212) — Cian tecnológico

Izquierda: (0, 131, 143) — Verde petróleo fuerte

Botones: (77, 182, 172) — Verde gris vibrante

Subbotones: (224, 242, 241) — Verde agua muy claro*/
}

void ThemeManager::ApplyNuevo(Form^ form, Panel^ botonesPanel, Panel^ iconosPanel, Panel^ contenidoPanel, Panel^ subboton, Panel^ bton1, Panel^ boton1)
{
    /*  array<Color>^ colorsBotones = gcnew array<Color>{ Color::FromArgb(200, 200, 200), Color::FromArgb(180, 180, 180) };
    array<Color>^ colorsIconos = gcnew array<Color>{ Color::FromArgb(220, 220, 220), Color::FromArgb(190, 190, 190) };
    array<Color>^ colorsContenido = gcnew array<Color>{ Color::FromArgb(240, 240, 240), Color::FromArgb(210, 210, 210) };*/
    //array<Color>^ colorsBotones = gcnew array<Color>{ Color::FromArgb(21, 101, 192) };    // Verde agua
    array<Color>^ colorsIconos = gcnew array<Color>{ Color::FromArgb(3, 169, 244) };      // Azul cielo
    array<Color>^ colorsContenido = gcnew array<Color>{ Color::FromArgb(245, 255, 250) }; // Verde pálido
    array<Color>^ colorsBotones = gcnew array<Color>{
        Color::FromArgb(0, 137, 123), // color para el panel
        Color::FromArgb(100, 181, 246) // color para los botones
    };

    array<Color>^ colorsSubboton = gcnew array<Color>{ Color::FromArgb(215, 255, 251) };
    array<Color>^ colorpan = gcnew array<Color>{ Color::FromArgb(83, 216, 224) };
    ApplyColorsToControls(botonesPanel, colorsBotones);
    ApplyColorsToControls(iconosPanel, colorsIconos);
    ApplyColorsToControls(contenidoPanel, colorsContenido);
    //subbotones
    ApplyColorsToControls(subboton, colorsSubboton);
    ApplyColorsToControls(bton1, colorsSubboton); 
    ApplyColorsToControls(boton1, colorsSubboton);
   /* Panel principal : (250, 253, 255) — azul blanco
        Panel arriba : (25, 118, 210) — azul clínico
        Panel izquierda : (21, 101, 192) — azul fuerte
        Subbotones : (230, 245, 255) — azul pálido*/
}
//void ThemeManager::ApplyColorsToControls(Panel^ panel, array<Color>^ colors) {
//    int index = 0;
//
//    // Color de fondo del Panel
//    panel->BackColor = colors[0];
//
//    // Iterar sobre los controles dentro del Panel
//    for each (Control ^ control in panel->Controls) {
//        if (control->GetType() == Button::typeid) {
//            // Botones: les aplicamos otro color diferente
//            Button^ button = dynamic_cast<Button^>(control);
//            if (colors->Length > 1) {
//                button->BackColor = colors[1]; // El segundo color del array
//            }
//            else {
//                button->BackColor = colors[0]; // Si solo hay un color, usa el mismo
//            }
//            button->ForeColor = Color::Black; // o blanco si quieres más contraste
//        }
//        else if (control->GetType() == Label::typeid) {
//            //control->ForeColor = colors[0]; // Etiquetas
//        }
//        else if (control->GetType() == Panel::typeid) {
//            // Si hay subpaneles podrías aplicarles otro color si quieres
//            control->BackColor = colors[0];
//        }
//
//        // Recursivamente para hijos
//        for each (Control ^ child in control->Controls) {
//            ApplyColorToControl(child, colors, index);
//        }
//    }
//}

void ThemeManager::ApplyColorsToControls(Panel^ panel, array<Color>^ colors) {
    int index = 0;

    // Cambiar el color de fondo del panel
     panel->BackColor = colors[0];
    //panel->BackColor = Color::Black;

    // Iterar sobre todos los controles dentro del panel
    for each(Control ^ control in panel->Controls) {
        ApplyColorToControl(control, colors, index);
        index = (index + 1) % colors->Length;
    }
}

void ThemeManager::ApplyColorToControl(Control^ control, array<Color>^ colors, int index) {
    if (control->GetType() == Button::typeid) {
        control->BackColor = colors[index];
        control->ForeColor = Color::Black;

       

    }
    else if (control->GetType() == Label::typeid) {
        control->ForeColor = colors[(index + 1) % colors->Length];
    }
    else if (control->GetType() == Panel::typeid) {
        //control->BackColor = colors[index];
    }

}
