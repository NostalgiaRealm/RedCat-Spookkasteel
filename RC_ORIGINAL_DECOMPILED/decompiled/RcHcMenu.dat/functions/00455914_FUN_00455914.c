/*
 * FUN_00455914 at 00455914
 * undefined __register FUN_00455914(int * param_1)
 * Address ranges: 00455914-00455a5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4539c0 slot 45 for TCustomPanel. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4539c0 slot 45 for
   TCustomPanel. Original bytes unchanged; names and types still inferred. */

void FUN_00455914(int *param_1)

{
  int *piVar1;
  LONG LVar2;
  LPCSTR lpchText;
  HDC hdc;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  int cchText;
  tagRECT *lprc;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined *local_20;
  tagRECT local_1c;
  undefined4 local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_20 = (undefined *)0x0;
  puStack_34 = &LAB_00455a5d;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  (**(code **)(*param_1 + 0x40))(param_1,&local_1c);
  if (*(char *)((int)param_1 + 0x1fa) != '\0') {
    FUN_004558dc(*(char *)((int)param_1 + 0x1fa),extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    FUN_004547f4(param_1[0x7c],&local_1c,local_8,param_1[0x7f]);
  }
  FUN_004547f4(param_1[0x7c],&local_1c,param_1[0x18],param_1[0x80]);
  if (*(char *)((int)param_1 + 0x1f9) != '\0') {
    FUN_004558dc(*(char *)((int)param_1 + 0x1f9),extraout_EDX_00,extraout_ECX_00,
                 (int)&stack0xfffffffc);
    FUN_004547f4(param_1[0x7c],&local_1c,local_8,param_1[0x7f]);
  }
  piVar1 = (int *)param_1[0x7c];
  FUN_0041c318((int *)piVar1[5],param_1[0x18]);
  FUN_0041c9f8(piVar1,&local_1c);
  FUN_0041c434((int *)piVar1[5],'\x01');
  FUN_0041ce68((int)piVar1);
  LVar2 = FUN_0041cdc4(piVar1,&LAB_00455a74);
  uVar3 = (local_1c.bottom + local_1c.top) - LVar2;
  local_1c.top = (int)uVar3 >> 1;
  if (local_1c.top < 0) {
    local_1c.top = local_1c.top + (uint)((uVar3 & 1) != 0);
  }
  local_1c.bottom = LVar2 + local_1c.top;
  uVar3 = FUN_00434648(param_1,*(uint *)(&DAT_0056fb14 + (uint)*(byte *)((int)param_1 + 0x207) * 4)
                               | 0x44,extraout_ECX_01);
  lprc = &local_1c;
  cchText = -1;
  FUN_00432714((int)param_1,(int *)&local_20);
  lpchText = FUN_004041f4(local_20);
  hdc = (HDC)FUN_0041cf6c(piVar1);
  DrawTextA(hdc,lpchText,cchText,lprc,uVar3);
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00455a64;
  puStack_34 = (undefined1 *)0x455a5c;
  FUN_00403db0((int *)&local_20);
  return;
}

