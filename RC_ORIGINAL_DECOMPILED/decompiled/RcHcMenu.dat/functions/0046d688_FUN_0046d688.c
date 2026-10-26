/*
 * FUN_0046d688 at 0046d688
 * undefined __register FUN_0046d688(int param_1)
 * Address ranges: 0046d688-0046d6bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464fe0 slot 15 for TObjectField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464fe0 slot 15 for
   TObjectField. Original bytes unchanged; names and types still inferred. */

void FUN_0046d688(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_004687b0(*(int *)(param_1 + 0xd4));
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      piVar2 = (int *)FUN_00468730(*(int *)(param_1 + 0xd4),iVar3);
      (**(code **)(*piVar2 + 0x3c))();
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

