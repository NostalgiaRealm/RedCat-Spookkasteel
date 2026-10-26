/*
 * FUN_00435334 at 00435334
 * undefined __register FUN_00435334(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00435334-004353f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00435334(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = (undefined1 *)0x43534c;
  piVar1 = (int *)FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',param_3);
  puStack_24 = &LAB_004353f9;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar2 = FUN_00432178(param_1);
  iVar3 = FUN_0043579c((int)param_1);
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      piVar4 = (int *)FUN_00435760((int)param_1,iVar6);
      if (piVar4[1] == param_1[1]) {
        iVar5 = FUN_00435760((int)param_1,iVar6);
        FUN_004121d8(piVar1,iVar5);
        FUN_00431f34(piVar4,(iVar2 - piVar4[0xe]) - piVar4[0xc]);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar2 = piVar1[2];
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      uVar7 = 0;
      iVar6 = FUN_00412384(piVar1,iVar3);
      FUN_00433700(iVar6,0xb03e,0,uVar7);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00435400;
  puStack_24 = (undefined1 *)0x4353f8;
  FUN_00403094(piVar1);
  return;
}

