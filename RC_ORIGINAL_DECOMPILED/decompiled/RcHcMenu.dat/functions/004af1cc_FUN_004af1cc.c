/*
 * FUN_004af1cc at 004af1cc
 * undefined __register FUN_004af1cc(int param_1)
 * Address ranges: 004af1cc-004af222
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4aeee4 slot 56 for TGDIForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4aeee4 slot 56 for
   TGDIForm. Original bytes unchanged; names and types still inferred. */

void FUN_004af1cc(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
    iVar1 = FUN_0044f140(*(int *)PTR_DAT_005725f0);
    uVar2 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    if (-1 < (int)uVar2) {
      local_10 = uVar2 + 1;
      local_c = 0;
      do {
        piVar3 = (int *)FUN_0044f12c(*(int *)PTR_DAT_005725f0,local_c);
        (**(code **)(*piVar3 + 0x74))();
        local_c = local_c + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
  }
  return;
}

