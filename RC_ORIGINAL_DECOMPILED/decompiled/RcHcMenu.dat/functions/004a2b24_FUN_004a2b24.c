/*
 * FUN_004a2b24 at 004a2b24
 * undefined __register FUN_004a2b24(int * param_1)
 * Address ranges: 004a2b24-004a2be6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a27a4 slot 45 for TDaviGraphicHintWindow. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a27a4 slot 45 for
   TDaviGraphicHintWindow. Original bytes unchanged; names and types still inferred. */

void FUN_004a2b24(int *param_1)

{
  uint uVar1;
  LPCSTR lpchText;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  int cchText;
  tagRECT *lprc;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined *local_1c;
  tagRECT local_18;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_1c = (undefined *)0x0;
  puStack_24 = &LAB_004a2be7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_1;
  FUN_0041c8d0((int *)param_1[0x7c],0,0,(int *)param_1[0x80]);
  uVar1 = (**(code **)(*local_8 + 0x40))(local_8,&local_18);
  bVar2 = SCARRY4(local_18.left,2);
  local_18.left = local_18.left + 2;
  if (bVar2) {
    thunk_FUN_00402874(uVar1);
  }
  (**(code **)(**(int **)(local_8[0x7c] + 0xc) + 8))(*(int **)(local_8[0x7c] + 0xc),local_8[0x81]);
  uVar1 = FUN_00434688((int)local_8);
  uVar1 = uVar1 | 0x814;
  if ((int)uVar1 < 0) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  lprc = &local_18;
  cchText = -1;
  FUN_00432714((int)local_8,(int *)&local_1c);
  lpchText = FUN_004041f4(local_1c);
  hdc = (HDC)FUN_0041cf6c((int *)local_8[0x7c]);
  DrawTextA(hdc,lpchText,cchText,lprc,uVar1);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004a2bee;
  puStack_24 = (undefined1 *)0x4a2be6;
  FUN_00403db0((int *)&local_1c);
  return;
}

