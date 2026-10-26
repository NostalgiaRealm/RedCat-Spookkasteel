/*
 * FUN_005174f0 at 005174f0
 * undefined __register FUN_005174f0(int * param_1, int * param_2, LONG * param_3, char param_4)
 * Address ranges: 005174f0-0051760f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x516d4c slot 49 for TDaviButton2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x516d4c slot 49 for
   TDaviButton2. Original bytes unchanged; names and types still inferred. */

void FUN_005174f0(int *param_1,int *param_2,LONG *param_3,char param_4)

{
  char cVar1;
  HDC hDC;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  tagRECT *ptVar3;
  int *in_FS_OFFSET;
  undefined1 auStackY_100 [128];
  undefined4 uStackY_80;
  undefined1 *puVar4;
  int *piVar5;
  int *piVar6;
  char cVar7;
  byte bVar8;
  int iStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined *local_3c;
  tagRECT local_38;
  tagRECT local_28;
  int local_18;
  undefined4 local_14;
  byte local_d;
  int *local_c;
  int *local_8;
  
  puStack_4c = &stack0xfffffffc;
  local_3c = (undefined *)0x0;
  ptVar3 = &local_28;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    ptVar3->left = *param_3;
    param_3 = param_3 + 1;
    ptVar3 = (tagRECT *)&ptVar3->top;
  }
  puStack_50 = &LAB_00517610;
  iStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_54;
  local_c = param_2;
  local_8 = param_1;
  FUN_0041ce68((int)param_2);
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
  cVar7 = '\x01';
  cVar1 = '\x01';
  piVar6 = &local_18;
  piVar5 = (int *)0x0;
  iVar2 = 0;
  puVar4 = auStackY_100;
  bVar8 = local_d;
  FUN_00432714((int)local_8,(int *)&local_3c);
  FUN_004abf90(local_c,&local_28.left,local_3c,(byte)puVar4,iVar2,piVar5,piVar6,cVar1,cVar7,bVar8);
  cVar1 = FUN_00403270(local_8,extraout_EDX,extraout_ECX);
  if (cVar1 != '\0') {
    (**(code **)(*local_8 + 0x40))(local_8,&local_38);
    uStackY_80 = 0x5175c8;
    InflateRect(&local_38,-4,-4);
    FUN_0041c034((int *)local_c[4],0x80000006);
    FUN_0041c318((int *)local_c[5],0x8000000f);
    ptVar3 = &local_38;
    hDC = (HDC)FUN_0041cf6c(local_c);
    DrawFocusRect(hDC,ptVar3);
  }
  *in_FS_OFFSET = (int)puVar4;
  FUN_00403db0((int *)&local_3c);
  return;
}

