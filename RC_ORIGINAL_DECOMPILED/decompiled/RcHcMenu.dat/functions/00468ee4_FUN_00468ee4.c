/*
 * FUN_00468ee4 at 00468ee4
 * undefined __register FUN_00468ee4(int param_1, undefined4 param_2, int param_3)
 * Address ranges: 00468ee4-00468f10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00468ee4(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int local_c;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    local_c = param_3;
    uVar1 = FUN_004714b4(*(int *)(param_1 + 0x28));
    if ((char)uVar1 != '\0') {
      local_c = param_1;
      (**(code **)(**(int **)(param_1 + 0x28) + 0xac))(*(int **)(param_1 + 0x28),10,&local_c);
    }
  }
  return;
}

