/*
 * FUN_005fa550 at 005fa550
 * undefined FUN_005fa550(void)
 * Address ranges: 005fa550-005fa691
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005fa550(undefined1 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006489e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040cc00(param_2,0,0xffffffff);
  uVar2 = FUN_005e7010(local_1c,&stack0x00000010);
  local_4 = 0;
  FUN_005f9b60(param_3,uVar2);
  local_4 = 0xffffffff;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  local_28 = (undefined4 *)0x0;
  local_24 = 0;
  local_20 = 0;
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_006b3f70;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_2c[0] = param_1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    puVar5 = (undefined4 *)&DAT_006b3f70;
    puVar7 = local_28;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    FUN_00404190(uVar3);
  }
  local_4 = 1;
  FUN_0040cc00(local_2c,0,0xffffffff);
  if (local_28 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_28 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)((int)local_28 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0((char *)((int)local_28 + -1));
  }
  ExceptionList = local_c;
  return;
}

