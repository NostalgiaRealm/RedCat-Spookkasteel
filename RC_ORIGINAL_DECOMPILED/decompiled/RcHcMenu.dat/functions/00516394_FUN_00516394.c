/*
 * FUN_00516394 at 00516394
 * undefined4 __register FUN_00516394(int param_1, int * param_2)
 * Address ranges: 00516394-005163cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00516394(int param_1,int *param_2)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = 0;
  iVar1 = FUN_0051632c(param_1,param_2);
  if (iVar1 != -1) {
    local_10 = (**(code **)**(undefined4 **)(param_1 + 8))(*(undefined4 **)(param_1 + 8),iVar1);
  }
  return local_10;
}

