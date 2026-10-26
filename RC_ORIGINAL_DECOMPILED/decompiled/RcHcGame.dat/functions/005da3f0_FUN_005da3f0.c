/*
 * FUN_005da3f0 at 005da3f0
 * undefined FUN_005da3f0(void)
 * Address ranges: 005da3f0-005da4bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005da3f0(double param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar3 = 0;
  puVar4 = &DAT_006cf028;
  uVar5 = 0;
  do {
    FUN_0060b760();
    uVar1 = __ftol();
    if (0xff < uVar1) {
      uVar1 = 0xff;
    }
    *puVar4 = uVar1;
    if (uVar5 <= uVar1) {
      piVar6 = &DAT_006cf428 + uVar5;
      for (iVar2 = (uVar1 - uVar5) + 1; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = iVar3;
        piVar6 = piVar6 + 1;
      }
    }
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + 1;
    uVar5 = uVar1;
  } while (puVar4 < &DAT_006cf428);
  if (uVar1 < 0x100) {
    puVar7 = &DAT_006cf428 + uVar1;
    for (iVar3 = 0x100 - uVar1; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0xff;
      puVar7 = puVar7 + 1;
    }
  }
  DAT_0070f828 = (float)param_1;
  DAT_006cf028 = 0;
  DAT_006cf428 = 0;
  _DAT_006cf424 = 0xff;
  DAT_006cf824 = 0xff;
  return;
}

