/*
 * FUN_005ae2a0 at 005ae2a0
 * undefined FUN_005ae2a0(void)
 * Address ranges: 005ae2a0-005ae356
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_005ae2a0(int param_1,uint param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_2 == 0xffffffff) {
    FUN_005fe5fb();
  }
  if (0xfffffffd < param_2) {
    FUN_005fe5fb();
  }
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (param_2 == 0) {
      FUN_004040a0(1);
      return param_1;
    }
    if ((*(uint *)(param_1 + 0xc) < 0x20) && (param_2 <= *(uint *)(param_1 + 0xc)))
    goto LAB_005ae31e;
    FUN_004040a0(1);
  }
  else if (param_2 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return param_1;
  }
  FUN_00401a60(param_2);
LAB_005ae31e:
  puVar4 = *(undefined4 **)(param_1 + 4);
  for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = CONCAT22(CONCAT11(param_3,param_3),CONCAT11(param_3,param_3));
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = param_3;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  *(uint *)(param_1 + 8) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 4) + param_2) = 0;
  return param_1;
}

