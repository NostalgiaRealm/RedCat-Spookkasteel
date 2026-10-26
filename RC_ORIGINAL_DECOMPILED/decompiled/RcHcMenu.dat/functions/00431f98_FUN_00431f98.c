/*
 * FUN_00431f98 at 00431f98
 * undefined __register FUN_00431f98(int * param_1, undefined4 param_2)
 * Address ranges: 00431f98-00431fb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00431f98(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],param_2,param_1[0xe]);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 8;
  return;
}

