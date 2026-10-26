/*
 * FUN_004603bc at 004603bc
 * bool __register FUN_004603bc(int param_1, uint param_2)
 * Address ranges: 004603bc-00460410
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_004603bc(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 local_14;
  undefined1 local_d;
  
  local_d = false;
  local_14 = 0;
  while ((local_d == false && ((int)local_14 < *(int *)(param_1 + 4)))) {
    uVar1 = local_14;
    if (0xe < local_14) {
      uVar1 = thunk_FUN_00402874(local_14);
    }
    uVar1 = *(uint *)(param_1 + 8 + uVar1 * 4);
    local_d = uVar1 == param_2;
    bVar2 = SCARRY4(local_14,1);
    local_14 = local_14 + 1;
    if (bVar2) {
      thunk_FUN_00402874(uVar1);
    }
  }
  return local_d;
}

