/*
 * FUN_00403c5c at 00403c5c
 * undefined __register FUN_00403c5c(void)
 * Address ranges: 00403c5c-00403d4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403c5c(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 *extraout_ECX;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  pcVar1 = DAT_0057303c;
  if (bRam005734c8 == 0) {
    while (DAT_0057303c = pcVar1, pcVar1 != (code *)0x0) {
      DAT_0057303c = (code *)0x0;
      (*pcVar1)();
      pcVar1 = DAT_0057303c;
    }
  }
  if (DAT_00573040 != 0) {
    FUN_00403bd8();
    if (DAT_00573048 == '\0') {
      if (DAT_0056f010 == '\0') {
        MessageBoxA((HWND)0x0,s_Runtime_error_at_00000000_0056f034,s_Error_0056f054,0);
      }
    }
    else {
      puVar2 = (undefined *)FUN_004071a0(&DAT_0057321c,s_Runtime_error_at_00000000_0056f034);
      FUN_00407123(puVar2);
    }
    DAT_00573040 = 0;
  }
  while( true ) {
    if ((bRam005734c8 == 2) && (DAT_00573038 == 0)) {
      DAT_005734b0 = 0;
    }
    FUN_00403a74();
    if (((bRam005734c8 < 2) || (DAT_00573038 != 0)) && (_DAT_005734b4 != (undefined4 *)0x0)) {
      FUN_004069d8(_DAT_005734b4,extraout_EDX,extraout_ECX);
      if ((HMODULE)_DAT_005734b4[4] != (HMODULE)_DAT_005734b4[1]) {
        FreeLibrary((HMODULE)_DAT_005734b4[4]);
      }
    }
    FUN_00403a4c();
    if (bRam005734c8 == 1) {
      (*pcRam005734cc)();
    }
    if (bRam005734c8 != 0) {
      FUN_00403c28();
    }
    if (DAT_005734a4 == (undefined4 *)0x0) break;
    puVar4 = DAT_005734a4;
    puVar5 = &DAT_005734a4;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(DAT_00573038);
}

