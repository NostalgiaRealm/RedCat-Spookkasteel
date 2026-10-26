/*
 * FUN_005033a0 at 005033a0
 * undefined FUN_005033a0(void)
 * Address ranges: 005033a0-005033e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005033a0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = DAT_006b9770;
  puVar2 = *(undefined1 **)(param_2 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0064a3b4;
  }
  DAT_006b9770 = DAT_006b9770 + 1;
  FUN_005ae390(param_1,s__s__d_0069dc50,puVar2,iVar1);
  return param_1;
}

