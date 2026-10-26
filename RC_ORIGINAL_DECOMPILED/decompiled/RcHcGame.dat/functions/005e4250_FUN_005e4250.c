/*
 * FUN_005e4250 at 005e4250
 * undefined FUN_005e4250(void)
 * Address ranges: 005e4250-005e4427
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_005e4250(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar2 = DAT_0070fae8;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006466ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_0070fae8 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    if (DAT_0070fae8[0x15] == 0) {
LAB_005e42a0:
      FUN_005e5360(*(uint *)(*(int *)(*piVar2 + 4) + 4 + (int)piVar2) | 2,0);
    }
    else {
      ExceptionList = &pvStack_c;
      iVar1 = FUN_0060d30d(DAT_0070fae8[0x15]);
      if (iVar1 != 0) goto LAB_005e42a0;
      FUN_005e56d0(0,2);
      if (piVar2 == (int *)0xfffffffc) goto LAB_005e42a0;
    }
    if (DAT_0070fae8 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*(int *)(*DAT_0070fae8 + 4) + (int)DAT_0070fae8))(1);
    }
    DAT_0070fae8 = (int *)0x0;
  }
  piVar2 = operator_new(0x8c);
  uStack_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    puVar5 = *(undefined1 **)(param_1 + 4);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    *piVar2 = (int)&DAT_00650a24;
    FUN_005e4430();
    piVar2[0x16] = (int)&PTR_FUN_00651634;
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    *(undefined ***)(*(int *)(*piVar2 + 4) + (int)piVar2) = &PTR_FUN_0065163c;
    FUN_005e5380(piVar2 + 1,0);
    uStack_4 = 3;
    FUN_005e5430(0);
    uStack_4 = CONCAT31(uStack_4._1_3_,4);
    *(undefined ***)(*(int *)(*piVar2 + 4) + (int)piVar2) = &PTR_LAB_00650a20;
    iVar1 = FUN_005e55c0(puVar5,2);
    if (iVar1 == 0) {
      FUN_005e4540(2,0);
    }
  }
  DAT_0070fae8 = piVar2;
  uStack_4 = 0xffffffff;
  uVar4 = *(uint *)(*piVar2 + 4);
  if (*(int *)(uVar4 + 4 + (int)piVar2) == 0) {
    ExceptionList = pvStack_c;
    return CONCAT31((int3)(uVar4 >> 8),1);
  }
  if (piVar2 == (int *)0x0) goto LAB_005e4414;
  if (piVar2[0x15] == 0) {
LAB_005e43db:
    uVar4 = *(uint *)((int)piVar2 + *(int *)(*piVar2 + 4) + 4);
    uVar3 = uVar4 | 2;
    if (*(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) == 0) {
      uVar3 = CONCAT31((int3)(uVar4 >> 8),(char)uVar3) | 4;
    }
    FUN_005fe7e4(uVar3,0);
  }
  else {
    iVar1 = FUN_0060d30d(piVar2[0x15]);
    if (iVar1 != 0) goto LAB_005e43db;
    FUN_005e56d0(0,2);
    if (piVar2 == (int *)0xfffffffc) goto LAB_005e43db;
  }
  uVar4 = 0;
  if (DAT_0070fae8 != (int *)0x0) {
    uVar4 = (*(code *)**(undefined4 **)(*(int *)(*DAT_0070fae8 + 4) + (int)DAT_0070fae8))(1);
  }
  DAT_0070fae8 = (int *)0x0;
LAB_005e4414:
  ExceptionList = pvStack_c;
  return uVar4 & 0xffffff00;
}

