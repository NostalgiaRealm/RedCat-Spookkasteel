/*
 * FUN_005c7dc0 at 005c7dc0
 * undefined FUN_005c7dc0(void)
 * Address ranges: 005c7dc0-005c7e0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005c7dc0(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (DAT_006a99f4 == 0) {
    puVar2 = &DAT_0069b75c;
  }
  else {
    DAT_006a99f4 = 0;
    puVar2 = &DAT_006a91c8;
  }
  iVar1 = FUN_0060d46b(s_Sound_log_006a99f8,puVar2);
  if (iVar1 != 0) {
    FUN_0060da09(iVar1,&DAT_006a91c4,param_1);
    FUN_0060d30d(iVar1);
  }
  return;
}

