/*
 * FUN_004a49b0 at 004a49b0
 * undefined __register FUN_004a49b0(uint param_1)
 * Address ranges: 004a49b0-004a49f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a49b0(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_00403d94(" Self = nil: ExitProc");
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    piVar1 = (int *)(param_1 + 0x10);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (SBORROW4(iVar2,1)) {
      thunk_FUN_00402874(param_1);
    }
    FUN_00403db0((int *)(param_1 + 8));
  }
  return;
}

