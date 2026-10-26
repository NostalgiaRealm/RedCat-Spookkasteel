/*
 * FUN_0060a50e at 0060a50e
 * undefined FUN_0060a50e(void)
 * Address ranges: 0060a50e-0060a57a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060a50e(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0061069c(DAT_00747eb0);
  if (uVar1 < (uint)((int)DAT_00747eac + (4 - DAT_00747eb0))) {
    iVar2 = FUN_0061069c(DAT_00747eb0);
    iVar2 = FUN_0060e293(DAT_00747eb0,iVar2 + 0x10);
    if (iVar2 == 0) {
      return;
    }
    DAT_00747eac = (undefined4 *)(iVar2 + ((int)DAT_00747eac - DAT_00747eb0 >> 2) * 4);
    DAT_00747eb0 = iVar2;
  }
  *DAT_00747eac = param_1;
  DAT_00747eac = DAT_00747eac + 1;
  return;
}

