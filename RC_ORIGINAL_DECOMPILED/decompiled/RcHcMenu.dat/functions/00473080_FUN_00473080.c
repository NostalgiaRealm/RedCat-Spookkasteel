/*
 * FUN_00473080 at 00473080
 * undefined __register FUN_00473080(int param_1, int param_2, int param_3)
 * Address ranges: 00473080-004730d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00473080(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != param_2) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x50) + param_2 * 4);
    if (param_2 < param_3) {
      FUN_00402944((undefined4 *)(*(int *)(param_1 + 0x50) + 4 + param_2 * 4),
                   (undefined4 *)(*(int *)(param_1 + 0x50) + param_2 * 4),(param_3 - param_2) * 4);
    }
    else {
      FUN_00402944((undefined4 *)(*(int *)(param_1 + 0x50) + param_3 * 4),
                   (undefined4 *)(*(int *)(param_1 + 0x50) + 4 + param_3 * 4),
                   (param_2 - param_3) * 4);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x50) + param_3 * 4) = uVar1;
  }
  return;
}

