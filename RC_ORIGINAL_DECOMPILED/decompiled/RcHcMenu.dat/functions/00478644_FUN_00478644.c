/*
 * FUN_00478644 at 00478644
 * undefined4 __register FUN_00478644(int param_1, char * param_2)
 * Address ranges: 00478644-00478667
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00478644(int param_1,char *param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x44) == '\x01') {
    iVar1 = FUN_00409758(*(char **)(param_1 + 0x38),param_2);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

