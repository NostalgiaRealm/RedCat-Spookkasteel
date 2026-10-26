/*
 * FUN_00483020 at 00483020
 * undefined4 __register FUN_00483020(int param_1)
 * Address ranges: 00483020-0048304d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00483020(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if (((iVar1 != 0) && (uVar2 = thunk_FUN_00479429(param_1), (short)uVar2 == 0)) && (iVar1 == 1)) {
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return 0;
}

