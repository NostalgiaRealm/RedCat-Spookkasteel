/*
 * FUN_005fa430 at 005fa430
 * undefined FUN_005fa430(void)
 * Address ranges: 005fa430-005fa514
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005fa430(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006489b8;
  pvStack_c = ExceptionList;
  uVar3 = 0xffffffff;
  local_4 = 0;
  pcVar6 = &DAT_006b3f70;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  ExceptionList = &pvStack_c;
  if (0xfffffffd < uVar3) {
    ExceptionList = &pvStack_c;
    FUN_005fe5fb();
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_004040a0(1);
      goto LAB_005fa4ed;
    }
    if ((0x1f < *(uint *)(param_1 + 0x1c)) || (*(uint *)(param_1 + 0x1c) < uVar3)) {
      FUN_004040a0(1);
      goto LAB_005fa4bf;
    }
  }
  else {
    if (uVar3 == 0) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      FUN_004040a0(0);
      goto LAB_005fa4ed;
    }
LAB_005fa4bf:
    FUN_00401a60(uVar3);
  }
  puVar5 = (undefined4 *)&DAT_006b3f70;
  puVar7 = *(undefined4 **)(param_1 + 0x14);
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
  *(uint *)(param_1 + 0x18) = uVar3;
  *(undefined1 *)(*(int *)(param_1 + 0x14) + uVar3) = 0;
LAB_005fa4ed:
  FUN_005f9b60(param_2,&stack0x00000008);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&param_2,&DAT_00688808);
}

