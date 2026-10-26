/*
 * FUN_005cc090 at 005cc090
 * undefined FUN_005cc090(void)
 * Address ranges: 005cc090-005cc124
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005cc090(int param_1)

{
  int iVar1;
  int iVar2;
  
  DAT_006cc5b0 = param_1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xbc0) = 0;
  if (iVar1 == 0) {
    return 1;
  }
  if (*(int *)(iVar1 + 0x1a0) == 0) {
    return 1;
  }
  iVar1 = FUN_005ccf30(*(undefined4 *)(iVar1 + 0x148),*(int *)(iVar1 + 0x1a0));
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(int *)(param_1 + 0x3c4) = iVar1;
  *(int *)(param_1 + 0xbc0) = *(int *)(param_1 + 0xbc0) + 1;
  iVar2 = 0;
  while( true ) {
    iVar2 = FUN_005cc780(iVar1,iVar2);
    if (iVar2 == 0) break;
    FUN_005cc130(param_1,iVar2);
  }
  return 1;
}

