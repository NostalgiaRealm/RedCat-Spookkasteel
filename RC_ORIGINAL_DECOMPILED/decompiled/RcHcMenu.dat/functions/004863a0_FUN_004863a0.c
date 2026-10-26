/*
 * FUN_004863a0 at 004863a0
 * undefined __register FUN_004863a0(int * param_1, int param_2, undefined4 param_3, undefined4 param_4, byte param_5)
 * Address ranges: 004863a0-00486585;004865c5-0048663c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004863a0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,byte param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  VARIANTARG *extraout_ECX_00;
  VARIANTARG *extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar6;
  int iVar7;
  int *in_FS_OFFSET;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iStack_34;
  undefined1 *puStack_30;
  undefined1 *local_2c;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iVar11;
  
  puStack_20 = &stack0xfffffffc;
  iVar5 = 7;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  LOCK();
  UNLOCK();
  puStack_24 = &LAB_00486675;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  local_2c = (undefined1 *)0x4863d4;
  FUN_00473b1c(param_1);
  local_2c = (undefined1 *)0x4863dc;
  FUN_00473148((int)param_1);
  local_2c = (undefined1 *)0x4863e4;
  iVar5 = FUN_004730e4((int)param_1);
  local_2c = (undefined1 *)0x4863f2;
  piVar2 = (int *)FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX);
  puStack_30 = &LAB_0048663d;
  iStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_34;
  local_2c = &stack0xfffffffc;
  FUN_00473b84((int)param_1,piVar2,param_2);
  bVar8 = (param_5 & 1) != 0;
  if (*(char *)((int)param_1 + 0x1b2) == '\0') {
    cVar1 = FUN_00485bd8((int)param_1,piVar2,bVar8);
    if (cVar1 == '\0') {
      iVar11 = (**(code **)(*param_1 + 0x25c))(param_1,param_2,bVar8);
    }
    else {
      iVar11 = param_1[0x5a];
    }
  }
  else {
    iVar11 = 0;
  }
  if (iVar11 != 0) {
    FUN_00471390((int)param_1,6);
    param_1[99] = iVar5;
    iVar10 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&stack0xffffffc0;
    iVar9 = iVar11;
    thunk_FUN_004799e2(iVar11);
    iVar7 = piVar2[2];
    if (iVar7 == 1) {
      bVar8 = FUN_00405df8(0);
      if (bVar8) {
        FUN_00405e00(&local_2c,extraout_EDX,extraout_ECX_00,(VARIANTARG *)&local_2c,(ushort *)0x0,1)
        ;
        piVar3 = (int *)FUN_0041237c(piVar2);
        (**(code **)(*piVar3 + 0xa4))(piVar3,&local_2c);
      }
      else {
        piVar3 = (int *)FUN_0041237c(piVar2);
        (**(code **)(*piVar3 + 0xa4))(piVar3,0);
      }
    }
    else if (-1 < iVar7 + -1) {
      iVar6 = 0;
      do {
        piVar3 = (int *)FUN_00412384(piVar2,iVar6);
        FUN_00405e00(&stack0xffffffc4,extraout_EDX_00,extraout_ECX_01,(VARIANTARG *)&stack0xffffffc4
                     ,(ushort *)0x0,1);
        (**(code **)(*piVar3 + 0xa4))(piVar3,&stack0xffffffc4,*piVar3,iVar9,iVar5);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if ((param_5 & 2) != 0) {
      iVar5 = FUN_0041246c(piVar2);
      if (*(char *)(iVar5 + 0x34) == '\x01') {
        piVar2 = (int *)FUN_0041246c(piVar2);
        (**(code **)(*piVar2 + 0x58))(piVar2,&stack0xffffffc0);
        FUN_00404030(iVar10);
      }
    }
    thunk_FUN_0047994d(iVar11);
    *in_FS_OFFSET = iVar11;
    FUN_004713ac((int)param_1,1);
    return;
  }
  uVar4 = thunk_FUN_00479cac(param_1[0x5a]);
  FUN_0047fe48(uVar4);
  FUN_00485e28((int)param_1,piVar2,(VARIANTARG *)0x0,2,param_5);
  thunk_FUN_00479459(param_1[0x5a]);
  thunk_FUN_00479c9a(param_1[0x5a]);
  iVar5 = param_1[0x5a];
  thunk_FUN_0047945f(iVar5);
  *in_FS_OFFSET = iVar5;
  FUN_00403094(piVar2);
  return;
}

