#include <windows.h>
#include <commctrl.h>
#include <stdio.h>
#include "resource.h"
#include <stdlib.h>

HINSTANCE hInst;
HWND h_caixa_valor1, h_caixa_valor2, h_caixa_resultado;

BOOL CALLBACK DlgMain(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch(uMsg)
    {
    case WM_INITDIALOG:
    {
        h_caixa_valor1 = GetDlgItem(hwndDlg, valor1);
        h_caixa_valor2 = GetDlgItem(hwndDlg, valor2);
        h_caixa_resultado = GetDlgItem(hwndDlg, resultado);
    }
    return TRUE;

    case WM_CLOSE:
    {
        EndDialog(hwndDlg, 0);
    }
    return TRUE;

    case WM_COMMAND:
    {
        char Valor1[100];
            char Valor2[100];
            char Resultado[100];
            GetWindowText(h_caixa_valor1, Valor1, 100);
            GetWindowText(h_caixa_valor2, Valor2, 100);
            float x = atof(Valor1);
            float y = atof(Valor2);
            float valor = 0;


        switch(LOWORD(wParam))
        {

        case soma:



            valor = x+y;

            sprintf(Resultado, "%.2f", valor);

            SetWindowText(h_caixa_resultado, Resultado);
            break;

        case subtracao:




            valor = x-y;

            sprintf(Resultado, "%.2f", valor);

            SetWindowText(h_caixa_resultado, Resultado);
            break;

            case divisao:

            valor = x/y;

            sprintf(Resultado, "%.2f", valor);

            SetWindowText(h_caixa_resultado, Resultado);
            break;

        case multiplicacao:

            valor = x*y;

            sprintf(Resultado, "%.2f", valor);

            SetWindowText(h_caixa_resultado, Resultado);
            break;

        case limpar:

            SetWindowText(h_caixa_valor1, "");
            SetWindowText(h_caixa_valor2, "");
            SetWindowText(h_caixa_resultado, "");
            SetFocus(h_caixa_valor1);
            break;

        }




    }
    return TRUE;
    }
    return FALSE;
}


int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    hInst=hInstance;
    InitCommonControls();
    return DialogBox(hInst, MAKEINTRESOURCE(DLG_MAIN), NULL, (DLGPROC)DlgMain);
}
