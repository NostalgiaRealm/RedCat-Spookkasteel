/*
 * FUN_00415990 at 00415990
 * undefined FUN_00415990(void)
 * Address ranges: 00415990-00415acb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00415990(int *param_1,int param_2,undefined4 param_3,float param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00621228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (3.4028235e+38 <= param_4) {
    ExceptionList = &local_c;
    fVar7 = (float10)FUN_00424950();
    param_4 = (float)fVar7;
  }
  if (param_2 != 1) {
    FUN_004233e0(param_2,param_3,param_4);
    ExceptionList = local_c;
    return;
  }
  local_1c[0] = param_4._0_1_;
  uVar2 = 0xffffffff;
  pcVar5 = &DAT_0068e9fc;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  cVar1 = FUN_00401940(uVar2,1);
  if (cVar1 != '\0') {
    puVar4 = (undefined4 *)&DAT_0068e9fc;
    puVar6 = local_18;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(undefined1 *)((int)local_18 + uVar2) = 0;
    local_14 = uVar2;
  }
  local_4 = 0;
  (**(code **)(*param_1 + 0x9c))();
  FUN_004a0660(local_1c,param_3,param_4);
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0((char *)((int)local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}

