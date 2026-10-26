/*
 * FUN_004f31c0 at 004f31c0
 * undefined FUN_004f31c0(void)
 * Address ranges: 004f31c0-004f321b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f31c0(undefined1 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_100 [64];
  
  puVar2 = local_100;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_0060af1b(local_100,0xff,&DAT_00690818,param_1);
  FUN_005acdb0(local_100);
  FUN_005ad1a0();
  return;
}

