/*
 * FUN_00431f54 at 00431f54
 * undefined __register FUN_00431f54(int * param_1, undefined4 param_2)
 * Address ranges: 00431f54-00431f75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00431f54(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_2,param_1[0xf],param_1[0xe]);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 2;
  return;
}

