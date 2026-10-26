/*
 * FUN_0051cee0 at 0051cee0
 * undefined FUN_0051cee0(void)
 * Address ranges: 0051cee0-0051cff7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_0051cee0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638a38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0051a190(param_2,param_3,param_4);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = (undefined1)param_4;
  uVar3 = 0xffffffff;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  pcVar6 = &DAT_006b3f70;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_4 = 0;
  if (0xfffffffd < uVar3) {
    FUN_005fe5fb();
  }
  iVar2 = param_1[0x1a];
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_004040a0(1);
      goto LAB_0051cfc9;
    }
    if ((0x1f < (uint)param_1[0x1c]) || ((uint)param_1[0x1c] < uVar3)) {
      FUN_004040a0(1);
      goto LAB_0051cf9b;
    }
  }
  else {
    if (uVar3 == 0) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      FUN_004040a0(0);
      goto LAB_0051cfc9;
    }
LAB_0051cf9b:
    FUN_00401a60(uVar3);
  }
  puVar5 = (undefined4 *)&DAT_006b3f70;
  puVar7 = (undefined4 *)param_1[0x1a];
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
  param_1[0x1b] = uVar3;
  *(undefined1 *)(uVar3 + param_1[0x1a]) = 0;
LAB_0051cfc9:
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 1;
  *param_1 = &PTR_FUN_0064f658;
  ExceptionList = pvStack_c;
  return param_1;
}

