/*
 * FUN_005183ec at 005183ec
 * undefined __register FUN_005183ec(int * param_1, int * param_2, LONG * param_3, char param_4)
 * Address ranges: 005183ec-005185ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5177d8 slot 49 for TDaviGlyphButton2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5177d8 slot 49 for
   TDaviGlyphButton2. Original bytes unchanged; names and types still inferred. */

void FUN_005183ec(int *param_1,int *param_2,LONG *param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  HDC hDC;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  tagRECT *ptVar7;
  uint *in_FS_OFFSET;
  int *piVar8;
  int *piVar9;
  char cVar10;
  byte bVar11;
  uint uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined *local_40;
  undefined *local_3c;
  tagRECT local_38;
  tagRECT local_28;
  int local_18;
  undefined4 local_14;
  byte local_d;
  int *local_c;
  int *local_8;
  
  puStack_50 = &stack0xfffffffc;
  local_40 = (undefined *)0x0;
  local_3c = (undefined *)0x0;
  ptVar7 = &local_28;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    ptVar7->left = *param_3;
    param_3 = param_3 + 1;
    ptVar7 = (tagRECT *)&ptVar7->top;
  }
  puStack_54 = &LAB_005185af;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_58;
  local_c = param_2;
  local_8 = param_1;
  FUN_0041ce68((int)param_2);
  iVar4 = 0;
  uVar2 = -local_8[0x86];
  if (SBORROW4(0,local_8[0x86])) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  InflateRect(&local_28,uVar2,iVar4);
  if (param_4 == '\x01') {
    OffsetRect(&local_28,1,1);
  }
  local_18 = *(int *)(local_8[0x81] + 0xc);
  local_14 = *(undefined4 *)(local_8[0x81] + 0x10);
  local_d = 0;
  cVar1 = (**(code **)(*local_8 + 0x4c))();
  if (cVar1 == '\0') {
    local_d = 2;
  }
  cVar1 = (**(code **)(*(int *)local_8[0x84] + 0x28))();
  if (cVar1 == '\0') {
    (**(code **)(*(int *)local_8[0x84] + 0x3c))((int *)local_8[0x84],1);
  }
  cVar1 = (**(code **)(*(int *)local_8[0x84] + 0x1c))();
  if (cVar1 == '\0') {
    cVar10 = '\0';
    cVar1 = '\x01';
    piVar9 = &local_18;
    piVar8 = (int *)local_8[0x84];
    uVar2 = local_8[0x87];
    uVar3 = uVar2 & 0xffffff00;
    bVar11 = local_d;
    FUN_00432714((int)local_8,(int *)&local_40);
    FUN_004abf90(local_c,&local_28.left,local_40,(byte)uVar3,uVar2,piVar8,piVar9,cVar1,cVar10,bVar11
                );
    uVar5 = extraout_ECX_00;
    uVar6 = extraout_EDX_00;
  }
  else {
    cVar10 = '\0';
    cVar1 = '\x01';
    piVar9 = &local_18;
    piVar8 = (int *)0x0;
    uVar2 = local_8[0x87];
    uVar3 = uVar2 & 0xffffff00;
    bVar11 = local_d;
    FUN_00432714((int)local_8,(int *)&local_3c);
    FUN_004abf90(local_c,&local_28.left,local_3c,(byte)uVar3,uVar2,piVar8,piVar9,cVar1,cVar10,bVar11
                );
    uVar5 = extraout_ECX;
    uVar6 = extraout_EDX;
  }
  cVar1 = FUN_00403270(local_8,uVar6,uVar5);
  if (cVar1 != '\0') {
    (**(code **)(*local_8 + 0x40))(local_8,&local_38);
    InflateRect(&local_38,-4,-4);
    FUN_0041c034((int *)local_c[4],0x80000006);
    FUN_0041c318((int *)local_c[5],0x8000000f);
    ptVar7 = &local_38;
    hDC = (HDC)FUN_0041cf6c(local_c);
    DrawFocusRect(hDC,ptVar7);
  }
  *in_FS_OFFSET = uVar3;
  FUN_00403dd4((int *)&local_40,2);
  return;
}

