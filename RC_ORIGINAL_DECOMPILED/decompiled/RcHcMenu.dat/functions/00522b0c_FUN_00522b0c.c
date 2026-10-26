/*
 * FUN_00522b0c at 00522b0c
 * undefined __register FUN_00522b0c(int * param_1, int * param_2, LONG * param_3, char * param_4, int param_5, char param_6)
 * Address ranges: 00522b0c-00522cc1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00522b0c(int *param_1,int *param_2,LONG *param_3,char *param_4,int param_5,char param_6)

{
  uint uVar1;
  uint uVar2;
  HDC pHVar3;
  LPCSTR lpchText;
  int iVar4;
  uint extraout_ECX;
  tagRECT *ptVar5;
  undefined4 *in_FS_OFFSET;
  char **ppcVar6;
  char *pcStack_14c;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  byte local_128 [256];
  int local_28;
  int local_24;
  tagRECT local_20;
  uint local_10;
  int *local_c;
  int *local_8;
  
  local_24 = 0;
  local_28 = 0;
  ptVar5 = &local_20;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    ptVar5->left = *param_3;
    param_3 = param_3 + 1;
    ptVar5 = (tagRECT *)&ptVar5->top;
  }
  puStack_138 = (undefined1 *)0x522b3a;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_4);
  puStack_13c = &LAB_00522cc2;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  local_10 = 0x8824;
  if (param_6 == '\0') {
    local_10 = 0x8824;
    puStack_138 = &stack0xfffffffc;
  }
  else if (param_6 == '\x01') {
    local_10 = 0x8826;
    puStack_138 = &stack0xfffffffc;
  }
  else if (param_6 == '\x02') {
    local_10 = 0x8825;
    puStack_138 = &stack0xfffffffc;
  }
  else {
    puStack_138 = &stack0xfffffffc;
    FUN_00402fe0(*local_8,local_128);
    FUN_00403fd4(&local_28,local_128);
    pcStack_14c = " Unhandled case-part";
    FUN_004040f0(&local_24,3);
    FUN_00403d94(local_24);
  }
  iVar4 = 0;
  uVar1 = -param_5;
  if (SBORROW4(0,param_5)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  InflateRect(&local_20,uVar1,iVar4);
  iVar4 = FUN_0040431c("\r\n",param_4);
  if (iVar4 != 0) {
    ppcVar6 = &param_4;
    uVar2 = FUN_0040431c("\r\n",param_4);
    uVar1 = uVar2 - 1;
    if (SBORROW4(uVar2,1)) {
      thunk_FUN_00402874(uVar2);
      uVar1 = extraout_ECX;
    }
    FUN_00404238((int)param_4,0,uVar1,(int *)ppcVar6);
    FUN_00404038((int *)&param_4,(undefined4 *)&DAT_00522d4c);
  }
  iVar4 = 1;
  pHVar3 = (HDC)FUN_0041cf6c(local_c);
  SetBkMode(pHVar3,iVar4);
  uVar1 = FUN_0041c310(local_c[5]);
  uVar1 = FUN_0041b688(uVar1);
  if ((int)uVar1 < 0) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  pHVar3 = (HDC)FUN_0041cf6c(local_c);
  SetBkColor(pHVar3,uVar1);
  uVar1 = FUN_0041b688(*(uint *)(local_c[3] + 0x18));
  if ((int)uVar1 < 0) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  pHVar3 = (HDC)FUN_0041cf6c(local_c);
  SetTextColor(pHVar3,uVar1);
  uVar1 = local_10;
  if ((int)local_10 < 0) {
    uVar1 = thunk_FUN_00402874(local_10);
  }
  ptVar5 = &local_20;
  iVar4 = -1;
  lpchText = FUN_004041f4(param_4);
  pHVar3 = (HDC)FUN_0041cf6c(local_c);
  DrawTextA(pHVar3,lpchText,iVar4,ptVar5,uVar1);
  *in_FS_OFFSET = pcStack_14c;
  FUN_00403dd4(&local_28,2);
  FUN_00403db0((int *)&param_4);
  return;
}

