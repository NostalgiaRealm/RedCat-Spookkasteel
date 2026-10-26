/*
 * FUN_0046d4c8 at 0046d4c8
 * undefined4 __register FUN_0046d4c8(int param_1)
 * Address ranges: 0046d4c8-0046d512
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464fe0 slot 30 for TObjectField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464fe0 slot 30 for
   TObjectField. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0046d4c8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = FUN_004693c4(param_1);
  if (((char)uVar1 == '\0') && (iVar2 = FUN_004687b0(*(int *)(param_1 + 0xd0)), -1 < iVar2 + -1)) {
    iVar4 = 0;
    do {
      piVar3 = (int *)FUN_00468730(*(int *)(param_1 + 0xd0),iVar4);
      uVar1 = (**(code **)(*piVar3 + 0x78))();
      if ((char)uVar1 != '\0') {
        return uVar1;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return uVar1;
}

