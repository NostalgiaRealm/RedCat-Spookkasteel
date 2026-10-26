/*
 * FUN_0044a140 at 0044a140
 * undefined __register FUN_0044a140(int * param_1, undefined4 param_2, undefined1 * param_3)
 * Address ranges: 0044a140-0044a180;0044a198-0044a1b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044a140(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if (*(short *)((int)param_1 + 0x2ba) != 0) {
    puStack_1c = &LAB_0044a181;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    (*(code *)param_1[0xae])(param_1[0xaf],param_1);
    *in_FS_OFFSET = uStack_20;
    param_3 = puStack_18;
    param_2 = uStack_20;
  }
  if ((*(byte *)(param_1 + 0xb3) & 2) != 0) {
    puStack_18 = (undefined1 *)0x44a1ae;
    FUN_0044aa98(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
  }
  return;
}

