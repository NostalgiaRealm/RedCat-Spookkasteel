/*
 * FUN_005f7780 at 005f7780
 * undefined FUN_005f7780(void)
 * Address ranges: 005f7780-005f78c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_005f7780(int *param_1,undefined1 param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 auStack_3c [12];
  undefined1 *puStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined1 *puStack_20;
  undefined1 local_1c [8];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  puStack_8 = &LAB_00648610;
  pvStack_c = ExceptionList;
  local_1c[0] = param_2;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  local_2c = CONCAT31(local_2c._1_3_,param_2);
  local_4 = (int *)0x0;
  FUN_004040a0(0);
  local_4 = (int *)CONCAT31(local_4._1_3_,1);
  (**(code **)(*param_1 + 0x30))(local_1c,&local_2c);
  puVar3 = (undefined4 *)FUN_00600efc(&stack0xffffffbc,0x40);
  piVar2 = local_4;
  if (local_4 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*local_4 + 4) + (int)local_4;
  }
  (*(code *)*puVar3)(iVar5,puVar3[1]);
  puVar3 = (undefined4 *)FUN_00600f29(auStack_3c,0x14);
  if (piVar2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*piVar2 + 4) + (int)piVar2;
  }
  (*(code *)*puVar3)(iVar5,puVar3[1]);
  puVar4 = puStack_20;
  if (puStack_20 == (undefined1 *)0x0) {
    puVar4 = &DAT_0064a3b4;
  }
  FUN_005e5d20(piVar2,puVar4);
  puVar4 = puStack_30;
  if (puStack_30 == (undefined1 *)0x0) {
    puVar4 = &DAT_0064a3b4;
  }
  FUN_005e5d20(piVar2,puVar4);
  if (puStack_30 != (undefined1 *)0x0) {
    cVar1 = puStack_30[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(puStack_30 + -1);
    }
    else {
      puStack_30[-1] = cVar1 + -1;
    }
  }
  puStack_30 = (undefined1 *)0x0;
  local_2c = 0;
  uStack_28 = 0;
  if (puStack_20 != (undefined1 *)0x0) {
    cVar1 = puStack_20[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(puStack_20 + -1);
    }
    else {
      puStack_20[-1] = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_14;
  return piVar2;
}

