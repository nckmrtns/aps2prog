enum DOS_COLORS {PRETO, AZUL, VERDE, CIANO, VERMELHO, MAGENTA, AMARELO, CINZACLARO, CINZA, AZULCLARO, VERDECLARO, CIANOCLARO, VERMELHOCLARO, MAGENTACLARO, AMARELOCLARO, BRANCO};
// -------------------------------------------------------------------------
void texto(DOS_COLORS iColor)
{
        HANDLE hl = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
        BOOL b = GetConsoleScreenBufferInfo(hl, &bufferInfo);
        bufferInfo.wAttributes &= 0x00F0;
        SetConsoleTextAttribute (hl, bufferInfo.wAttributes |= iColor);
}
// -------------------------------------------------------------------------
void fundo(DOS_COLORS iColor)
{
        HANDLE hl = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
        BOOL b = GetConsoleScreenBufferInfo(hl, &bufferInfo);
        bufferInfo.wAttributes &= 0x000F;
        SetConsoleTextAttribute (hl, bufferInfo.wAttributes |= (iColor << 4));
}
// -------------------------------------------------------------------------
DOS_COLORS c[16] = {PRETO, AZUL, VERDE, CIANO, VERMELHO, MAGENTA, AMARELO, CINZACLARO, CINZA, AZULCLARO, VERDECLARO, CIANOCLARO, VERMELHOCLARO, MAGENTACLARO, AMARELOCLARO, BRANCO};
