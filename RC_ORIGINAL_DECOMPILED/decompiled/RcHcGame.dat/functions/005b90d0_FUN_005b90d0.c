/*
 * FUN_005b90d0 at 005b90d0
 * undefined FUN_005b90d0(void)
 * Address ranges: 005b90d0-005b9313
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005b90d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iStack_6ac;
  int iStack_6a8;
  undefined4 uStack_6a0;
  undefined1 *puStack_69c;
  undefined4 uStack_698;
  undefined4 auStack_694 [9];
  undefined1 auStack_670 [12];
  undefined4 auStack_664 [24];
  undefined1 auStack_604 [1540];
  
  iVar3 = (**(code **)(DAT_006cc410 + 0x70))();
  if (iVar3 == 0) {
    FUN_005cf220(0x18,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,0x7be,&DAT_006b3f70,
                 0);
    return 0;
  }
  uVar1 = *(undefined4 *)(DAT_006cc41c + 0x14);
  *(undefined4 *)(DAT_006cc41c + 0x14) = 0;
  iVar3 = DAT_006cc40c + 0x2a0;
  iStack_6a8 = 1;
  if (1 < *(int *)(DAT_006cc420 + 0xa0)) {
    iStack_6ac = 0x50;
    iVar5 = DAT_00722f24;
    do {
      _DAT_006cc3f8 = iVar3;
      if (*(int *)(iVar3 + 0xbc) == *(int *)(DAT_006cc41c + 4)) {
        if (iVar5 == 0) {
          bVar2 = *(byte *)(iVar3 + 0xcc) & 5;
joined_r0x005b9193:
          if (bVar2 == 0) goto LAB_005b9297;
        }
        else if (0 < iVar5) {
          bVar2 = *(byte *)(iVar3 + 0xcc) & 6;
          goto joined_r0x005b9193;
        }
        *(int *)(DAT_006cc418 + 0x33690) = *(int *)(DAT_006cc418 + 0x33690) + 1;
        puVar4 = (undefined4 *)FUN_005c9470();
        puVar6 = auStack_664;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar4 = auStack_664;
        puVar6 = auStack_694;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        FUN_005b2fe0(auStack_670);
        FUN_005c94b0();
        FUN_005b32c0(auStack_694);
        FUN_005b3000(auStack_670);
        FUN_005c9420();
        FUN_005d0ab0(param_2,param_1,auStack_604);
        FUN_005c91e0(param_1);
        puStack_69c = auStack_604;
        uStack_698 = param_3;
        uStack_6a0 = param_1;
        FUN_005b8cc0(*(undefined4 *)(*(int *)(DAT_006cc420 + 0x48) + iStack_6ac),&uStack_6a0,
                     (1 << ((byte)auStack_604._0_4_ & 0x1f)) + -1);
        FUN_005c9420();
        iVar5 = DAT_00722f24;
      }
LAB_005b9297:
      iStack_6ac = iStack_6ac + 0x50;
      iStack_6a8 = iStack_6a8 + 1;
      iVar3 = iVar3 + 0xd4;
    } while (iStack_6a8 < *(int *)(DAT_006cc420 + 0xa0));
  }
  *(undefined4 *)(DAT_006cc41c + 0x14) = uVar1;
  iVar3 = (**(code **)(DAT_006cc410 + 0x74))();
  if (iVar3 == 0) {
    FUN_005cf220(0x19,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,0x806,&DAT_006b3f70,
                 0);
    return 0;
  }
  return 1;
}

