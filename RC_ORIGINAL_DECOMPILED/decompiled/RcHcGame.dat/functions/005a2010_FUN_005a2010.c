/*
 * FUN_005a2010 at 005a2010
 * undefined FUN_005a2010(void)
 * Address ranges: 005a2010-005a205f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005a2010(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_100 [64];
  
  FUN_005a1da0();
  puVar2 = local_100;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_0060af1b(local_100,0xff,&DAT_00690818,param_1);
  FUN_005acdb0(local_100);
  return;
}

