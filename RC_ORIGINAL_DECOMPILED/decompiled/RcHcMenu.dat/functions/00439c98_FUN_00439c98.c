/*
 * FUN_00439c98 at 00439c98
 * undefined __register FUN_00439c98(int * param_1)
 * Address ranges: 00439c98-00439d25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42f250 slot 45 for THintWindow. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42f250 slot 45 for
   THintWindow. Original bytes unchanged; names and types still inferred. */

void FUN_00439c98(int *param_1)

{
  uint uVar1;
  LPCSTR lpchText;
  HDC hdc;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  int cchText;
  tagRECT *lprc;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined *local_18;
  tagRECT local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_18 = (undefined *)0x0;
  puStack_24 = &LAB_00439d26;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  (**(code **)(*param_1 + 0x40))(param_1,&local_14);
  local_14.left = local_14.left + 2;
  local_14.top = local_14.top + 2;
  FUN_0041bb48(*(int **)(param_1[0x7c] + 0xc),-0x7fffffe9,extraout_ECX);
  uVar1 = FUN_00434688((int)param_1);
  uVar1 = uVar1 | 0x810;
  lprc = &local_14;
  cchText = -1;
  FUN_00432714((int)param_1,(int *)&local_18);
  lpchText = FUN_004041f4(local_18);
  hdc = (HDC)FUN_0041cf6c((int *)param_1[0x7c]);
  DrawTextA(hdc,lpchText,cchText,lprc,uVar1);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00439d2d;
  puStack_24 = (undefined1 *)0x439d25;
  FUN_00403db0((int *)&local_18);
  return;
}

