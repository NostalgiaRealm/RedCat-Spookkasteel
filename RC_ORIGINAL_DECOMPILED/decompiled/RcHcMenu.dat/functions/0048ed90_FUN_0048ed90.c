/*
 * FUN_0048ed90 at 0048ed90
 * undefined __register FUN_0048ed90(int * param_1, int * param_2)
 * Address ranges: 0048ed90-0048edfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048ed90(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_30 [7];
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == (int *)0x0) {
    FUN_00403d94(" Parameter cannot be nil");
  }
  iVar1 = FUN_0048ec24((int)local_c);
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_14 = uVar2 + 1;
    local_10 = 0;
    do {
      FUN_0048f02c(local_c,local_10,local_30);
      (**(code **)(*local_8 + 0xc))(local_8,local_30);
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

