/*
 * FUN_0049ccbc at 0049ccbc
 * uint __register FUN_0049ccbc(int param_1)
 * Address ranges: 0049ccbc-0049cd34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0049ccbc(int param_1)

{
  int *piVar1;
  int iVar2;
  uint local_10;
  uint local_c;
  
  piVar1 = (int *)FUN_00423498(*(undefined4 **)(param_1 + 8),0);
  iVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_0049c868);
  local_c = *(uint *)(iVar2 + 0x28);
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 8);
  local_10 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    local_10 = thunk_FUN_00402874(local_10);
  }
  if (0 < (int)local_10) {
    do {
      piVar1 = (int *)FUN_00423498(*(undefined4 **)(param_1 + 8),local_10);
      iVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_0049c868);
      local_c = FUN_0049c99c(*(uint *)(iVar2 + 0x28),local_c);
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  return local_c;
}

