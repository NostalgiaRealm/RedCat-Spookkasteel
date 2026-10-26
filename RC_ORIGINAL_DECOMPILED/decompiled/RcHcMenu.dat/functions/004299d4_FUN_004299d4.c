/*
 * FUN_004299d4 at 004299d4
 * undefined __register FUN_004299d4(int param_1, undefined4 * param_2)
 * Address ranges: 004299d4-00429a41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x425714 slot 37 for TCustomEdit. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x425714 slot 37 for
   TCustomEdit. Original bytes unchanged; names and types still inferred. */

void FUN_004299d4(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  uint auStack_98 [35];
  
  if (((PTR_DAT_0057261c[8] == '\0') || (*(int *)PTR_DAT_00572608 == 2)) ||
     ((*(byte *)((int)param_2 + 5) & 8) == 0)) {
    FUN_00435bbc(param_1,param_2);
  }
  else {
    puVar2 = auStack_98;
    for (iVar1 = 0x23; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    auStack_98[1] = auStack_98[1] & 0xfffff7ff;
    FUN_00435bbc(param_1,auStack_98);
    if (*(HWND *)(param_1 + 0x14c) != (HWND)0x0) {
      SendMessageA(*(HWND *)(param_1 + 0x14c),0xcf,1,0);
    }
  }
  return;
}

