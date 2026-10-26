/*
 * FUN_004a340c at 004a340c
 * undefined __register FUN_004a340c(int * param_1, int * param_2)
 * Address ranges: 004a340c-004a347b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a2c88 slot 36 for TDaviGraphicButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a2c88 slot 36 for
   TDaviGraphicButton. Original bytes unchanged; names and types still inferred. */

void FUN_004a340c(int *param_1,int *param_2)

{
  HWND pHVar1;
  uint uVar2;
  int iVar3;
  
  FUN_0042bacc(param_1,param_2);
  param_2[1] = param_2[1] | 0xb;
  if ((param_1[0x82] != 0) && (*(char *)(param_1[0x82] + 0x54) != '\0')) {
    param_2[2] = param_2[2] | 0x20;
    iVar3 = -0x10;
    pHVar1 = (HWND)FUN_00438988((int *)param_1[9]);
    uVar2 = GetWindowLongA(pHVar1,iVar3);
    uVar2 = uVar2 & 0xfdffffff;
    iVar3 = -0x10;
    pHVar1 = (HWND)FUN_00438988((int *)param_1[9]);
    SetWindowLongA(pHVar1,iVar3,uVar2);
  }
  return;
}

