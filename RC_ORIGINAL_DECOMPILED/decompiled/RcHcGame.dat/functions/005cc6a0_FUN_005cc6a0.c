/*
 * FUN_005cc6a0 at 005cc6a0
 * undefined FUN_005cc6a0(void)
 * Address ranges: 005cc6a0-005cc6d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005cc6a0(int param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    iVar2 = __strcmpi((char *)*puVar1,param_2);
    if (iVar2 == 0) break;
    puVar1 = (undefined4 *)puVar1[5];
  }
  return puVar1;
}

