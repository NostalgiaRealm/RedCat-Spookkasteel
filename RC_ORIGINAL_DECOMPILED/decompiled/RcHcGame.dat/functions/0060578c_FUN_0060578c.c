/*
 * FUN_0060578c at 0060578c
 * undefined FUN_0060578c(void)
 * Address ranges: 0060578c-00605820
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_0060578c(int param_1,uint param_2,uint param_3,undefined2 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(uint *)(param_1 + 8) < param_2) {
    FUN_005fe747();
  }
  if (-*(int *)(param_1 + 8) - 1U <= param_3) {
    FUN_005fe5fb();
  }
  if (param_3 != 0) {
    iVar3 = param_3 + *(int *)(param_1 + 8);
    cVar1 = FUN_006058fe(iVar3,0);
    if (cVar1 != '\0') {
      FUN_00605821(*(int *)(param_1 + 4) + (param_2 + param_3) * 2,
                   param_2 * 2 + *(int *)(param_1 + 4),*(int *)(param_1 + 8) - param_2);
      puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + param_2 * 2);
      for (uVar2 = param_3 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = CONCAT22(param_4,param_4);
        puVar4 = puVar4 + 1;
      }
      for (uVar2 = (uint)((param_3 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined2 *)puVar4 = param_4;
        puVar4 = (undefined4 *)((int)puVar4 + 2);
      }
      *(int *)(param_1 + 8) = iVar3;
      *(undefined2 *)(*(int *)(param_1 + 4) + iVar3 * 2) = 0;
    }
  }
  return param_1;
}

