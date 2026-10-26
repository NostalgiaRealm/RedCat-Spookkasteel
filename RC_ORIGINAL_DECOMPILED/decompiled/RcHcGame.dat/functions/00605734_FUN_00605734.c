/*
 * FUN_00605734 at 00605734
 * undefined FUN_00605734(void)
 * Address ranges: 00605734-0060578b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_00605734(int param_1,uint param_2,undefined2 param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_2 == 0xffffffff) {
    FUN_005fe5fb();
  }
  cVar1 = FUN_006058fe(param_2,1);
  if (cVar1 != '\0') {
    if (param_2 != 0) {
      puVar3 = *(undefined4 **)(param_1 + 4);
      for (uVar2 = param_2 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = CONCAT22(param_3,param_3);
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = (uint)((param_2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined2 *)puVar3 = param_3;
        puVar3 = (undefined4 *)((int)puVar3 + 2);
      }
    }
    *(uint *)(param_1 + 8) = param_2;
    *(undefined2 *)(*(int *)(param_1 + 4) + param_2 * 2) = 0;
  }
  return param_1;
}

