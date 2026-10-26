/*
 * FUN_004806d0 at 004806d0
 * undefined __register FUN_004806d0(undefined4 param_1)
 * Address ranges: 004806d0-00480709
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004806d0(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  if ((DAT_005739a0 != (undefined4 *)0x0) && (iVar2 = DAT_005739a0[2], -1 < iVar2 + -1)) {
    iVar3 = 0;
    do {
      pcVar1 = (code *)FUN_00412384(DAT_005739a0,iVar3);
      (*pcVar1)(param_1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

