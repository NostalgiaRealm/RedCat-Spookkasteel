/*
 * FUN_004f23a8 at 004f23a8
 * undefined4 __register FUN_004f23a8(int param_1, int * param_2, int * param_3)
 * Address ranges: 004f23a8-004f23fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004f23a8(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_00403d94("TOACInterface.QueryInterface: Control is nil");
  }
  cVar1 = FUN_00403128(*(int **)(param_1 + 8),param_2,param_3);
  if (cVar1 == '\0') {
    local_14 = 0x80004002;
  }
  else {
    local_14 = 0;
  }
  return local_14;
}

