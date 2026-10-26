/*
 * FUN_004e1c68 at 004e1c68
 * undefined __register FUN_004e1c68(int param_1)
 * Address ranges: 004e1c68-004e1cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e1c68(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint local_c;
  
  iVar1 = FUN_0043579c(param_1);
  local_c = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    local_c = thunk_FUN_00402874(local_c);
  }
  if (-1 < (int)local_c) {
    do {
      piVar2 = (int *)FUN_00435760(param_1,local_c);
      uVar3 = FUN_0040320c(piVar2,(int)&PTR_FUN_004d7f34);
      if ((char)uVar3 != '\0') {
        piVar2 = (int *)FUN_00435760(param_1,local_c);
        FUN_00403094(piVar2);
      }
      local_c = local_c - 1;
    } while (local_c != 0xffffffff);
  }
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x304);
  return;
}

