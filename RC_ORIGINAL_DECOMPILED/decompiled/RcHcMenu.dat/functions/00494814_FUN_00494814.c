/*
 * FUN_00494814 at 00494814
 * int __register FUN_00494814(int * param_1, int * param_2, uint param_3, undefined1 param_4)
 * Address ranges: 00494814-00494856
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00494814(int *param_1,int *param_2,uint param_3,undefined1 param_4)

{
  bool bVar1;
  undefined4 local_14;
  
  local_14 = FUN_0049476c(param_1,param_2,*(int **)(param_3 + 0x18),param_4);
  if ((*(byte *)(param_3 + 8) & 2) != 0) {
    bVar1 = SBORROW4(0,local_14);
    local_14 = -local_14;
    if (bVar1) {
      thunk_FUN_00402874(param_3);
    }
  }
  return local_14;
}

