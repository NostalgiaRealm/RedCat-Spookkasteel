/*
 * FUN_005317d4 at 005317d4
 * undefined __register FUN_005317d4(int param_1)
 * Address ranges: 005317d4-005317f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005317d4(int param_1)

{
  int iVar1;
  
  while( true ) {
    iVar1 = FUN_0045ba40(*(int *)(param_1 + 0x208));
    if (iVar1 == 0) break;
    FUN_00531270(param_1);
  }
  return;
}

