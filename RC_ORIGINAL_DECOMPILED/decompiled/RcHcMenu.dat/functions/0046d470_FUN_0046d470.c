/*
 * FUN_0046d470 at 0046d470
 * uint __register FUN_0046d470(int param_1)
 * Address ranges: 0046d470-0046d4c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464fe0 slot 28 for TObjectField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464fe0 slot 28 for
   TObjectField. Original bytes unchanged; names and types still inferred. */

uint FUN_0046d470(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 10;
  iVar2 = FUN_004687b0(*(int *)(param_1 + 0xd4));
  if (0 < iVar2) {
    iVar2 = FUN_004687b0(*(int *)(param_1 + 0xd4));
    if (-1 < iVar2 + -1) {
      iVar6 = 0;
      do {
        piVar3 = (int *)FUN_00468730(*(int *)(param_1 + 0xd4),iVar6);
        iVar4 = (**(code **)(*piVar3 + 0x70))();
        uVar5 = uVar5 + iVar4;
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar1 = uVar5 & 1;
    uVar5 = (int)uVar5 >> 1;
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 + (uVar1 != 0);
    }
  }
  return uVar5;
}

