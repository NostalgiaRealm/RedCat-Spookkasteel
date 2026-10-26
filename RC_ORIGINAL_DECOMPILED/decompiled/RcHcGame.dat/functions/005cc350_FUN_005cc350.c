/*
 * FUN_005cc350 at 005cc350
 * undefined FUN_005cc350(void)
 * Address ranges: 005cc350-005cc382
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005cc350(int param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = __strcmpi((char *)puVar1[1],param_2);
    if (iVar2 == 0) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[2];
}

