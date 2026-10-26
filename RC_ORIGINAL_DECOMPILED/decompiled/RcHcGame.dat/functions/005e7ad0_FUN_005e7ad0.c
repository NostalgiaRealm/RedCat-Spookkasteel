/*
 * FUN_005e7ad0 at 005e7ad0
 * undefined FUN_005e7ad0(void)
 * Address ranges: 005e7ad0-005e7aef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_005e7ad0(int *param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = *(byte **)param_1[7];
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + *(int *)param_1[0xb])) {
    return (uint)*pbVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x005e7aed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x10))();
  return uVar2;
}

