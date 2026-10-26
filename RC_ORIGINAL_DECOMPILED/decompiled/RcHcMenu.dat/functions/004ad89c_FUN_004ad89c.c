/*
 * FUN_004ad89c at 004ad89c
 * int * __register FUN_004ad89c(int param_1, byte param_2)
 * Address ranges: 004ad89c-004ad8d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004ad89c(int param_1,byte param_2)

{
  char cVar1;
  undefined4 local_10;
  
  local_10 = (int *)FUN_004ad63c(param_1,(uint)param_2);
  cVar1 = (**(code **)(*local_10 + 0x1c))();
  if (cVar1 != '\0') {
    local_10 = (int *)FUN_004ad63c(param_1,0);
  }
  return local_10;
}

