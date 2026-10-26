/*
 * FUN_10001e80 at 10001e80
 * undefined FUN_10001e80(void)
 * Address ranges: 10001e80-10001ede
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001e80(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  if (param_2 == 0) {
    uVar2 = *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc);
    puVar4 = *(undefined4 **)(param_1 + 0x30);
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    return 1;
  }
  uVar3 = *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x10);
  if (0 < (int)uVar3) {
    uVar1 = (undefined2)param_2;
    puVar4 = *(undefined4 **)(param_1 + 0x30);
    for (uVar2 = uVar3 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = CONCAT22(uVar1,uVar1);
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined2 *)puVar4 = uVar1;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
    }
  }
  return 1;
}

