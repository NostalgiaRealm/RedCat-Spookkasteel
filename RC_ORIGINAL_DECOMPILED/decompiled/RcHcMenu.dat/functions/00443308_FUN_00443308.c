/*
 * FUN_00443308 at 00443308
 * int __register FUN_00443308(int param_1, int param_2)
 * Address ranges: 00443308-0044331f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00443308(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = FUN_004123e0(*(int *)(param_1 + 0x50),param_2);
  }
  return iVar1;
}

