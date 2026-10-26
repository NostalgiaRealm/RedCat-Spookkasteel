/*
 * FUN_10002c70 at 10002c70
 * undefined FUN_10002c70(void)
 * Address ranges: 10002c70-10002c96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002c70(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8);
  puVar3 = DAT_100259d0;
  for (uVar2 = (uVar1 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0xffffffff;
    puVar3 = puVar3 + 1;
  }
  for (uVar1 = uVar1 * 2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar3 = 0xff;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return;
}

