/*
 * FUN_004d5080 at 004d5080
 * undefined FUN_004d5080(void)
 * Address ranges: 004d5080-004d5204
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f078 slot 23 for .?AVCAdamTriggerModel@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f078 slot 23 for
   .?AVCAdamTriggerModel@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_004d5080(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  
  uVar3 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x174) = 0;
  pcVar6 = &DAT_006b3f70;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  if (0xfffffffd < uVar3) {
    FUN_005fe5fb();
  }
  iVar2 = *(int *)(param_1 + 0x17c);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 != 0) {
      if ((0x1f < *(uint *)(param_1 + 0x184)) || (*(uint *)(param_1 + 0x184) < uVar3)) {
        FUN_004040a0(1);
        goto LAB_004d5107;
      }
      goto LAB_004d510f;
    }
    FUN_004040a0(1);
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004040a0(0);
  }
  else {
LAB_004d5107:
    FUN_00401a60(uVar3);
LAB_004d510f:
    puVar5 = (undefined4 *)&DAT_006b3f70;
    puVar7 = *(undefined4 **)(param_1 + 0x17c);
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
    *(uint *)(param_1 + 0x180) = uVar3;
    *(undefined1 *)(*(int *)(param_1 + 0x17c) + uVar3) = 0;
  }
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_006b3f70;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  if (0xfffffffd < uVar3) {
    FUN_005fe5fb();
  }
  iVar2 = *(int *)(param_1 + 0x18c);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_004040a0(1);
      FUN_004d3460(*(undefined4 *)(param_1 + 0x168));
      return;
    }
    if ((*(uint *)(param_1 + 0x194) < 0x20) && (uVar3 <= *(uint *)(param_1 + 0x194)))
    goto LAB_004d51cb;
    FUN_004040a0(1);
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004040a0(0);
    FUN_004d3460(*(undefined4 *)(param_1 + 0x168));
    return;
  }
  FUN_00401a60(uVar3);
LAB_004d51cb:
  puVar5 = (undefined4 *)&DAT_006b3f70;
  puVar7 = *(undefined4 **)(param_1 + 0x18c);
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
  *(uint *)(param_1 + 400) = uVar3;
  *(undefined1 *)(*(int *)(param_1 + 0x18c) + uVar3) = 0;
  FUN_004d3460(*(undefined4 *)(param_1 + 0x168));
  return;
}

