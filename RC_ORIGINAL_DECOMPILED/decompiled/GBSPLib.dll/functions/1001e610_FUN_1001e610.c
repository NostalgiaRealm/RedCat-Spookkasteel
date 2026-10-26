/*
 * FUN_1001e610 at 1001e610
 * undefined FUN_1001e610(void)
 * Address ranges: 1001e610-1001e652
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001e610(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 **)(param_1 + 4) = puVar1;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    uVar3 = puVar1[3];
    puVar1[4] = uVar3;
    puVar1[2] = (undefined4 *)puVar1[1];
    puVar4 = (undefined4 *)puVar1[1];
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return;
}

