/*
 * FUN_00553680 at 00553680
 * undefined FUN_00553680(void)
 * Address ranges: 00553680-005536d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00553680(undefined1 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_100 [64];
  
  FUN_005572e0();
  puVar2 = local_100;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_0060af1b(local_100,0xff,&DAT_00690818,param_1);
  FUN_005acdb0(local_100);
  return;
}

