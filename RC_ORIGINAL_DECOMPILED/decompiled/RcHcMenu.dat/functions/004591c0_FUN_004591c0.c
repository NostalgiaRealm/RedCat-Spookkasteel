/*
 * FUN_004591c0 at 004591c0
 * undefined __register FUN_004591c0(undefined * param_1, LONG * param_2, int * param_3, int * param_4)
 * Address ranges: 004591c0-0045928e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004591c0(undefined *param_1,LONG *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  LPSTR lpchText;
  HDC hdc;
  int iVar3;
  uint extraout_EDX;
  tagRECT *ptVar4;
  undefined4 *in_FS_OFFSET;
  UINT format;
  LPDRAWTEXTPARAMS lpdtp;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  tagRECT local_20;
  int *local_10;
  int *local_c;
  undefined *local_8;
  
  ptVar4 = &local_20;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    ptVar4->left = *param_2;
    param_2 = param_2 + 1;
    ptVar4 = (tagRECT *)&ptVar4->top;
  }
  puStack_2c = (undefined1 *)0x4591e4;
  local_c = param_3;
  local_8 = param_1;
  FUN_004041e4((int)param_1);
  puStack_30 = &LAB_004592ac;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_38 = (undefined1 *)0x4591fa;
  puStack_2c = &stack0xfffffffc;
  iVar3 = FUN_00404030((int)local_8);
  uVar1 = iVar3 + 4;
  if (SCARRY4(iVar3,4)) {
    puStack_38 = (undefined1 *)0x459204;
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  if ((int)uVar1 < 0) {
    puStack_38 = (undefined1 *)0x45920d;
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  puStack_38 = (undefined1 *)0x459212;
  local_10 = FUN_0040a360(uVar1);
  puStack_3c = &LAB_0045928f;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  uVar2 = FUN_00404030((int)local_8);
  uVar1 = uVar2 + 4;
  if (SCARRY4(uVar2,4)) {
    thunk_FUN_00402874(uVar2);
    uVar1 = extraout_EDX;
  }
  FUN_00402cfc(local_10,uVar1,0);
  lpchText = (LPSTR)FUN_0040a1cc((char *)local_10,local_8);
  lpdtp = (LPDRAWTEXTPARAMS)0x0;
  format = 0x18400;
  ptVar4 = &local_20;
  iVar3 = -1;
  local_10 = (int *)lpchText;
  hdc = (HDC)FUN_0041cf6c(local_c);
  DrawTextExA(hdc,lpchText,iVar3,ptVar4,format,lpdtp);
  FUN_0040a34c((char *)local_10,param_4);
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_00459296;
  puStack_3c = (undefined1 *)0x45928e;
  FUN_0040a3ac((int)local_10);
  return;
}

