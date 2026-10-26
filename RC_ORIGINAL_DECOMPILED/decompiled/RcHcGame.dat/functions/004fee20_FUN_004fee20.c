/*
 * FUN_004fee20 at 004fee20
 * undefined FUN_004fee20(void)
 * Address ranges: 004fee20-004fee76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fee20(void)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 local_100 [64];
  
  fVar3 = (float10)FUN_00409e30();
  puVar2 = local_100;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_0060af1b(local_100,0xff,&DAT_0069081c,(double)fVar3);
  FUN_005acdb0();
  return;
}

