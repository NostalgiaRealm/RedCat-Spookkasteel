/*
 * FUN_005cc5c0 at 005cc5c0
 * undefined FUN_005cc5c0(void)
 * Address ranges: 005cc5c0-005cc5f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005cc5c0(int param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    iVar2 = __strcmpi((char *)*puVar1,param_2);
    if (iVar2 == 0) break;
    puVar1 = (undefined4 *)puVar1[3];
  }
  return puVar1;
}

