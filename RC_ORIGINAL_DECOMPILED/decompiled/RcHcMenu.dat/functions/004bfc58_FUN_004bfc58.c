/*
 * FUN_004bfc58 at 004bfc58
 * undefined __register FUN_004bfc58(int * param_1)
 * Address ranges: 004bfc58-004bfce0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 5 for TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 5 for
   TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004bfc58(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  int local_14;
  int local_c;
  
  if (param_1[0x14] != 0) {
    FUN_004b89a0(param_1[0x14]);
    FUN_00403094((int *)param_1[0x14]);
    param_1[0x14] = 0;
    iVar1 = FUN_004cfd80(param_1,0,extraout_ECX);
    uVar2 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    if (-1 < (int)uVar2) {
      local_14 = uVar2 + 1;
      local_c = 0;
      do {
        piVar3 = (int *)FUN_004cfc68(param_1,local_c);
        iVar1 = FUN_00403224(piVar3,(int)&DAT_004bcb7c);
        FUN_00403094(*(int **)(iVar1 + 4));
        *(undefined4 *)(iVar1 + 4) = 0;
        local_c = local_c + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  return;
}

