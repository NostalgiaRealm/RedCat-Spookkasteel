/*
 * FUN_0053b85c at 0053b85c
 * int __register FUN_0053b85c(uint param_1)
 * Address ranges: 0053b85c-0053b8b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0053b85c(uint param_1)

{
  bool bVar1;
  undefined4 local_c;
  
  local_c = *(int *)(param_1 + 0x90);
  if ((((*(char *)(param_1 + 0x40) == '\0') && (*(char *)(param_1 + 0x10) == '\0')) &&
      (*(int *)(param_1 + 0x8c) <= *(int *)(param_1 + 0x90))) && (*(char *)(param_1 + 0x85) == '\0')
     ) {
    bVar1 = SCARRY4(local_c,1);
    local_c = local_c + 1;
    if (bVar1) {
      thunk_FUN_00402874(param_1);
    }
  }
  return local_c;
}

