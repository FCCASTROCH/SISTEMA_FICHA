#pragma once
using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

public ref class ThemeManager {
public:
    // Constructor
    ThemeManager();

    // M�todo para aplicar un tema basado en un esquema
	void ApplyTheme(Form^ form, String^ themeName, Panel^ botonesPanel, Panel^ iconosPanel, Panel^ contenidoPanel, Panel^ subboton,Panel^bton1,Panel^boton1);
    void ApplyThem(Form^ form, String^ themeName);
    private:
    // M�todos para aplicar colores espec�ficos
	void ApplyAnalogous(Form^ form, Panel^ botonesPanel, Panel^ iconosPanel, Panel^ contenidoPanel, Panel^ subboton, Panel^ bton1, Panel^ boton1);
	void ApplyTriadic(Form^ form, Panel^ botonesPanel, Panel^ iconosPanel, Panel^ contenidoPanel, Panel^ subboton, Panel^ bton1, Panel^ boton1);
    void ApplyMonochromatic(Form^ form, Panel^ botonesPanel, Panel^ iconosPanel, Panel^ contenidoPanel, Panel^ subboton, Panel^ bton1, Panel^ boton1);
    void ApplyNuevo(Form^ form, Panel^ botonesPanel, Panel^ iconosPanel, Panel^ contenidoPanel, Panel^ subboton, Panel^ bton1, Panel^ boton1);

    // M�todos para aplicar colores espec�ficos
	void ApplyAnalogou(Form^ form);
	void ApplyTriadi(Form^ form);
	void ApplyMonochromati(Form^ form);
    void ApplyNuevo(Form^ form);

    // M�todo auxiliar para aplicar colores a los controles
    void ApplyColorsToControls(Panel^ panel, array<Color>^ colors);
    void ApplyColorToControl(Control^ control, array<Color>^ colors, int index);
	// M�todo auxiliar para aplicar colores a los controles
    void ApplyColorsToControl(Form^ form, array<Color>^ colors);
    void ApplyColorToContro(Control^ control, array<Color>^ colors, int index);


};

