/*
 * FUN_004a3528 at 004a3528
 * undefined __register FUN_004a3528(int * param_1, int param_2)
 * Address ranges: 004a3528-004a36d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a2c88 slot 48 for TDaviGraphicButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a2c88 slot 48 for
   TDaviGraphicButton. Original bytes unchanged; names and types still inferred. */

void FUN_004a3528(int *param_1,int param_2)

{
  HDC pHVar1;
  LPCSTR lpchText;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  tagRECT *ptVar2;
  int cchText;
  UINT UVar3;
  UINT UVar4;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  RECT local_48;
  undefined *local_38;
  tagRECT local_34;
  tagRECT local_24;
  UINT local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  puStack_4c = &stack0xfffffffc;
  local_38 = (undefined *)0x0;
  puStack_50 = &LAB_004a36d7;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  local_c = param_2;
  local_8 = param_1;
  FUN_0041cfec((int *)param_1[0x80],*(int *)(param_2 + 0x18));
  (**(code **)(*local_8 + 0x40))(local_8,&local_24);
  if (local_8[0x82] == 0) {
    UVar4 = 0x10;
    UVar3 = 4;
    ptVar2 = &local_24;
    pHVar1 = (HDC)FUN_0041cf6c((int *)local_8[0x80]);
    DrawFrameControl(pHVar1,ptVar2,UVar3,UVar4);
  }
  else {
    FUN_004a38f0(local_8,local_c);
    local_10 = (int *)(**(code **)(*local_8 + 200))();
    FUN_0041c8d0((int *)local_8[0x80],0,0,local_10);
    FUN_0041ce68(local_8[0x80]);
    if ((char)local_8[0x86] == '\x04') {
      FUN_0041bb48(*(int **)(local_8[0x80] + 0xc),local_8[0x83],extraout_ECX);
    }
    FUN_0041c434(*(int **)(local_8[0x80] + 0x14),'\x01');
    FUN_004a24c8(local_8[0x82],*(byte *)(local_8 + 0x86),&local_34.left);
    local_14 = 0x25;
    if ((char)local_8[0x8e] != '\0') {
      local_14 = 0x15;
    }
    ptVar2 = &local_34;
    cchText = -1;
    UVar3 = local_14;
    FUN_00432714((int)local_8,(int *)&local_38);
    lpchText = FUN_004041f4(local_38);
    pHVar1 = (HDC)FUN_0041cf6c((int *)local_8[0x80]);
    DrawTextA(pHVar1,lpchText,cchText,ptVar2,UVar3);
    if ((*(byte *)(local_8 + 8) & 0x10) != 0) {
      FUN_0041c318(*(int **)(local_8[0x80] + 0x14),0xffffff);
      (**(code **)(*local_8 + 0x40))(local_8,&local_48);
      FUN_0041ca34((int *)local_8[0x80],&local_48);
    }
    FUN_0041cfec((int *)local_8[0x80],0);
  }
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_004a36de;
  puStack_50 = (undefined1 *)0x4a36d6;
  FUN_00403db0((int *)&local_38);
  return;
}

