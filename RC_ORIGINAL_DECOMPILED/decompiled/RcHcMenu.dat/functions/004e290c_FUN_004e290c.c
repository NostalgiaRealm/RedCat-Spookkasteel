/*
 * FUN_004e290c at 004e290c
 * undefined __register FUN_004e290c(int * param_1)
 * Address ranges: 004e290c-004e2963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e290c(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_c;
  
  iVar1 = FUN_0045da14((int)param_1);
  local_c = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    local_c = thunk_FUN_00402874(local_c);
  }
  if (-1 < (int)local_c) {
    do {
      piVar2 = (int *)FUN_004e25c4(param_1,local_c);
      FUN_00403094(piVar2);
      FUN_004e25e8(param_1,local_c,0);
      FUN_0045d6d8(param_1,local_c);
      local_c = local_c - 1;
    } while (local_c != 0xffffffff);
  }
  return;
}

