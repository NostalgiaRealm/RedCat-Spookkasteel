/*
 * FUN_00435408 at 00435408
 * undefined __register FUN_00435408(int * param_1)
 * Address ranges: 00435408-004354ee;00435540-00435546
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00435408(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar5;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar6;
  undefined4 extraout_EDX_02;
  undefined3 uVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = (undefined1 *)0x43541f;
  iVar1 = FUN_0043579c((int)param_1);
  if (iVar1 != 0) {
    puStack_20 = (undefined1 *)0x435433;
    piVar2 = (int *)FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX);
    puStack_20 = (undefined1 *)0x43543e;
    FUN_00435304((int)param_1);
    puStack_24 = &LAB_004354ef;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    iVar1 = FUN_0043579c((int)param_1);
    uVar5 = extraout_ECX_00;
    uVar6 = extraout_EDX;
    if (-1 < iVar1 + -1) {
      iVar8 = 0;
      do {
        iVar3 = FUN_00435760((int)param_1,iVar8);
        uVar5 = extraout_ECX_01;
        uVar6 = extraout_EDX_00;
        if ((byte)(*(char *)(iVar3 + 0x4b) - 3U) < 2) {
          iVar3 = FUN_00435760((int)param_1,iVar8);
          FUN_004121d8(piVar2,iVar3);
          uVar5 = extraout_ECX_02;
          uVar6 = extraout_EDX_01;
        }
        iVar8 = iVar8 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00403270(param_1,uVar6,uVar5);
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &DAT_004354f6;
    while (0 < piVar2[2]) {
      puStack_24 = (undefined1 *)0x4354af;
      piVar4 = (int *)FUN_00412384(piVar2,piVar2[2] + -1);
      uVar7 = (undefined3)((uint)extraout_EDX_02 >> 8);
      if (*(char *)((int)piVar4 + 0x4b) == '\x03') {
        puStack_24 = (undefined1 *)0x4354bc;
        FUN_00431d2c(piVar4,CONCAT31(uVar7,4),extraout_ECX_03);
      }
      else {
        puStack_24 = (undefined1 *)0x4354c5;
        FUN_00431d2c(piVar4,CONCAT31(uVar7,3),extraout_ECX_03);
      }
      puStack_24 = (undefined1 *)0x4354d4;
      FUN_00412224(piVar2,piVar2[2] + -1);
    }
    puStack_24 = (undefined1 *)0x4354e6;
    FUN_00403094(piVar2);
    puStack_24 = (undefined1 *)0x4354ee;
    FUN_0043530c((int)param_1);
    return;
  }
  return;
}

