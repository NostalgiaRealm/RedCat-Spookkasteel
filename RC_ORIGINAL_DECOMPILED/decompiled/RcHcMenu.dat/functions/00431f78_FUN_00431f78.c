/*
 * FUN_00431f78 at 00431f78
 * undefined __register FUN_00431f78(int * param_1, undefined4 param_2)
 * Address ranges: 00431f78-00431f97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00431f78(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],param_1[0xf],param_2);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 4;
  return;
}

