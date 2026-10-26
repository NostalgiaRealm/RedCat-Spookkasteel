/*
 * FUN_0044e4e0 at 0044e4e0
 * undefined FUN_0044e4e0(void)
 * Address ranges: 0044e4e0-0044e5d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0044e4e0(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 4;
  }
  if (uVar5 < param_2) {
    uVar5 = param_2;
    if ((int)param_2 < 0) {
      uVar5 = 0;
    }
    pvVar4 = operator_new(uVar5 << 4);
    iVar2 = *(int *)(param_1 + 8);
    pvVar6 = pvVar4;
    for (iVar7 = *(int *)(param_1 + 4); iVar7 != iVar2; iVar7 = iVar7 + 0x10) {
      FUN_00443140(pvVar6,iVar7);
      pvVar6 = (void *)((int)pvVar6 + 0x10);
    }
    iVar2 = *(int *)(param_1 + 8);
    for (iVar7 = *(int *)(param_1 + 4); iVar7 != iVar2; iVar7 = iVar7 + 0x10) {
      iVar3 = *(int *)(iVar7 + 4);
      if (iVar3 != 0) {
        cVar1 = *(char *)(iVar3 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iVar3 + -1));
        }
        else {
          *(char *)(iVar3 + -1) = cVar1 + -1;
        }
      }
      *(undefined4 *)(iVar7 + 4) = 0;
      *(undefined4 *)(iVar7 + 8) = 0;
      *(undefined4 *)(iVar7 + 0xc) = 0;
    }
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    iVar2 = *(int *)(param_1 + 4);
    *(void **)(param_1 + 0xc) = (void *)(param_2 * 0x10 + (int)pvVar4);
    if (iVar2 == 0) {
      *(void **)(param_1 + 8) = pvVar4;
      *(void **)(param_1 + 4) = pvVar4;
      return;
    }
    *(void **)(param_1 + 4) = pvVar4;
    *(void **)(param_1 + 8) = (void *)((*(int *)(param_1 + 8) - iVar2 >> 4) * 0x10 + (int)pvVar4);
  }
  return;
}

