/*
 * FUN_0044c6b8 at 0044c6b8
 * undefined __register FUN_0044c6b8(int param_1, undefined4 param_2)
 * Address ranges: 0044c6b8-0044c707
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044c6b8(int param_1,undefined4 param_2)

{
  HANDLE pvVar1;
  
  if ((*(char *)(param_1 + 0x216) != '\0') && (*(int *)(param_1 + 0x208) != 0)) {
    FUN_00433700(*(int *)(param_1 + 0x208),0xb004,0,param_2);
  }
  if (*(char *)(param_1 + 0x217) == '\x02') {
    pvVar1 = FUN_0044b32c(param_1);
    if (pvVar1 != (HANDLE)0x0) {
      pvVar1 = FUN_0044b32c(param_1);
      FUN_0044c6b8((int)pvVar1,param_2);
    }
  }
  return;
}

