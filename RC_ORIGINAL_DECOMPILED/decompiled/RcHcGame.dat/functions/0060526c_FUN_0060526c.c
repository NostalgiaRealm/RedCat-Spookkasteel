/*
 * FUN_0060526c at 0060526c
 * undefined FUN_0060526c(void)
 * Address ranges: 0060526c-006052d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_0060526c(int param_1,uint param_2,undefined2 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (-*(int *)(param_1 + 8) - 1U <= param_2) {
    FUN_005fe5fb();
  }
  if (param_2 != 0) {
    iVar3 = param_2 + *(int *)(param_1 + 8);
    cVar1 = FUN_006058fe(iVar3,0);
    if (cVar1 != '\0') {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 2);
      for (uVar2 = param_2 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = CONCAT22(param_3,param_3);
        puVar4 = puVar4 + 1;
      }
      for (uVar2 = (uint)((param_2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined2 *)puVar4 = param_3;
        puVar4 = (undefined4 *)((int)puVar4 + 2);
      }
      *(int *)(param_1 + 8) = iVar3;
      *(undefined2 *)(*(int *)(param_1 + 4) + iVar3 * 2) = 0;
    }
  }
  return param_1;
}

