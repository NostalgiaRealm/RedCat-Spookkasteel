/*
 * FUN_005ad740 at 005ad740
 * undefined FUN_005ad740(void)
 * Address ranges: 005ad740-005ad87d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ad740(int param_1,uint *param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  uint local_4;
  
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_006b3f70;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4 - 1;
  local_4 = 0;
  cVar2 = FUN_00401940(uVar4,1);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)&DAT_006b3f70;
    puVar8 = *(undefined4 **)(param_3 + 4);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(uint *)(param_3 + 8) = uVar4;
    *(undefined1 *)(*(int *)(param_3 + 4) + uVar4) = 0;
  }
  if (*param_2 < *(uint *)(param_1 + 8)) {
    do {
      if (*(int *)(param_1 + 4) == 0) {
        puVar3 = &DAT_0064a3b4;
      }
      else {
        puVar3 = (undefined1 *)(*(int *)(param_1 + 4) + *param_2);
      }
      cVar2 = FUN_005ad6e0(*puVar3,&local_4);
      if (cVar2 == '\0') {
        return;
      }
      if (*(int *)(param_1 + 4) == 0) {
        puVar3 = &DAT_0064a3b4;
      }
      else {
        puVar3 = (undefined1 *)(*(int *)(param_1 + 4) + *param_2);
      }
      uVar1 = *puVar3;
      if (-*(int *)(param_3 + 8) - 1U < 2) {
        FUN_005fe5fb();
      }
      uVar4 = *(int *)(param_3 + 8) + 1;
      if (0xfffffffd < uVar4) {
        FUN_005fe5fb();
      }
      puVar3 = *(undefined1 **)(param_3 + 4);
      if (((puVar3 == (undefined1 *)0x0) || (cVar2 = puVar3[-1], cVar2 == '\0')) || (cVar2 == -1)) {
        if (uVar4 != 0) {
          if (*(uint *)(param_3 + 0xc) < uVar4) goto LAB_005ad843;
          goto LAB_005ad84b;
        }
        if (puVar3 != (undefined1 *)0x0) {
          *(undefined4 *)(param_3 + 8) = 0;
          *puVar3 = 0;
        }
      }
      else if (uVar4 == 0) {
        puVar3[-1] = cVar2 + -1;
        FUN_004040a0(0);
      }
      else {
LAB_005ad843:
        FUN_00401a60(uVar4);
LAB_005ad84b:
        *(undefined1 *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 8)) = uVar1;
        *(uint *)(param_3 + 8) = uVar4;
        *(undefined1 *)(*(int *)(param_3 + 4) + uVar4) = 0;
      }
      uVar4 = *param_2;
      *param_2 = uVar4 + 1;
    } while (uVar4 + 1 < *(uint *)(param_1 + 8));
  }
  return;
}

