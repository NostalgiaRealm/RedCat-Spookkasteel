/*
 * FUN_0060d0fc at 0060d0fc
 * undefined FUN_0060d0fc(void)
 * Address ranges: 0060d0fc-0060d14e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060d0fc(undefined4 param_1,int param_2)

{
  FUN_00611110(param_1,param_2);
  if (*(char *)(param_2 + 0x40) != '\0') {
    FUN_0060d00b(param_1,2,&DAT_00651d74,param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x80) != '\0') {
    FUN_0060d00b(param_1,2,&DAT_0069fafc,param_2 + 0x80);
  }
  return;
}

