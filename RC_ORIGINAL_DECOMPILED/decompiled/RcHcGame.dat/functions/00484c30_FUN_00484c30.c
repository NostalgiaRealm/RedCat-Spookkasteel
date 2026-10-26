/*
 * FUN_00484c30 at 00484c30
 * undefined FUN_00484c30(void)
 * Address ranges: 00484c30-00484ce9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_00484c30(int param_1,undefined4 *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (-*(int *)(param_1 + 8) - 1U <= param_3) {
    FUN_005fe5fb();
  }
  if (param_3 == 0) {
    return param_1;
  }
  uVar4 = param_3 + *(int *)(param_1 + 8);
  if (0xfffffffd < uVar4) {
    FUN_005fe5fb();
  }
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar4 == 0) {
      if (iVar2 == 0) {
        return param_1;
      }
      FUN_00404190(0);
      return param_1;
    }
    if (uVar4 <= *(uint *)(param_1 + 0xc)) goto LAB_00484cbb;
  }
  else if (uVar4 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return param_1;
  }
  FUN_00401a60(uVar4);
LAB_00484cbb:
  puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8));
  for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *(uint *)(param_1 + 8) = uVar4;
  *(undefined1 *)(*(int *)(param_1 + 4) + uVar4) = 0;
  return param_1;
}

