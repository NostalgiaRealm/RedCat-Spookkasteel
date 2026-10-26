/*
 * FUN_005197d0 at 005197d0
 * byte __register FUN_005197d0(int * param_1, WPARAM param_2)
 * Address ranges: 005197d0-005197f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_005197d0(int *param_1,WPARAM param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_00519a90(param_1,param_2);
  if (bVar1) {
    iVar2 = FUN_005199dc(param_1,param_2);
    return *(byte *)(iVar2 + 9) ^ 1;
  }
  return 1;
}

