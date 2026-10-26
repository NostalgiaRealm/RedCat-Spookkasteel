/*
 * FUN_005163d0 at 005163d0
 * undefined1 __register FUN_005163d0(int param_1, int * param_2)
 * Address ranges: 005163d0-00516403
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_005163d0(int param_1,int *param_2)

{
  int iVar1;
  undefined1 local_d;
  
  local_d = 0;
  iVar1 = FUN_00516394(param_1,param_2);
  if (iVar1 != 0) {
    local_d = *(undefined1 *)(iVar1 + 4);
  }
  return local_d;
}

