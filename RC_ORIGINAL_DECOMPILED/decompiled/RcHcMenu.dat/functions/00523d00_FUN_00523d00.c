/*
 * FUN_00523d00 at 00523d00
 * undefined __register FUN_00523d00(int * param_1, uint param_2)
 * Address ranges: 00523d00-00523d79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00523d00(int *param_1,uint param_2)

{
  uint uVar1;
  int local_14;
  uint local_10;
  uint local_c;
  int *local_8;
  
  local_c = param_2;
  if ((int)param_2 < 0) {
    local_c = 0;
  }
  uVar1 = local_c;
  local_8 = param_1;
  if ((param_1[0x81] <= (int)local_c) && (uVar1 = param_1[0x81] - 1, SBORROW4(param_1[0x81],1))) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  local_c = uVar1;
  local_14 = local_8[0x85];
  local_10 = local_c;
  FUN_00524d1c(local_8,&local_14);
  local_8[0x85] = local_14;
  local_8[0x86] = local_10;
  return;
}

