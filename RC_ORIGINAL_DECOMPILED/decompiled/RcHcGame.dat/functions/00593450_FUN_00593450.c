/*
 * FUN_00593450 at 00593450
 * undefined FUN_00593450(void)
 * Address ranges: 00593450-0059359b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00593450(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  undefined4 local_4;
  
  uVar2 = 0xffffffff;
  pcVar5 = &DAT_006b3f70;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  local_4 = 0;
  cVar1 = FUN_00401940(uVar2,1);
  if (cVar1 != '\0') {
    puVar4 = (undefined4 *)&DAT_006b3f70;
    puVar6 = *(undefined4 **)(param_4 + 4);
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
    *(uint *)(param_4 + 8) = uVar2;
    *(undefined1 *)(*(int *)(param_4 + 4) + uVar2) = 0;
  }
  FUN_005ad450(param_1,&local_4);
  FUN_005ad880(param_1,&local_4,param_2);
  if (*(int *)(param_2 + 8) != 0) {
    iVar8 = 0;
    do {
      cVar1 = FUN_005ad9c0(param_1,param_3,param_4,&local_4);
      if (cVar1 == '\0') {
        return 0;
      }
      iVar8 = iVar8 + 1;
      param_3 = param_3 + 0x10;
    } while (iVar8 < 10);
    return 1;
  }
  uVar2 = 0xffffffff;
  pcVar5 = s_ERROR__Expected_a_command__type_H_006a66ec;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  if (0xfffffffd < uVar2) {
    FUN_005fe5fb();
  }
  iVar8 = *(int *)(param_4 + 4);
  if (((iVar8 == 0) || (cVar1 = *(char *)(iVar8 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar2 == 0) {
      FUN_004040a0(1);
      return 0;
    }
    if ((*(uint *)(param_4 + 0xc) < 0x20) && (uVar2 <= *(uint *)(param_4 + 0xc))) goto LAB_00593547;
    FUN_004040a0(1);
  }
  else if (uVar2 == 0) {
    *(char *)(iVar8 + -1) = cVar1 + -1;
    FUN_004040a0(0);
    return 0;
  }
  FUN_00401a60(uVar2);
LAB_00593547:
  pcVar5 = s_ERROR__Expected_a_command__type_H_006a66ec;
  pcVar7 = *(char **)(param_4 + 4);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  *(uint *)(param_4 + 8) = uVar2;
  *(undefined1 *)(*(int *)(param_4 + 4) + uVar2) = 0;
  return 0;
}

