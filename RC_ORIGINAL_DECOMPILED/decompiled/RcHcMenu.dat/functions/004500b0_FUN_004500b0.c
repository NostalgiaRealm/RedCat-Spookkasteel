/*
 * FUN_004500b0 at 004500b0
 * undefined __register FUN_004500b0(int * param_1, char param_2)
 * Address ranges: 004500b0-0045018c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4480ac slot -1 for TApplication. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4480ac slot -1 for
   TApplication. Original bytes unchanged; names and types still inferred. */

void FUN_004500b0(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  byte extraout_DL;
  undefined4 extraout_EDX;
  
  piVar1 = FUN_00403434(param_1,param_2);
  if ((HMODULE)0x20 < (HMODULE)piVar1[0x24]) {
    FreeLibrary((HMODULE)piVar1[0x24]);
  }
  if (((piVar1[9] != 0) && ((char)piVar1[0x25] != '\0')) && (piVar1[0x10] != 0)) {
    FUN_0045184c((int)piVar1,2,0);
  }
  *(undefined1 *)((int)piVar1 + 0x8d) = 0;
  FUN_00451e78((int)piVar1);
  FUN_00451864((int)piVar1,'\0');
  FUN_00418f4c(piVar1,extraout_DL & 0xfc);
  FUN_00451278((int)piVar1,extraout_EDX,extraout_ECX,0x450554,(int)piVar1);
  if (((HWND)piVar1[9] != (HWND)0x0) && ((char)piVar1[0x25] != '\0')) {
    if (*PTR_DAT_005722c4 != '\0') {
      SendMessageA((HWND)piVar1[9],0x80,1,0);
    }
    DestroyWindow((HWND)piVar1[9]);
  }
  if (piVar1[0xd] != 0) {
    FUN_00448550(piVar1[0xd]);
  }
  FUN_00403094((int *)piVar1[0x26]);
  FUN_00403094((int *)piVar1[0x20]);
  FUN_00403094((int *)piVar1[0x22]);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

