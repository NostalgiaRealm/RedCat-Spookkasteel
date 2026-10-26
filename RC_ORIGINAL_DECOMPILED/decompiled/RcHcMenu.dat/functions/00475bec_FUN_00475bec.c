/*
 * FUN_00475bec at 00475bec
 * int __register FUN_00475bec(int param_1, int param_2, int param_3)
 * Address ranges: 00475bec-00475c33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00475bec(int param_1,int param_2,int param_3)

{
  FUN_00406454((int *)(param_1 + 0x34),(int)&DAT_00474ad4,1);
  FUN_00402944((undefined4 *)(*(int *)(param_1 + 0x34) + param_2),
               (undefined4 *)(*(int *)(param_1 + 0x34) + param_3 + param_2),
               *(int *)(param_1 + 0x38) - param_2);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + param_3;
  return *(int *)(param_1 + 0x34) + param_2;
}

