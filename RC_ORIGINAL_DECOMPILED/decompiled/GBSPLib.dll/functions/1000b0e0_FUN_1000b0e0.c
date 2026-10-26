/*
 * FUN_1000b0e0 at 1000b0e0
 * undefined FUN_1000b0e0(void)
 * Address ranges: 1000b0e0-1000b115
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_1000b0e0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return &DAT_10265ce0;
    }
    iVar2 = FUN_100332c0(puVar1[1],param_2);
    if (iVar2 == 0) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return (undefined1 *)puVar1[2];
}

